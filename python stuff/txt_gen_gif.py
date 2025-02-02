from PIL import Image
from PIL import GifImagePlugin

gif = Image.open("D:\Projects\Glowy eyes\python stuff\eye.gif")
gifData = gif.load()

width, height = gif.size
frames = gif.n_frames

with open('D:\Projects\Glowy eyes\python stuff\eye_graph_gif.txt', 'w') as file:

    for f in range(1, frames):
        
        file.write(f"frame {f}\n\n")
        gif.seek(f)
        gif.save("D:\Projects\Glowy eyes\python stuff\_temp.bmp")
        img = Image.open("D:\Projects\Glowy eyes\python stuff\_temp.bmp")
        imgData = img.load()

        for y in range(height):

            for x in range(width):
                r, g, b = imgData[x,y]
                print(r, g, b)
                dump = f"{r, g, b}" + "\t"
                file.write(dump)
                
            file.write("\n\n")
        file.write("\n")
            
