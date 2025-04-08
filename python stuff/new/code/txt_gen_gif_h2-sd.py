from PIL import Image
from PIL import GifImagePlugin

gif = Image.open(r"J:\LED-Grid-FastLED-Controller-for-Arduino\python stuff\new\eyes.gif")
gifData = gif.load()

width, height = gif.size

sqSize = 8
nGrids = 2

frames = gif.n_frames

with open(r'J:\LED-Grid-FastLED-Controller-for-Arduino\python stuff\new\graph-sd.txt', 'w') as file:

    file.write(f"{width},{height},{sqSize},{frames-1},")

    for f in range(1, frames):
        gif.seek(f)
        file.write(f"{gif.info['duration']}")
        if f < frames - 1:
            file.write(",")
        else:
            file.write(":")

    for f in range(1, frames):
        gif.seek(f)
        gif.save(r"J:\LED-Grid-FastLED-Controller-for-Arduino\python stuff\new\_temp.bmp")
        img = Image.open(r"J:\LED-Grid-FastLED-Controller-for-Arduino\python stuff\new\_temp.bmp")
        imgData = img.load()

        for g in range(nGrids):
            currentGrid = g
            for y in range(sqSize):
                for x in range(sqSize):
                    r, g, b = imgData[x + (sqSize * currentGrid),y]
                    print(r, g, b)
                    dump = f"{r},{g},{b},"
                    file.write(dump)