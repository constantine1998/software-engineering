add = lambda a,b:a+b

def Lcollapse(x):
    r=reduce(add,x)
    for what in r:
        print what,
