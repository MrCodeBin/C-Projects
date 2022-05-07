#include <stdio.h>
#include <conio.h>
#include <math.h>
//******************************Sabin Dahal*******************************//
//******************************C Programming*****************************\\
\\*******************************Ascii Value********************************\\
//***********************************NCIT**********************************//

void character(char input ){
    printf("Enter a charcter : ");
    scanf("%c",&input);
    printf("Character of %c : %d",input,input);
}

int main()
{
	char input;
	character (input);
    return 0;
}
