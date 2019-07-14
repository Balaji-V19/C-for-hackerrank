#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int i,j;

   int max1=0,max2=0,max3=0;
   for(i=1;i<=n-1;i++)
   {
       for(j=i+1;j<=n;j++)
       {
           int a=i&j;
           int b=i|j;
           int c=i^j;
           if(a<k && a>max1)
           {
               max1=a;
           }
           if(b<k && b>max2)
           {
               max2=b;
           }if(c<k && c>max3)
           {
               max3=c;
           }

       }

   }
   printf("%d\n%d\n%d\n",max1,max2,max3);

  //Write your code here.
}

int main() {
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
