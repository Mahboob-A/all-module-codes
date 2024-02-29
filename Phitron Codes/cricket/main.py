
'''
Project done on 241022
'''

import asyncio
from time import sleep
import sys 

from driver import main 

def instructions(): 
    print('''
Commands :  

value = Just put 1 to 6 for normal run. 
Nrun = N is No Ball, and run is scored run in this No Ball. Put 0 if no additional run is scored. 
Wrun = W is Wide Ball, and run is scored run in this Wide Ball. Put 0 if no additional run is scored. 
W = A single W stands for Wicket. To Make the stricket out, put W. 
''')

if __name__ == '__main__' : 
    instructions()
    sleep(1)
    asyncio.run(main())





