# 130923, Wednesday, 10.00 pm 


import qrcode as qr 

img = qr.make('https://makeitmeme.com')

img.save('meme_game.png')