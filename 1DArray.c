#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


/********************************************
author:balaji;
*********************************************/

int main() {
    
    int n,i,j,k=0;
    scanf("%d",&n);
    int *arr=(int*)malloc(n * sizeof(int));
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(j=0;j<=n-1;j++)
    {
        k+=arr[j];

    }
    printf("%d",k);
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

