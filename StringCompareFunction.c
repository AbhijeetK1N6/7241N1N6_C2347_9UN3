#include<stdio.h>
//User Defined Function to Compare Two Strings
int my_strcmp(char a[], char b[])
{
    int i = 0;
    while(a[i] != '\0')
    {
        if(a[i]!=b[i]) return -1;
        i++;
    }
    return 0;
}

//@k1n6

int main()
{
    char st1[] = "WELCOME";
    char st2[] = "welcome";
    if (my_strcmp(st1,st2)==0) printf("Strings are Equal\n");
    else printf("Strings are unequal");
}
