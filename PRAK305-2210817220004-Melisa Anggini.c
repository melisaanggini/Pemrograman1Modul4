#include<stdio.h>
int main()
{
    int hari,jam,detik,menit,a;
    scanf("%d",&a);
    hari=a/86400;
    jam=(a/3600)%24;
    menit=(a/60)%60;
    detik=a%60;
    if(a<=3600){
        printf("%.2d:%.2d:%.2d",jam,menit,detik);
    }else if(a>3600 && a<86400){
        printf("%.2d:%.2d:%.2d",jam,menit,detik);
    }else if(a>=86400){
        printf("%d hari %.2d:%.2d:%.2d",hari,jam,menit,detik);
    }
}
