from tkinter import *
from PIL import Image, ImageTk
import tkinter as tk
from tkinter import font
import PIL

HEIGHT =480
WIDTH = 800

root = tk.Tk()
root.title('계탄날')
canvas = tk.Canvas(root, height=HEIGHT, width=WIDTH)
canvas.pack()
###################### Left frame + main logo
frame_left=tk.Frame(canvas, bg='#ffffff')
frame_left.place(relx=0.010,rely=0.01,relwidth=0.49, relheight=0.98)


background_image = tk.PhotoImage(file='logo.png')
background_label = tk.Label(frame_left, image=background_image,bg='#ffffff')
background_label.place(relx=0,rely=0.2)
###################### Right 1 frame + menu

# command 추가해야됨

frame_right1=tk.Frame(canvas, bg='#ffffff', bd=10)
frame_right1.place(relx=0.51,rely=0.01,relwidth=0.49, relheight=0.32)
frame_right1_label=tk.Label(frame_right1,text="Recipes",bg='#ffffff',font=('@나눔고딕',15))
frame_right1_label.grid(row=0, column=0)

#boil egg
b_egg_image = tk.PhotoImage(file='boiled_egg.png')
b_egg_button = tk.Button(frame_right1,image=b_egg_image,text="Boil egg 1m5s",wraplength=80,font=('@나눔고딕',10),compound = TOP,bg='#ffffff')
b_egg_button.place(relx=0.08,rely=0.2)
#s egg
s_egg_image = tk.PhotoImage(file='scramble_egg.png')
s_egg_button = tk.Button(frame_right1,image=s_egg_image,text="scramble egg 40s",wraplength=100,font=('@나눔고딕',10),compound = TOP,bg='#ffffff')
s_egg_button.place(relx=0.4,rely=0.2)

#f egg
f_egg_image = tk.PhotoImage(file='fry_egg.png')
f_egg_button = tk.Button(frame_right1,image=f_egg_image,text="w.done/medium  20s/40s",wraplength=110,font=('@나눔고딕',10),compound = TOP,bg='#ffffff')
f_egg_button.place(relx=0.72,rely=0.2)



frame_right2=tk.Frame(canvas, bg='#ffffff', bd=10)
frame_right2.place(relx=0.51,rely=0.34,relwidth=0.495, relheight=0.32)
frame_right2_label=tk.Label(frame_right2,text="Timer",bg='#ffffff',font=('@나눔고딕',15))
frame_right2_label.grid(row=0, column=0)


frame_right3=tk.Frame(canvas, bg='#ffffff', bd=10)
frame_right3.place(relx=0.51,rely=0.67,relwidth=0.495, relheight=0.32)
frame_right3_label=tk.Label(frame_right3,text="Condition",bg='#ffffff',font=('@나눔고딕',15))
frame_right3_label.grid(row=0, column=0)

root.mainloop()