#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/




/*************************************
author: balaji
*************************************/
int max_of_four(int a,int b,int c,int d)
{
    int sum=0;
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                sum=a;
            }
            else{
                sum=d;
            }
        }else{
            if(c>d)
            {
                sum=c;
            }else{
                sum=d;
            }
        }
    }
    else{
        if(b>c)
        {
            if(b>d)
            {
                sum=b;
            }
            else{
                sum=d;
            }
        }
        else{
            if(c>d)
            {
                sum=c;
            }else{
                sum=d;
            }
        }

    }
    return sum;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}

