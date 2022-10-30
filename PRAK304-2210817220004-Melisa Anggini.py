a=int(input())
if a>=1 and a<=10:
    print("Satuan")
elif(a>=10 and a<=19):
    print("Belasan")
elif(a>=20 and a<=99):
    print("Puluhan")
elif a<1:
    print("Nol")
else:
    print("Anda Menginput Melebihi Limit Bilangan")