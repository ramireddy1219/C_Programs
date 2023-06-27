#include<stdio.h>
int main()
{
    char Character;
    int Integer;
    
    double Double;

    printf("\nEnter the Character input : ");
    scanf("%c", &Character);

    printf("Enter the Integer input : "); 
    scanf("%d", &Integer);

    printf("Enter the Double input : ");
    scanf("%lf", &Double);
    
    printf("\nThe value of Integer is: %d", Integer);
    printf("\nThe value of Character is : %c", Character);
    printf("\nThe value of Double is : %.2lf", Double);
    printf("\n---");


    return 0;
}