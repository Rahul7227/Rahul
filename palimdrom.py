num=int(input("enter the number:"))
temp=num  #num to copy temp
rev=0
while(num>0):
    rev=rev*10+num%10
    num=num//10
if(temp==rev):
       print("palimdrom")
else:
       print("Not palimdrom")