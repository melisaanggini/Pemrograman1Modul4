#include<stdio.h>
int main()
{
    int n;
    scanf("%i",&n);
    if (n>0)
    {
        printf("positif\n");
    }
    else if (n<0)
    {
        printf("negatif\n");
    }
    else
    {
        printf("nol\n");
    }
}
