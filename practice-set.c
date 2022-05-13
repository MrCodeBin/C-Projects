//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Practice Set********************************\\
//***********************************NCIT**********************************//
#include <math.h>
#include <stdio.h>
#define Pi 3.14
//----------------------Function for checking perfect number------------>>
void perfectNum(int num){
    int i , sum=0 , rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    for (i=1; i<num;i++){
        rem = num % i;
        if(rem==0){
            sum+=i;
        }
    }
    if (sum==num){
        printf("Number %d is a perfect number",num);
    }
    else{
        printf("NUmber %d is not a perfect number",num);
    }
}

//------------------------Function for checking palindrome number------------->>
void palindrome(int num){
    int rem , reverse=0,original;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;
    while (num!=0){
        rem= num % 10;
        reverse = reverse * 10 + rem;
        num/=10;
    }
    if (original == reverse){
        printf("Number %d is palindrome",original);
    }
    else {
        printf("Number %d is not palindrome",original);
    }
}

//----------------------Function for checking Armstrong Number-------------->>
void armstrong(int num){
    int sum=0,n=0;
    int original , rem;
    printf("Enter a number : ");
    scanf("%d",&num);
    original = num;

    for(original = num; original!=0;++n){
        original/=10;
    }


    for(original = num; original!=0; original/=10){
        rem=original % 10;

        sum = sum + pow(rem,n);
    }

    if(sum == num){
        printf("Number is Armstrong");
    }
    else {
        printf("Number is not Armstrong");
    }
}
//--------------Function for sum of even and odd numbers------------->>
#include <stdio.h>
void sumEO(int num){
    int odd = 0 , even = 0,i,j;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(i=1;i<=num;i+=2){
        odd+=i;
    }
    printf("Sum of odd number : %d\n",odd);

    int num2;
    printf("Enter a number : ");
    scanf("%d",&num2);
    for(j=2;j<=num2;j+=2){
        even +=j;

    }
    printf("Sum of even number : %d\n",even);

}

//--------------------------HCF---------------------------->>
void hcf(int num1,int num2){
    int hcf,i;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<=num1 && i<=num2; i++){
        if(num1%i==0 && num2%i==0){
            hcf = i;
        }
    }
    printf("HCF of two numbers is %d",hcf);
}

//----------------fibonacci series------------->>

void fibonacci(int num){
    int num1 = 1 , num2 =1 , sum;

    printf("Enter number of elements : ");
    scanf("%d",&num);
    printf("%d ,%d ,",num1,num2);
    for(int i =2; i<=num;++i){
        sum = num1 + num2;
        printf("%d , ",sum);
        num1 = num2;
        num2 = sum;

    }
}
//-------------------Check if year is leap year or not--------------->>

void leapYear(int year){
    printf("Enter year : ");
    scanf("%d",&year);
    if (year % 400 == 0){
        printf("%d is leap year",year);
    }
    else if (year % 100 == 0){
        printf("%d is not leap year",year);
    }
    else if (year % 4 ==0){
        printf("%d is leap year",year);
    }
    else {
         printf("%d is not leap year",year);
    }
}

//----------------------Rainbow color picker --------------->>
void rainbow(char letter){
    int rainbowColor;
    printf("Enter a first letter of rainbow color : ");
    scanf("%c",&letter);

    switch(letter){
        case 'R':
        printf("Red\n");
        break;
        case 'O':
        printf("Orange\n");
        break;
        case 'Y':
        printf("Yellow\n");
        break;
        case 'B':
        printf("Blue\n");
        break;
        case 'I':
        printf("Indigo\n");
        break;
        case 'V':
        printf("Violet\n");
        default:
        printf("Green\n");
        break;

    }
}

//---------------------Qudratic Equations----------------->>
void qudratic(int b , int a , int c){
    float r1,r2,discriminant,imgpart,realpart;
    printf("Enter b , a , and c respectively : ");
    scanf("%d%d%d",&b,&a,&c);
    discriminant = b*b-4*a*c;

    if (discriminant > 0){
        r1 = (-b + sqrt(b*b-4*a*c))/(2*a);
        r2 = (-b - sqrt(b*b-4*a*c))/(2*a);
    }
    else if ( discriminant == 0){
        r1 = r2 = -b/(2*a);
        printf("root1 = root2 = %.2f",r1);
    }
    else {
        realpart = -b / (2 * a);
        imgpart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2f+%.2f and root2 = %.2f-%.2f", realpart, imgpart, realpart, imgpart);
    }
}
//------------------------Main Function------------------->>
void main(){
    // int num;
    // perfectNum(num);

    // int num;
    // palindrome(num);

    // int num;
    // armstrong(num);

    // int num;
    // sumEO(num);

    // int num1,num2;
    // hcf(num1,num2);

    // int num;
    // fibonacci(num);

    // int year;
    // leapYear(year);

    // char letter;
    // rainbow(letter);

    int a , b, c;
    qudratic(b,a,c);

}