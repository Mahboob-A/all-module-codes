"""  main of camera project  """

"""  
191022, Wednesday, Lab Class 03
Camera Project
10-4: Main of camera (first window) Creating the window 
08.45 am
"""




import cv2
from PyQt5.QtCore import QTimer
import sys
from PyQt5.QtWidgets import *
from PyQt5.QtGui import QPixmap,  QImage, QIcon
from datetime import datetime
from time import sleep 


class Window(QWidget):
        """ Main Window """

        def __init__(self):
                super().__init__()

                # variables for app window
                self.window_width = 600
                self.window_height = 400

                # variables for image
                self.image_width = 600
                self.image_height = 400

                # other variables 
                self.date_time = '0-0-0'
                self.record_flag = False 


                # load icon
                self.camera_icon = QIcon(cap_icon_path)
                self.vid_icon        = QIcon(vid_icon_path)
                self.stop_icon      = QIcon(stop_icon_path)

                # save the video 
                self.fourcc = cv2.VideoWriter_fourcc(*'XVID')

                # setup the window
                self.setWindowTitle('My Camera')
                self.setGeometry(600, 350, self.window_width, self.window_height)
                self.setFixedSize(self.window_width, self.window_height)

                # set up timer to show frame interval
                self.timer = QTimer()
                self.timer.timeout.connect(self.update)

                # camera variable
                self.cam = 0

                self.ui()

        def ui(self):
                """ all UI related informations """

                # layout
                grid_layout = QGridLayout()
                self.setLayout(grid_layout)

                # image label
                self.image_label = QLabel(self)
                self.image_label.setGeometry(0, 0, self.image_width, self.image_height)

                ## set camera button ##
                self.camera_button = QPushButton(self)
                self.camera_button.setIcon(self.camera_icon)
                # changing button style
                self.camera_button.setStyleSheet("border-radius : 20; border : 3px solid skyblue; border-width : 4px")
                self.camera_button.setFixedSize(60, 60)
                # connceting button to the save_img method to save image 
                self.camera_button.clicked.connect(self.save_img)

                ## set video button ##
                self.video_button = QPushButton(self)
                # we do not set the button here as it is being set in the update method depending upon the status of recording 
                # self.video_button.setIcon(self.vid_icon) 
                # changing button style
                self.video_button.setStyleSheet("border-radius : 20; border : 3px solid skyblue; border-width : 4px")
                self.video_button.setFixedSize(60, 60)
                # connceting button to the save_vid method to save video
                self.video_button.clicked.connect(self.save_vid)



                # capturing frame and starting timer
                if not self.timer.isActive():
                        self.cap = cv2.VideoCapture(self.cam)
                        self.timer.start(10)

                # changing grid, adding icon and camera to the layout
                # 0, 0 is as row and column wise
                grid_layout.addWidget(self.camera_button, 0, 0)
                grid_layout.addWidget(self.image_label, 0, 1, 2, 3)
                grid_layout.addWidget(self.video_button, 1, 0)

                # changing grid, adding icon and video to the layout

                self.show()

        def update(self):
                """ update camera frame """
                _, self.frame = self.cap.read()  # self.frame is capturing the image and ignoring the first returned value
                # changing the icon while reconrding to red stop icon and vis versa 
                # if record_flag == True 
                if self.record_flag:
                        # print("Recording...")
                        self.video_button.setIcon(self.stop_icon)
                        self.frame = cv2.circle(self.frame, (20, 70), 5, (0, 0, 255), 10) # this is a red circle while recording is on 
                else:
                        self.video_button.setIcon(self.vid_icon)

                frame = cv2.cvtColor(self.frame, cv2.COLOR_BGR2RGB)
                height, width, channel = frame.shape
                step = width * channel
                q_frame = QImage(frame.data, width, height, step, QImage.Format_RGB888)
                self.image_label.setPixmap(QPixmap.fromImage(q_frame))

        def save_img(self):
                """ save image """
                print("image saved")
                self.get_time()  #calling the time function to get current time 
                cv2.imwrite(f"image {self.date_time}.jpg", self.frame) #saving img with current time 
                # this will allow not to override the previous image as the file name is being changing based 
                # on the current time 


        def save_vid(self):
                """ record video """
                print(self.record_flag)
                # toggle the button 
                if self.record_flag == True:
                        self.record_flag = False 
                        print('Recording Stopped')
                else:
                        self.record_flag = True
                        print("Recording Started")
                        self.get_time()

                        # saving the video 
                        self.vid_footage = cv2.VideoWriter(f"{self.date_time}.avi", self.fourcc, 20.0, (self.image_width, self.image_height))

        def get_time(self):
                current_time = datetime.now()
                # small case is for month, day year and capital case is for Hour, Minute and Second 
                self.date_time = current_time.strftime("%d-%m-%y %H-%M-%S")  
                print(self.date_time)




# run
if __name__ == '__main__':

    cap_icon_path = 'assets/cam.png'
    vid_icon_path = 'assets/vid.png'
    stop_icon_path = 'assets/stop.png'

    app = QApplication(sys.argv)
    win = Window()
    # win.show()   if in ui, self.show() is used then here it is not necessary
    sys.exit(app.exec_())


"""  
The reason why sys.exit(app.exec_()) us used: 


When Unix-style applications exit, they return a number to their parent process called a 
'status code' or 'exit status'. 0 is used to indicate success; anything non-zero is a failure. 
(There's been some attempt to standardise the meaning of error codes, but it's still generally left up to 
each program.)

app.exec_() runs your main loop, and returns a status code when it exits. sys.exit(n) quits your application 
and returns n to the parent process (normally your shell). So the difference is, the longer version passes on the 
status code when your program exits. It's better to use sys.exit(app.exec_()) 
because then other parts of the system can detect when your program exited due to an error.

"""
