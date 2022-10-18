num=int(input("enter number to check :"))
temp=num #num copy to temp
count=0
while(temp>0):  # this while loop is used to how many number
    count=count+1
    temp=temp//10
sum=0
temp=num
while(temp>0):
    digit=temp%10
    x=1
    pro=1
    while(x<=count):  #total number to multiplication
        pro=pro*digit
        x=x+1
    sum=sum+pro #total number of sum
    temp=temp//10
if(sum==num):
    print("Armstrong number")
else:
    print(" Not Armstrong number")



