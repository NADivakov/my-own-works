#include <stdlib.h>
#include <stdio.h>
#include <math.h> 
int main()
{
int number;
printf("Write a number:");
scanf("%d",&number);
system("cls");
switch(number)
{
case 0: printf("Null"); break;
case 1: printf("One"); break;
case 2: printf("Two"); break;
case 3: printf("Three"); break;
case 4: printf("Four"); break;
case 5: printf("Five"); break;
case 6: printf("Six"); break;
case 7: printf("Seven"); break;
case 8: printf("Eight"); break;
case 9: printf("Nine"); break;
default: printf("Maybe you entered something incorrect. Try again!\n");
}
}
