
#include<stdio.h>
int main()
{
int year;
printf("Enter 'Year' to check 'Leap' or 'Not' >--->> ");
scanf("%d",&year);
if(year%4==0)
printf("Entered 'Year' is 'leap_year':) ");
else
printf("Entered 'Year' is Not a 'leap_year' ^..^ ");
return 0;
}
