#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************SimpleIntrest********************************\\
//***********************************NCIT**********************************//

void simpleIntrest(int principle , int time , float rate){
    float simpleintrest;
    printf("Enter prinicple , time and rate : ");
    scanf("%d%d%f",&principle, &time, &rate);
    simpleintrest = (principle* time * rate)/(100);
    printf("Simple Intrest is : %.2f",simpleintrest);
}
int main ()
{
    int principle , time;
    float rate ;
    simpleIntrest(principle,time,rate);
    return 0;
    getch();
    return 0;
}
