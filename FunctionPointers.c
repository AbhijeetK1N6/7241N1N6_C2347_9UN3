///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/.////////////////////////////////////////////////////////Function Pointer
#include<stdio.h>
int adder(int i,int j){
    return i+j;
}
int main(){
    int (*fp)(int i, int j);
    fp = adder;
    printf("%d",fp(8,9));
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////Array of Function Pointers
#include<stdio.h>
int adder(int i,int j){
    return i+j;
}
int multi(int i, int j){
    return i*j;
}
int main(){
    int i=0;
    int (*fp[2])(int i, int j);
    fp[0] = adder;
    fp[1] = multi;
    for(i=0;i<2;i++)
    printf("%d\n",fp[i](8,9));
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////Array of Function Pointers with multi functions

#include<stdio.h>
int adder(int i,int j){
    return i+j;
}
int multi(int i, int j){
    return i*j;
}
int divi(int i, int j){
    return i/j;
}
int subtra(int i, int j){
    return i-j;
}
int modu(int i, int j){
    return i%j;
}
int main(){
    int i=0;
    int (*fp[5])(int i, int j);
    fp[0] = adder;
    fp[1] = multi;
    fp[2] = divi;
    fp[3] = subtra;
    fp[4] = modu;
    for(i=0;i<5;i++){
        printf("%d\n",fp[i](10,2));
    }
}



////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////Find Big or Small using Array of Function Pointer and Ternanry Operator
#include<stdio.h>
int bigger(int a, int b, int c, int d){
    int big;
    big = a>b ? (a>c? a : c)  : (b>c ? b : c);
    return big;
}

int smaller(int a, int b ,int c, int d){
    int small;
    small = a<b ? (a<c? a : c)  : (b<c ? b : c);
    return small;
}
//K1N6
int main(){
    int i=0;
    int (*fp[2])(int i, int j, int k, int l);
    fp[0] = bigger;
    fp[1] = smaller;
    for(i=0;i<2;i++){
        if(i==0) printf("Bigger is = %d\n",fp[i](10,2,4,7));
        else if(i==1) printf("SMaller is = %d\n",fp[i](10,2,4,7));
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////
