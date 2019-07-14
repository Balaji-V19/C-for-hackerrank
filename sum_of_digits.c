#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/*************************************
author: balaji
*************************************/

int main() {
	
    int n;
    scanf("%d", &n);
    int t,rem,sum=0;
    t=n;
    while(t!=0)
    {
        rem=t%10;
        sum=sum+rem;
        t=t/10;


    }
    printf("%d",sum);
    //Complete the code to calculate the sum of the five digits on n.
    return 0;
}

