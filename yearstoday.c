#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Years to Days*******************************\\
//***********************************NCIT**********************************//

void yearsToDays(int year , int month , int day)
{
int years_days , months_days, total_days;
printf("Enter todays Year , month and days : ");
scanf("%d%d%d",&year,&month,&day);
years_days = year * 365;
months_days = month * 30;
total_days = years_days + months_days + day;
printf("Total Days you survive : %d",total_days);
}

int main()
{
    int year, month,day;
    yearsToDays(year,month,day);
    return 0;
}