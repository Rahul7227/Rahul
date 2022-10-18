number=int(input("enter the fibonaci number of tearm :"))
a=0
b=1
c=0
while(c<=number):
    print(c)
    a=b #b is copy a
    b=c #c is copy b
    c=a+b  #total a and b copy a c
