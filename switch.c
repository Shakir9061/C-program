#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice,a;
    char c;
do
{


    printf("1.html\n2.java\n3.python\n4.flutter\n5.Exit\n");
      scanf("%d",&choice);
      switch (choice)
      {
      case 1:
        printf("html");
        break;
      case 2:
        printf("java");
        break;
        case 3:
        printf("python");
        break;
        case 4:
        printf("flutter");
        break;
        case 5:
        exit(0);
      default:
        printf("invalid input.");
        break;
      }
      printf("\ndo you want to enter more (y/n):");
      scanf("%d",&a);
      scanf("%c",&c);
}while (c=='y');
}
