// A C Program to print all the numbers up to 1000 which ends with 8.
#include<stdio.h>
#include<stdbool.h>

int extractDigit(int i);
bool checkDigit(int i);
int printValues(int i, int num);

int main(){
    int i, num = 1000;
    printf("List of Numbers that End with 8 are:\n");
    printf("%d",printValues(i,num));   
}

int extractDigit(int i){
    return i%10 ;
}

bool checkDigit(int i){
    return extractDigit(i)==8;
}

int printValues(int i, int num){
    for(i=1; i<=num; ++i){
        if(checkDigit(i)){
            printf("%d\n",i);
        }
    }
}