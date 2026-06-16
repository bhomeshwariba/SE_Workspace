
import tkinter as tk
from tkinter import messagebox

class reg:
  def __init__(self):
    self.window=tk.Tk()
    self.window.title("registration form")

    self.name_label = tk.Label(self.window,text="Name:")
    self.name_label.grid(row=0,column=0,padx=5,pady=5)
    self.name_entry=tk.Entry(self.window)
    self.name_entry.grid(row=0,column=1,padx=5,pady=5)

    self.email_label=tk.Label(self.window,text="Email:")
    self.email_label.grid(row=1,column=0,padx=5,pady=5)
    self.email_entry=tk.Entry(self.window)
    self.email_entry.grid(row=1,column=1,padx=5,pady=5)

    self.password_label=tk.Label(self.window,text="Password:")
    self.password_label.grid(row=2,column=0,padx=5,pady=5)
    self.password_entry=tk.Entry(self.window,show="*")
    self.password_entry.grid(row=2,column=1,padx=5,pady=5)

    self.confirm_password_label=tk.Label(self.window,text="Confirm Password:")
    self.confirm_password_label.grid(row=3,column=0,padx=5,pady=5)
    self.confirm_password_entry=tk.Entry(self.window,show="*")
    self.confirm_password_entry.grid(row=3,column=1,padx=5,pady=5)

    self.register_button=tk.Button(self.window,text="Register",command=self.register_user)
    self.register_button.grid(row=4,column=1,padx=5,pady=5)

    def register_user(self):
      name=self.name_entry.get()
      email=self.email_entry.get()
      password=self.password_entry.get()
      confirm_password=self.confirm_password_entry.get()

      if password==confirm_password:
          with open("users.txt","a")as file:
            file.write(f"Name:{name},Email:{email},password:{password}\n")
            messagebox.showinfo("registration success","user registered successfully!!")
            self.window.destroy()
      else:
        messagebox.showerror("passwd mismatch","passwd do not match.please try again.")

    def run(self):
     self.window.mainloop()

    
  if __name__ == "__main__":
   form=reg()
   form.run()
    
    
    






