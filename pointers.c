#include <stdio.h>



/*************************************
author: balaji
*************************************/


int ret(int a)
{
    return -a;
}





void update(int *a,int *b) {
    // Complete this function 
    int c=*a + *b;
    int d=*a - *b;
    printf("%d\n",c);
    if(d>0)
    {
        printf("%d",d);
    }else{
        printf("%d",ret(d));
    }
   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}

