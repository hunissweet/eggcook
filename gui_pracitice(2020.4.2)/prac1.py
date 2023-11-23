import tkinter as tk

# to cover value easily
HEIGHT=500
WIDTH=600

#this function has some functions!!
def test_fuction(entry):
    print("this is entry :", entry)
root = tk.Tk()

canvas = tk.Canvas(root, height=HEIGHT, width = WIDTH)
canvas.pack()
#background image should be located at the same directory
# background_image = tk.PhotoImage(file='name.png')
# background_label = tk.Label(root,image=background_image)
# background_label.place(x=0,y=0)
#have to know anchor function
frame = tk.Frame(root, bg='#80c1ff',bd=5)
#bd border
frame.place(relx=0.5, rely=0.1, relwidth=0.75,relheight=0.1, anchor='n')

entry = tk.Entry(frame, font=40)
entry.place(relwidth=0.65,relheight=1)


button = tk.Button(frame, text = "get weather", bg='gray',font=40, command= lambda: test_fuction(entry.get()))
button.place(relx=0.7,  relwidth=0.3,relheight=1 )

lower_frame = tk.Frame(root, bg='#80c1ff',bd=10)
lower_frame.place(relx=0.5,rely=0.25,relwidth=0.75,relheight=0.6,anchor='n')

label = tk.Label(lower_frame)
label.place(relwidth=1,relheight=1)


root.mainloop()