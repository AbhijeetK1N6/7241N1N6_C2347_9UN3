////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <string.h>
struct stu_details
{
    unsigned int id;
    char gender;
    char name[17];
    float salary;
}stu_obj;


int main()
{
    struct stu_details ;
    stu_obj.gender='F';
    stu_obj.id=1234;
    strcpy(stu_obj.name,"User");
    stu_obj.salary=2500.25;
    printf("stu id %d\n",stu_obj.id);
    printf("stu gender %c\n",stu_obj.gender);
    printf("stu name %s\n",stu_obj.name);
    printf("stu salary %f\n",stu_obj.salary);
}
