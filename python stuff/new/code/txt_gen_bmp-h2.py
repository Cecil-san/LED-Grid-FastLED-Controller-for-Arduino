from PIL import Image
import math

img = Image.open(r"J:\Glowy eyes\python stuff\new\eyes.bmp")
imgData = img.load()

width, height = img.size

numLeds = 128
sqSize = math.sqrt(numLeds)
nGrids = 2

with open(r'J:\Glowy eyes\python stuff\new\eye_graph_h2.txt', 'w') as file:
    for y in range(height):

        for x in range(width):
            r, g, b, a = imgData[x,y]
            print(r, g, b)
            dump = f"{r, g, b}" + "\t"
            file.write(dump)
            
        file.write("\n")
        