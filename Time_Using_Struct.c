#include <stdio.h>
struct time{
    // HH:MM:SS = 23:59:59 (Maximum values)
    unsigned int hh:5; //5 bits alloted to hh 
    unsigned int mm:6;//6 bits alloted to mm
    unsigned int ss:6;//6 bits alloted to ss
};
int main(){
    struct time mytime;
    mytime.hh=13;
    mytime.mm=24;
    mytime.ss=45;
    printf("Time is :- { %d : %d : %d }",mytime.hh,mytime.mm,mytime.ss);
}
