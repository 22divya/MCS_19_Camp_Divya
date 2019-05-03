n=[1,2,0,0,0,3,6]

i=0
while i<len(n):
    if n[i]==0:
        n.pop(i)
        n.append(0)
        i=i+1

    else:
        i=i+1

print(n)
