#include <stdio.h>
// -----------------------Nepal Flag-------------->>
void nepal(int num){
    for (int i=1 ; i <=num; i++){
        for (int j =1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (int k=1 ; k<=num; k++){
        for (int l =1; l<=k; l++){
            printf("* ");
        }
        printf("\n");
    }
}

void main()
{
    int num = 5;
    nepal(num);
}