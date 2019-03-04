#include<stdio.h>

int main(){
    int newArray[]={0,2,3,4,2};
    printf("%d",sizeof(newArray)/sizeof(newArray[0]));
    return;
}