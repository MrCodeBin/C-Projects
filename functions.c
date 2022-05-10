//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Functions********************************\\
//***********************************NCIT**********************************//
#include <stdio.h>
#include <stdlib.h>
// ---------------------Functions for factorial---------------------->>

void fact (int num){
    int fact = 1;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i =1; i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial of a number %d : %d",num,fact);
}

//------------------Functions for changing cases---------->>

void casech(char key){
    printf("Enter a character : ");
    scanf("%c",&key);
    if(key >=97 && key <= 122){
        key-=32;
        printf("%c",key);
    }
    else if(key >=65 && key<=90 ){
        key +=32;
        printf("%c",key);
    }
    else{
        printf("Try another alphabet!!");
    }
}

//--------------------Functions for counting digits in number --------->>

int countdi (int num){
    int count =0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num!=0){
        num /=10;
        ++count;
    }
    printf("Total Digits of entered number : %d",count);
return 0;   
}

//--------------Funtions for Swapping values of number----->>

void swap(int a,int b){
    int c;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);

    c = a;
    a = b;
    b = c;

    printf("Swapping 2nd number to 1st number : %d\n",a);
    printf("Swapping 1st number to 2nd number : %d\n",b);
}

//------------------Main Functions----------------->>

int main(){
    // int num;
    // fact(num);
    // char key;
    // casech(key);
    // int di;
    // countdi(di);
    int a , b;
    swap(a,b);
    return 0;
}