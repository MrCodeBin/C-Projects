#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Pi 3.14
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************AreaOfCircle********************************\\
//***********************************NCIT**********************************//

void areaOfCircle(float radius){
    float claculateAreaOfCircle;
    printf("Enter a radius : ");
    scanf("%f",&radius);
    claculateAreaOfCircle = Pi *(pow(radius,2));
    printf("Area of circle : %.2f",claculateAreaOfCircle);
}

int main()
{
    float radius;
    areaOfCircle(radius);
    return 0;
}
