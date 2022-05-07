#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Calculator********************************\\
//***********************************NCIT**********************************//

//Function for addition
void sum()
{
	system("color 2f");
	int a , b , add;
	printf("Enter two numbers for addition : ");
	scanf("%d%d",&a,&b);
	add = a + b;
	printf("Sum : %d\n",add);
}
//function for substraction
void sub()
{
	int a , b , sub;
	printf("Enter two numbers for substraction : ");
	scanf("%d%d",&a,&b);
	sub = a - b;
	printf("Sub : %d\n",sub);
}
//Function for multiplication
void product()
{
	int a , b , mul;
	printf("Enter two numbers for multiplication : ");
	scanf("%d%d",&a,&b);
	mul = a * b;
	printf("Product : %d\n",mul);
}
//Function for division
void division()
{
	float a , b , div;
	printf("Enter two numbers for division : ");
	scanf("%f%f",&a,&b);
	div = a / b;
	printf("Division : %.2f\n",div);
}
//Function for getting reminder
void reminder()
{
	int a , b , rem;
	printf("Enter two numbers for their reminder : ");
	scanf("%d%d",&a,&b);
	rem = a % b;
	printf("Reminder : %d\n",rem);
}
//Function of square
void square()
{
	int a , square;
	printf("Enter a number for squaring : ");
	scanf("%d",&a);
	square = pow(a,2);
	printf("Square of a number : %d\n",square);
}
//Function of cube
void cube()
{
	int a , cube;
	printf("Enter a number for cubing : ");
	scanf("%d",&a);
	cube = a*a*a;
	printf("Square of a number : %d\n",cube);
	
}
//Function of squareroot
void squareRoot()
{
	float a , sqr;
	printf("Enter a number for squareroot : ");
	scanf("%f",&a);
	sqr = sqrt(a);
	printf("Square root of a number : %.2f\n",sqr);
}
//Function of cuberoot
void cubeRoot()
{
	float a , cubert;
	printf("Enter a number for cuberoot : ");
	scanf("%f",&a);
	cubert = cbrt(a);
	printf("Cube root of a number : %.2f\n",cubert);
}

int  main()
{
	sum();
	sub();
	product();
	division();
	reminder();
	square();
	cube();
	squareRoot();
	cubeRoot();
	printf("Thank you so much (^-^)");
	getch();
	return 0;
}
