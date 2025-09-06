num = input("enter a string to check palindrone :")
num = num.lower()
reversed_num = num[:: -1]
if num == reversed_num:
    print("yes it is palindron")
else:
    print("not a palindron")