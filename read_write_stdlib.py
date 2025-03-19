f=open("a.txt")
f2=open("b2.txt","w")
lines=f.readlines()
for i in range(2,4,1):
    zzz,www=map(int,lines[i].split())
    www=www*2
    f2.write('%d %d\n'%(zzz,www))

f.close()
f2.close()


