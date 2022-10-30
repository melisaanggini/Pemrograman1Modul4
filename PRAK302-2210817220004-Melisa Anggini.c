#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    if (n>=80) {
        printf("A\n\n",n);
    }
    else if(n>=70 && n<=79){
        printf("B\n\n",n);
    }
    else if(n>=60 && n<=69){
        printf("C\n\n",n);
    }
    else if(n>=50 && n<=59){
        printf("D\n\n",n);
    }
    if (n<50){
        printf("E\n\n",n);
    }
}
