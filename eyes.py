from PIL import Image

img = Image.open('eye.bmp')
rgb = img.convert('RGB')

print (rgb)
Image.show(rgb)