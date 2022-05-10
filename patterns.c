//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************20 Different Shapes Patterns********************************\\
//***********************************NCIT**********************************//
#include <stdio.h>

//----------Half Pyramid of "*"------------>>
void pattern1(int num){
   for (int i=1; i <=num; i++){
        for (int j=1; j <=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

//-----------Half Pyramid of Numbers------------->>

void pattern2(int num){
    for (int i = 1 ; i <=num; i++){
        for (int j = 1 ; j <= i; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//--------------Half Pyramid of Alphabets-------->

void pattern3(int num){
    char alphabate = 'A';
    for (int i = 1; i <=num; i++){
        for (int j = 1; j<=i; j++){
            printf("%c ",alphabate);
        }
        ++alphabate;
        printf("\n");
    }
}

//----------------Inverted Half Pyramid of "*"------------->>
void pattern4(int num){
    for(int i = 1; i<=num; i++){
        for (int j = 1; j<=num-i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

//-----------------Inverted Half Pyramid Of numbers-------------------->>

void pattern5(int num){
    for(int i = 1; i <=num; i++){
        for (int j = 1 ;j <= num - i +1; j ++){
            printf("%d ",j);
        }
        printf("\n");
    }
}

//-------------------Full Pyramid Of "*"-------------->>
void pattern6(int num){
    for(int i=1; i<=num; i++){
        for(int space = 1; space <= num-i; space++){
            printf("  ");
        }
            for(int j = 1 ; j<=i*2-1; j++){
                printf("* ");
            }
        
        printf("\n");
    }
}

//----------------Full Pyramid of Numbers-------------->>

void pattern7(int num){
    
    for(int i = 1; i<=num; i++){
        for (int space=1; space<=num-i; space ++){
            printf(" ");
        }

        for (int j = 1; j <=i; j++){
            printf("%d ",j);
        
        }
        for(int k=i-1; k>0;k--){
            printf("%d ",k);
        }
        printf("\n");
    }
}

//--------------------Full Pyramid(different)of "*"--------------->>

void pattern8(int num){
    for (int i =1; i<=num; i++){
        for (int space =1; space <= num-i+1; space++){
            printf(" ");
        }
        for (int j = 1; j <=i; j++){
            printf("* ");
        }

        printf("\n");
    }
}

//---------------------Random Patterns----------------->>
void pattern9(int num){
    for (int i=1 ; i <=num; i++){
        for (int j =1; j<=num-i+1; j++){
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

//---------------------Tilted Triangle Pattern-------------->>
void pattern10(int num){
    for (int i=1 ; i <=num; i++){
        for (int j =1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    for (int k=1 ; k<=num; k++){
        for (int l =1; l<=num-k+1; l++){
            printf("* ");
        }
        printf("\n");
    }
}

//--------------------Suqare pattern------------->
void pattern11(int num){
    for (int i=1 ; i <=num; i++){
        for (int j =1; j<=num; j++){
            printf("* ");
        }
        printf("\n");
    }
    }

//--------------------Rectangele Pattern-------------->>
void pattern12(int row,int col){
    for (int i=1 ; i <=row; i++){
        for (int j =1; j<=col; j++){
            printf("* ");
        }
        printf("\n");
    }
}

//-------------------Hollow Square Pattern---------------->>

void pattern13(int row,int col){
    for (int i=1 ; i <=row; i++){
        for (int j =1; j<=col; j++){
            if (i==1 || i ==row || j==1|| j==col){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
//-----------------Rombus pattern------------>>
void pattern14(int num){
    for (int i = 1; i<=num; i++){
        for(int space = 1; space<=num-i; space++){
            printf(" ");
        }

        for (int j = 1; j<=num; j++){
        printf("* ");
        }
    printf("\n");
    }
}
//---------------------Hollow Rombus Pattern-------------->>
void pattern15(int num){
    for (int i = 1; i<=num; i++){
        for(int space = 1; space <=num-i; space++){
            printf(" ");
        }
        for(int j =1; j<=num;j++){
            if(i==1 || i==num || j==1 || j==num){
                printf("*");
            }
            else{
                printf(" ");
            }

        }
            printf("\n");
}
}

//----------------------------Mirrored Rombus---------------->>
void pattern16(int num){
    for (int i = 1; i <=num; i++){
        for (int space =1; space <=i; space++){
            printf(" ");
        }
        for (int j = 1; j <= num ; j++){
            printf("*");
        }
        printf("\n");
    }
}

//----------------------------Mirrored Hollow Rombus ---------------->>
void pattern17(int num){
    for (int i = 1; i <=num; i++){
        for (int space =1; space <=i; space++){
            printf(" ");
        }
        for (int j = 1; j <= num ; j++){

            if (i==1 || i ==num || j ==1 || j==num){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

//------------------Concatination of Rombus and its Mirror---------------->>
//----------------------------Mirrored Rombus---------------->>
void pattern18(int num){
    for (int i = 1; i <=num; i++){
        for (int space =1; space <=i; space++){
            printf(" ");
        }
        for (int j = 1; j <= num ; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int k = 1; k <=num; k++){
        for (int space2 =1; space2 <=k; space2++){
            printf(" ");
        }
        for (int l = 1; l <= num ; l++){
            printf("*");
        }
        printf("\n");
    }
}

//-------------------------House Pattern----------------->>

void pattern19(int num){
    for(int i = 1; i <= num; i++){
        for (int space = 1; space <=num-i; space ++){
            printf(" ");
        }
        for (int j =1 ; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for(int k = 1; k <=num; k++){
        for (int l = 1 ; l <=num; l++){
            printf("**");
        }
        printf("\n");
    }
}

//-----------------------Dimond Pattern---------->>

void pattern20(int num){
    for (int i = 1; i <= num; i++){
        for (int space = 1; space <= num-i; space ++){
            printf(" ");
        }
        for (int j = 1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }

    for (int i =num- 1; i >0; i--){
        for (int space = 1; space <= num-i; space ++){
            printf(" ");
        }
        for (int j = 1; j<=2*i-1; j++){
            printf("*");
        }
        printf("\n");
    }
    
}
//--------------------Main Function-------_>>
void main(){
    // int num = 5;
    // pattern1(num);

    // int num = 5;
    // pattern2(num);

    // int num = 5;
    // pattern3(num);

    // int num = 5;
    // pattern4(num);

    // int num = 5;
    // pattern5(num);

    // int num = 5;
    // pattern6(num);

    // int num = 5;
    // pattern7(num);
    
    // int num = 5;
    // pattern8(num);

    // int num = 5;
    // pattern9(num);

    // int num = 5;
    // pattern10(num);

    // int num = 6;
    // pattern11(num);

    // int row =5,col=10;
    // pattern12(row,col);

    // int row =10,col=20;
    // pattern13(row,col);

    // int num = 6;
    // pattern14(num);

    // int num =6;
    // pattern15(num);

    // int num = 6;
    // pattern16(num);

    // int num = 6;
    // pattern17(num);

    // int num = 6;
    // pattern18(num);

    // int num = 6;
    // pattern19(num);

    int num = 5;
    pattern20(num);
}
