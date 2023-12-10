//sum of n natural numbers
#include<stdio.h>
int sumN(int num) {
    if(num==1) {
        return 1;
    }
    else {
        return num+sumN(num-1);
    }
}

int main()
{
    int num, result;
    printf("enter a positive number: ");
    scanf("%d",&num);
    if (num<=0) {
        printf("invalid input \n ");
    }
    result=sumN(num);
    printf("%d", result);
    return 0;
}