a=int(input())
hari=int(a/84600)
jam=int((a/3600)%24)
menit=int((a/60)%60)
detik=int(a%60)
if(a<=3600):
    print("%.2d:%.2d:%.2d" % (jam,menit,detik))
elif(a>= 3600 and a<84600):
    print("%.2d:%.2d:%.2d" % (jam,menit,detik))
elif(a>=84600):
    print("%d hari %.2d:%.2d:%.2d" % (hari,jam,menit,detik))