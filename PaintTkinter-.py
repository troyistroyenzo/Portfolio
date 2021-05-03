from tkinter import *
from tkinter.ttk import Scale
from tkinter import colorchooser, filedialog, messagebox
from tkinter.filedialog import asksaveasfilename
import PIL.ImageGrab as ImageGrab

class Paint():

    def __init__(self, root):
        self.root = root
        self.root.title("Paint")
        self.root.geometry("1000x720")
        self.root.configure(background='White')
        self.root.resizable(0, 0)

        #var
        self.pen_color = "black"
        self.eraser_color = "white"


        #COLOR PALETTE
        self.color_frame = LabelFrame(self.root, text='Color Palette', font=('helvetica', 15), bd=2, relief=RIDGE, bg="white")
        self.color_frame.place(x=10, y=0, width=300, height=90)

        colors = ['#ff0000', '#ff4dd2', '#ffff33', '#000000', '#0066ff', '#660033', '#4dff4d', '#b300b3', '#00ffff', '#808080', '#99ffcc', '#336600', '#ff9966', '#ff99ff', '#00cc99']
        i = j = 0
        for color in colors:
            Button(self.color_frame, bg=color, bd=2, relief=RIDGE, width=3, command=lambda col=color:self.select_color(col)).grid(row=j, column=i)
            i += 1
            if i == 6:
                i = 0
                j = 1


        #BUTTONS
        self.pen_color_button = Button(self.root, text="More Colors", bd=2, font=('helvetica', 10, 'bold'),  bg='white', command=self.custom_pen_colors, width=10, height=2, relief=RIDGE)
        self.pen_color_button.place(x=210, y=30)

        self.eraser_button = Button(self.root, text="Erase", font=('helvetica', 10, 'bold'),  bd=2, bg='white', command=self.eraser, width=8, height=2, relief=RIDGE)
        self.eraser_button.place(x=330, y=30)

        self.clear_button = Button(self.root, text="Clear", font=('helvetica', 10, 'bold'),  bd=2, bg='white', command=lambda : self.canvas.delete("all"), width=8, height=2, relief=RIDGE)
        self.clear_button.place(x=430, y=30)

        self.save_button = Button(self.root, text="Save", font=('helvetica', 10, 'bold'), bd=2, bg='white', command=self.save_paint, width=8, height=2, relief=RIDGE)
        self.save_button.place(x=530, y=30)

        self.canvas_color_button = Button(self.root, text="Canvas", font=('helvetica', 10, 'bold'), bd=2, bg='white', command=self.canvas_color, width=8, height=2, relief=RIDGE)
        self.canvas_color_button.place(x=630, y=30)



        #FRAMES



        self.pen_size_scale_frame = LabelFrame(self.root, text="Pen Size", bd=2, bg='white', font=('helvetica', 10), relief=RIDGE)
        self.pen_size_scale_frame.place(x=850, y=90, height=160, width=70)
        self.pen_size = Scale(self.pen_size_scale_frame, orient=VERTICAL, from_=50, to=0, length=150)
        self.pen_size.set(1)
        self.pen_size.grid(row=1, column=0, padx=20)

       
        #create the actual canvas
        self.canvas = Canvas(self.root, bg='white', bd=5, relief=GROOVE, height=700, width=800)
        self.canvas.place(x=0, y=100)

        self.canvas.bind("<B1-Motion>", self.paint)

        #Functions

    def paint(self, event):
        x1,y1 = (event.x-1), (event.y-1)
        x2,y2 = (event.x+1), (event.y+1)

        self.canvas.create_oval(x1, y1, x2, y2, fill=self.pen_color, outline=self.pen_color, width=self.pen_size.get())

    def select_color(self,col):
        self.pen_color = col

    def eraser(self):
        self.pen_color = self.eraser_color

    def canvas_color(self):
        color = colorchooser.askcolor()
        self.canvas.configure(background=color[1])
        self.eraser_color = color[1]

    def custom_pen_colors(self):
        color = colorchooser.askcolor()
        self.pen_color = color[1]

    def save_paint(self):
        try:
            filename = asksaveasfilename(defaultextension='.jpg')
            x = self.root.winfo_rootx() + self.canvas.winfo_x()
            y = self.root.winfo_rooty() + self.canvas.winfo_y()
            x1 = x + self.canvas.winfo_width()
            y1 = y + self.canvas.winfo_height()
            ImageGrab.grab().crop((x, y, x1, y1)).save(filename)
            messagebox.showinfo('Paint says,' 'image is saved as' + str(filename))

        except:
            messagebox.showerror("paints says", "epic fail! nagkamali po kayo boss")




if __name__ == "__main__":
    root = Tk()
    p = Paint(root)
    root.mainloop()



