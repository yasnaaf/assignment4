#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x,y;
   char a='+', b='-', c='*', d='/', z;
   printf("enter a math symble :");
   z=getchar();
   printf("enter 2 integer numbers:");
   scanf("%d %d",&x,&y);
   if(z==a){
    printf("%d",x+y);}
    else if(z==b){
            printf("%d",x-y);}
    else if(z==c){
        printf("%d",x*y);}
    else if(z==d){
        printf("%d",x/y);}




    return 0;
}
