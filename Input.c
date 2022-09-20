#include <stdio.h>
#include <conio.h>
int takeInfo()
{
    char name[30];
    int age;
    int id;
    char add[50];
    int adhar;
       printf("--------------------------------------------------------\n");
    printf("Enter   Your Name  : \n");
    scanf(" %s", &name);
    printf("Enter  Your Age  : \n");
    scanf("%d", &age);
    printf("Enter   Your Id Number  : \n");
    scanf("%d", &id);
    printf("Enter   Your Addres :\n ");
    scanf("%s", &add);
    printf("Enter   Your Adhar Number  : \n");
    scanf("%d", &adhar);
    int i;

    for (i = 2; i <= 3; i++)
    {
        printf("------------------------------------------------------\n");
        printf("Name              :-   ");
        printf("%s\n", name);
        printf("-----------------------------------------------------\n");
        printf("Age                  :-     ");
        printf("%d\n", age);
        printf("-----------------------------------------------------\n");
        printf("Id Number       :-     ");
        printf("%d\n", id);
        printf("-----------------------------------------------------\n");
        printf("Address           :-      ");
        printf("%s\n", &add);
        printf("---------------------------------------------------\n");
        printf("Adhar Number       :-      ");
        printf("%d\n", &adhar);
    }
}

void main()
{
    for (int j = 0; j < 50; j++)
    {
        takeInfo();
    }
