#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*************************************
author: balaji
*************************************/

int main()
{
    int a,b,e,f;
    float c,d;
    double g,i;
    scanf("%d%d",&a,&b);
    scanf("\n%f%f",&c,&d);
    e=a+b;
    f=a-b;
    g=c+d;
    i=c-d;
    printf("%d %d",e,f);
    printf("\n%0.1f %0.1f",g,i);
    
	
    
    return 0;
}

