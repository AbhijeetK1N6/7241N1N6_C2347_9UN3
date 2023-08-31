#include<stdio.h>
int main()
{
    int a,b,c,biggie=0;
    printf("ENTER num 1 :-");
    scanf("%d",&a);
    printf("ENTER num 2 :-");
    scanf("%d",&b);
    printf("ENTER num 3 :-");
    scanf("%d",&c);
    //a>b?(a>c? printf("A is big = %d",a) : biggie++)  : (b>c ? printf("B is big = %d",b) : printf("C is big = %d",c));
    printf("Biggest of these Numbers is = %d",a>b ? (a>c? a : c)  : (b>c ? b : c));
}
