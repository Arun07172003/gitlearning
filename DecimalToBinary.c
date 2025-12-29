#include <stdio.h>

int main(){
    int decimal = 0, rem = 0, multiplier = 1;
    long binary = 0;
    printf("Program to convert decimal into binary\n");
    printf("Enter the decimal number: ");
    scanf("%d", &decimal);
    int temp = decimal;
    while(temp){
        rem = (temp % 2) * multiplier;
        multiplier *= 10;
        binary += rem;
        temp /= 2;
    }
    printf("Binary equivalent of %d is 0b%d\n", decimal, binary);
    return 0;
}