#include <stdio.h>
//1
int set(int val, int pos)
{
   return (val|=(1<<pos)); // val=val|(1<<pos);
}
//2
int reset(int val,int pos)
{
    return(val&=~(1<<pos));
}
//3
int toggle(int val,int pos)
{
    return(val^=(1<<pos));
}
//4
int read(int val,int pos)
{
    unsigned int res = 0;
    res=val&(1<<pos);
    if(res) return 1;
    else 
    return 0;
}
//5
void disp(int val)
{
  unsigned  int cnt=0;
     unsigned int pos=(1<<31);
    for(cnt=0;cnt<32;cnt++){
    (val&pos)?printf("1"):printf("0");
    pos=pos>>1;
}
     printf("\n");
}

//K1N6;
//0
int main(){
    unsigned int v=0,p=0,flag=0,r=0;
    while(1)
    {
        printf("\nEnter Value :- ");
        scanf("%d",&v);
        printf("Enter Position :- ");
        scanf("%d",&p);
        printf("\n");
        printf("\n(1). SET\n(2). RESET\n(3). TOGGLE\n(4). READ\n(5). DISPLAY\n");
        printf("Choose Operations from the Above List :- ");
        scanf("%d",&flag);
        printf("\n");
        printf("\nBefore Operation :- \n");
        disp(v);
        printf("\n");
        printf("After Operation :- \n");
        disp(p);
        printf("\n");
        switch(flag)
        {
            case1: r=set(v,p); disp(r); break;
            case2: r=reset(v,p); disp(r); break;
            case3: r=toggle(v,p); disp(r); break;
            case4: r=read(v,p); printf("%d",r); break;
        }
    }
}
