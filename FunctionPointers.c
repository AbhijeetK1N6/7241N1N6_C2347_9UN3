///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Function Pointer
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
//Array of Function Pointers
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
