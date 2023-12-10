#include<stdio.h>
int fact(int num) {
    if(num==1) {
        return 1;
    }
    else {
         return num*fact(num-1);
    }
}

int main()
{
    int num, result;
    printf("enter a positive number: ");
    scanf("%d",&num);
    if (num<0) {
        printf("factorial not possible\n ");
    }
    result=fact(num);
    printf("%d", result);
    return 0;
}