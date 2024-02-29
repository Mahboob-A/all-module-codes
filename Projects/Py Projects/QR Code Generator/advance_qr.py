# 130923, Wednesday, 10.00 pm 



from turtle import back
import qrcode
# from PIL import Image


qr = qrcode.QRCode(
        # version=1, error_correction=qrcode.constants.ERROR_CORRECT_H, box_size=10, border=4
        version=1, error_correction=qrcode.ERROR_CORRECT_H, box_size=10, border=4  # both will work 
)

qr.add_data('https://makeitmeme.com')

qr.make(fit=True)

img = qr.make_image(fill_color='red', back_color='blue')


img.save('make_meme_5.png')
