/*Swap Adjacent Array
Program to swap adjacent elements of a one dimensional array.

Input Format

Take an integer n from the user as the size of array.
Take n elements from the user.
Constraints

n>=1 && n<=10000
n should be even.
Output Format

It should print the array after swapping adjacent elements.
If n is not even then print "Not even."
Sample Input 0

6
15 12 13 16 58 96
Sample Output 0

12 15 16 13 96 58
Sample Input 1

3
Sample Output 1

Not even.

--------------------------------------------------------
code
--------------------------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    if(n%2==0){
        for(int i=0;i<n;i++)
        scanf("%d ",&arr[i]);
        for(int i=0;i<n;i+=2)
        {
            int temp = arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
        for(int i = 0;i<n;i++)
            printf("%d ",arr[i]);
    }
    else
    {
        printf("Not even.");
    }
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
