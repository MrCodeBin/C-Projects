#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Quadratic Equation********************************\\
//***********************************NCIT**********************************//

void quadratic(int a, int b, int c)
{
    float r1 , r2;
    printf("Enter three values : ");
    scanf("%d%d%d",&a,&b,&c);
    r1 = (-b + pow((b*b-4*a*c),0.5))/(2*a);
    r2 = (-b - pow((b*b-4*a*c),0.5))/(2*a);
    printf("Quadratic equation value is :%.2f and %.2f",r1,r2);

}

int main()
{
    int a , b , c;
    quadratic(a,b,c);
    return 0;

}
