#include<stdio.h>
void printN(int num){
    if(num==1){
        printf("%d ",num);
        return;
        }
    printN(num-1);
    printf("%d ",num);
}
int main()
{
   int num;
   printf("enter value of n:\b ");
   scanf("%d",&num);
   printN(num);
    return 0;
}