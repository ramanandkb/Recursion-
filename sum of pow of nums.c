//sum of power of n natural numbers
#include<stdio.h>
int sumPow(int num) {
    if(num==1) {
        return 1;
    }
    else {
        return (num*num)+sumPow(num-1);
    }
}

int main()
{
    int num, result;
    printf("enter a number: ");
    scanf("%d",&num);
    if (num<=0) {
        printf("invalid input \n ");
    }
    result=sumPow(num);
    printf("%d", result);
    return 0;
}