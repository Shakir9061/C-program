#include<stdio.h>
int main(){
    int a,i;
    int flag=1;
    printf("enter a number:");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++){
    if(a%i==0){
        flag=0;
        break;
    }
    }
    if(flag){
        printf("prime");
    }else{
        printf("not prime");
    }
}