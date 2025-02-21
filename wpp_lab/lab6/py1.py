class PwdMgr:
    def __init__(self):
        self.pwds = []# store passwords

    def get_pwd(self):#get last pwd
        return self.pwds[-1] if self.pwds else None

    def set_pwd(self, new_pwd): # set new pwd
        if new_pwd and (not self.pwds or new_pwd != self.pwds[-1]):
            self.pwds.append(new_pwd)
            print("Password updated successfully.")
        else:
            print("New password must be different from the last one.")

    def check_pwd(self, pwd):  # check if correct
        return pwd == self.get_pwd()


pwd_mgr = PwdMgr()

while True:
    print("\n1. Set Password")
    print("2. Get Current Password")
    print("3. Check Password")
    print("4. Exit")
    
    choice = input("Choose an option: ")

    if choice == "1":
        new_pwd = input("Enter new password: ")
        pwd_mgr.set_pwd(new_pwd)

    elif choice == "2":
        current_pwd = pwd_mgr.get_pwd()
        if current_pwd:
            print("Current password is:", current_pwd)
        else:
            print("No password has been set yet.")

    elif choice == "3":
        check_pwd = input("Enter password to check: ")
        if pwd_mgr.check_pwd(check_pwd):
            print("Password is correct.")
        else:
            print("Incorrect password.")

    elif choice == "4":
        print("Exiting program.")
        break

    else:
        print("Invalid choice, try again.")