#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int r,c;
    printf("enter your chair number between 1 to 20:");
    scanf("%d",&c);
    printf("enter your row number between 1 to 10:");
    scanf("%d",&r);
    if(c>=1 && c<11){printf("turn right\n",c);printf("go %d steps right\n",abs(c-11));}
    else if(10<c && c<=20){printf("turn left\n");printf("go %d steps left\n",abs(c-10));}
    printf("go %d steps down\n",abs(r-11));
    printf("You're in the right place");



    return 0;
}
