#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int n, char gender) {
    int i,j;
    for(i=0;i<=n-1;i++)
    {
        if(gender=='g' && i%2!=0)
        {
            j+=*(marks+i);
        }
        if(gender=='b' && i%2==0){
            j+=*(marks+i);

        }
    }
    return j;
  //Write your code here.
}
int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}
