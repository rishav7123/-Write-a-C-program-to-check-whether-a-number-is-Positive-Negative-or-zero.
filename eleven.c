// Write a C program to check whether a number is Positive, Negative or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d is positive", num);
    }
    else if (num == 0){
        printf("%d is Zero", num);
    }
    else {
        printf("%d is negative", num);
    }
    return 0;
}