#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x=0,y=0;
    int a0; 
    int a1; 
    int a2; 
    scanf("%d %d %d",&a0,&a1,&a2);
    int b0; 
    int b1; 
    int b2; 
    scanf("%d %d %d",&b0,&b1,&b2);
    if(a0 > b0 )
        x++;
    else if(a0 == b0)
   ;
        else if(a0<b0)
        y++;
         if(a1 > b1 )
       x++;
    else if(a1 == b1)
   ;
        else if(a1<b1)
       y++;
         if(a2 > b2 )
        x++;
    else if(a2 == b2)
   ;
        else if(a2<b2)
        y++;
        printf("%d %d",x,y);
    return 0;
}
