import re

Password= input("Input password:").lower()
V = True
while V:
    if (len(Password)<6 or len(Password)>12):
        break
    elif not re.search("[a-z]",Password):
        break
    elif not re.search("[0-9]",Password):
        break
    elif not re.search("[A-Z]",Password):
        break
    elif not re.search("[$#@]",Password):
        break
    elif re.search("\s",Password):
        break
    else:
        print("Valid Password")
        V=False
        break

if V:
    print("Not a Valid Password")