#include <stdio.h>

int multa(int a, int b){
    int addy=0;
    for(int i=1;i<=b;i++){
        addy += a;
    }
    return addy;
}
//@K1N6
int main() {
    int a,b;
    printf("Enter 1st Number :- ");
    scanf("%d",&a);
    printf("Enter 2nd Number :- ");
    scanf("%d",&b);
    printf("%d x %d = %d",a,b,multa(a,b));
}
