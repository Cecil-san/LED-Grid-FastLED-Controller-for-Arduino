from PIL import Image

img = Image.open("J:\Glowy eyes\python stuff\eye.bmp")
imgData = img.load()

width, height = img.size

with open('eye_graph.txt', 'w') as file:
    for y in range(height):

        for x in range(width):
            r, g, b, a = imgData[x,y]
            print(r, g, b)
            dump = f"{r, g, b}" + "\t"
            file.write(dump)
            
        file.write("\n")
            
