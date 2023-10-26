#include<stdio.h>
int main(){
    int i=1,num;
    printf("enter a number:");
    scanf("%d",&num);
    do
    {
        printf("%d x %d= %d\n",i,num,num*i);
        i++;
    } while (i<=10);
    
}