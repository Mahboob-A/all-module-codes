# 021022 Sunday async and await 

""" 
async, await
The async and await keywords are provided by the asyncio library in Python. 
They are used to write concurrent code in Python.

In the above program, the async keyword specifies that the function will be executed asynchronously.

Here, first Hello is printed. The await keyword makes the program wait for 5 second. And then the world is printed.
"""



import asyncio


async def main():
    print('Hello')
    await asyncio.sleep(2)
    print('world')


asyncio.run(main())


import asyncio as asy 

async def ok():
        print("Hey")
        await asy.sleep(2)
        print("People")

asy.run(ok())