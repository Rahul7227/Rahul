list1=[1,4,3,5,6,3,5,67,2,9,2,3,44,6]

for i in range(0,len(list1)):# now i is point to first digit and

    for j in range(i+1,len(list1)):# now j is point to second digit

        if list1[i]>=list1[j]: #i is large j to a swapping otherwise not

            list1[i],list1[j]=list1[j],list1[i]

print(list1)