#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number;
    printf("Your number is even or odd?\n");
    printf("Input your number\n");
    scanf("%d",&number);
    if (number%2 == 0){
        printf("The number is even\n");
    } else{
        printf("The number is odd\n");
    }
    printf("thanks for your time... don't BUG me again\n");
    return 0;
}

