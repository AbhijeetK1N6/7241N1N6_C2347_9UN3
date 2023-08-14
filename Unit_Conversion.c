#include<stdio.h>
main()
{
    float pounds, inches,cm,km;
    int choice;
    printf("Choose the Conversion from below :-\n");
    printf("1. Pounds to KG\n");
    printf("2. Inches to Metres\n");
    printf("3. CM to Inches\n");
    printf("4. Inches to Foots\n");
    printf("5. KM to Miles\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter the Pounds value to Convert to KG :-\n");
        scanf("%f",&pounds);
        printf("%.2f Pounds = %f KG",pounds,pounds*0.45359237);
        break;
        case 2:
        printf("Enter the Inches value to Convert to Metres :-\n");
        scanf("%f",&inches);
        printf("%.2f Inches = %f Metres",inches,inches*0.0254);
        break;
        case 3:
        printf("Enter the CM value to Convert to Inches :-\n");
        scanf("%f",&cm);
        printf("%.2f CM = %f Inches",cm,cm*0.393701);
        break;
        case 4:
        printf("Enter the Inches value to Convert to Foot :-\n");
        scanf("%f",&inches);
        printf("%.2f Inches = %f Foot",inches,inches*0.0833);
        break;
        case 5:
        printf("Enter the KM value to Convert to Miles :-\n");
        scanf("%f",&km);
        printf("%.2f KM = %f Miles",km,km*0.621371);
        break;
    }
}
