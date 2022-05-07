#include <stdio.h>
#include <conio.h>
#include <math.h>
#define Pi 3.14f
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Area and volume of sphere********************************\\
//***********************************NCIT**********************************//

void areaAndVolume(float radius)
{
    float area , volume;
    printf("Enter a radius : ");
    scanf("%f",&radius);
    area = 4 * Pi * pow(radius,2);
    volume = (4/3.0) * Pi * pow(radius,3);
    printf("Area of sphere : %.2f",area);
    printf("Volume of sphere : %.2f",volume);
    
}

int main()
{
    float radius;
    areaAndVolume(radius);
    getch();
    return 0;
}
