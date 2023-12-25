#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,z,h,p,t;
    printf("enter three lengths from small to large to make a right triangle:\n");
    scanf("%d %d %d",&x,&y,&z);
    h=x*x;
    p=y*y;
    t=z*z;
    printf("x=%d,y=%d,z=%d\n",x,y,z);
    if(h+p==t){printf("Yes");}
    else{(printf("No"));}

    return 0;
}
