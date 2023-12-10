//sum of n natural numbers
#include<stdio.h>
int powN(int n,int num) {
    if(num==0) {
        return 1;
    }
    else {
        return n*powN(n,num-1);
    }
}

int main()
{
    int num, result,n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("enter a power number: ");
    scanf("%d",&num);
    if (num<0) {
        printf("invalid input \n ");
    }
    result=powN(n,num);
    printf("%d", result);
    return 0;
}