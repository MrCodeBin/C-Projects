#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Days To Years********************************\\
//***********************************NCIT**********************************//

void daystoyears(int day)
{
    int year,month,days,rem ;
    printf("Enter days : ");
    scanf("%d",&day);
    year = day / 365;
  	month = (day - year * 365)/(30);
    days = (day - year * 365 - month * 30);
    printf("Number of years : %d\n",year);
    printf("Number of months : %d\n",month);
    printf("Number of years : %d\n",days);

}

int main ()
{
    int day;
    daystoyears(day);
    return 0;
}
