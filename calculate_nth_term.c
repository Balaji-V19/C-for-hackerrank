#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int i,k,count=0;
    for(i=1;i<=n;i++)
    {
        if(n<=3)
        {
            return a+b+c;
        }
        else{
            k=a+b+c;
            count=k+b+c;

        }
    }
    return count;
  //Write your code here.
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);

    printf("%d", ans);
    return 0;
}

