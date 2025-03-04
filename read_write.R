#R

a=read.table("./a.txt",skip=2)

b=a
b[,2]=b[,2]*2


write.table(x=b,file="./b2.txt",row.names=F,col.names=F,quote=F)

