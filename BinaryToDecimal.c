#include <stdio.h>

int main(){
    int binary = 0, rem = 0, multiplier = 1, decimal = 0;
    printf("Program to convert binary into decimal\n");
    printf("Enter the binary number: 0b");
    scanf("%d", &binary);
    int temp = binary;
    while(temp){
        rem = (temp % 10) * multiplier;
        multiplier *= 2;
        decimal += rem;
        temp /= 10;
    }
    printf("The decimal equivalent of 0b%d is %d\n", binary, decimal);
    return 0;
}