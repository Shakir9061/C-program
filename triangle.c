#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter three angles:");
    scanf("%d %d %d",&a,&b,&c);
     
    if(a+b+c==180){
    if(a==b && a==c){
       printf("the triangle is equilateral."); 
    }
    else if(a==b || b==c || a==c){
         printf("the triangle is isosceles ."); 
    }
     else{
         printf("the triangle is scalene ."); 
    }
}else{
    printf("this is not a valid triangle.");
}
}