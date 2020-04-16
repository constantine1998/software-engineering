#Works in python 2, please run in python 2 only.
def filter(fn,l,v):
    l3=[]
    for i in range(len(l)):
        t=fn(l[i],v)
        if(t==1):
            l3.append(l[i])
    return l3

def pick2 (l,c):
    if(l[0]==c):
        return 1
    else:
        return 0

def pick(l,c):
    r=filter(pick2,l,c)
    print(set(r))
