//CODE - 1
#include<stdio.h>
struct emp_details
{
    unsigned int eid,age;
    char gender;
    char name[15];
    float sal;
}emp_obj;
//K1N6
int main(){
    emp_obj.gender='M';
    emp_obj.eid = 704448;
    emp_obj.sal = 34118;
    printf("Employee ID is = %d\n",emp_obj.eid);
    printf("Employee Gender is = %c\n",emp_obj.gender);
    printf("Employee Name is = %d\n",emp_obj.name);
    //printf("Employee Salary is = %d",emp_obj.sal);
}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////

//CODE - 2
#include <stdio.h>
#include <string.h>
struct stu_details
{
    unsigned int id;
    char gender;
    char name[17];
    float salary;
}stu_obj;
//K1N6
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//CODE - 3


#include<stdio.h>
#include <string.h>
typedef struct{
    char *name;
    int val;
}Node;

int main()
{
Node n1,n2,n3;
char name[]="Pune";
n1=(Node){name,1337};
n2=n1;

n3.val=n1.val;
n3.name=strdup(n1.name);

printf("n2.name=%s and &n2.name=%p\n",n2.name,n2.name);
  printf("n1.name=%s and &n1.name=%p\n",n1.name,n1.name);
   printf("n3.name=%s and &n3.name=%p\n",n3.name,n3.name);
}
