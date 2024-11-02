// C Program to print all the numbers up to 1000 which ends with 8 and divided by 8
#include<stdio.h>
#include<stdbool.h>

int extractDigit(int num1);
bool checkDigit(int num1);
bool checkMultiple(int num1);

void listNumbers(int num1, int num2);

int main(){
    int num1, num2 = 1000;
    printf("List of numbers upto 1000 that ends with 8 and are also divisible by 8\n");
    listNumbers(num1, num2);
}

int extractDigit(int num1){
    return num1%10 ;
}

bool checkDigit(int num1){
    return extractDigit(num1) == 8;
}

bool checkMultiple(int num1){
    return num1%8 == 0;
}


void listNumbers(int num1, int num2){
    for(num1=8; num1<=num2; ++num1){
        if(checkDigit(num1) && checkMultiple(num1)){
            printf("%d\n",num1);
        }
    }
}