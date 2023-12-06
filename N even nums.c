#include<stdio.h>
void printN(int num) {
    if(num<=0) {
        return ;
    }
    if(num%2==0) {
        
        printN(num-2);
        printf("%d ",num);
    }
    else {
        num=num-1;
        printN(num);
        
    }
}

int main()
{
    int num;
    printf("enter value of n:\b ");
    scanf("%d",&num);
    printN(num);
    return 0;
}