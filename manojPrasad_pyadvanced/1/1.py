def add(x,y):
    return x+y

def merge(l1,l2):
    l3=map(add,l1,l2)
    return l3

l1=list(input("l1\n"))
l2=list(input("l2\n"))
if(len(l1)!=len(l2)):
    print("Error, lists are not of  same size. Hence will add zero")
    if(len(l1)>len(l2)):
        l3=[0]*len(l1)
        for i in range(len(l2)):
            l3[i]=l2[i]
        l4=merge(l1,l3)
    
    if(len(l1)<len(l2)):
        l3=[0]*len(l2)
        for i in range(len(l1)):
            l3[i]=l1[i]
        l4=merge(l2,l3)
else:
    l4=merge(l1,l2)
print(l4)
