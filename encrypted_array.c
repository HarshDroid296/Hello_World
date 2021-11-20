#include <stdio.h>
#include <string.h>
/*
Encrypted array is obtained by replacing each element of the original array by the sum of the remaining array elements.

Examples :

Input : arr[] = {10, 14, 12, 13, 11} Output : {5, 1, 3, 2, 4} Original array {5, 1, 3, 2, 4} Encrypted array is obtained as: = {1+3+2+4, 5+3+2+4, 5+1+2+4, 5+1+3+4, 5+1+3+2} = {10, 14, 12, 13, 11} Each element of original array is replaced by the sum of the remaining array elements.

Input : arr[] = {95, 107, 103, 88, 110, 87} Output : {23, 11, 15, 30, 8, 31}

Input Format

N is size of array A[i] is array values

Constraints

1<=N<=10000 1<=A[i]=<=900000

Output Format

Print array values seprated by Single Space.

Sample Input 0

5
10 14 12 13 11
Sample Output 0

5 1 3 2 4
*/
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n],sum=0;
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
        sum+=arr[i];
    }
    sum/=(n-1);
    for(int i=0;i<n;i++)
        printf("%d ",sum-arr[i]);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}