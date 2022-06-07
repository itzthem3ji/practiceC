#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Given a five digit integer, print the sum of its digits.
int main() {
	
    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum, digit;
    int temp = n;
    while(temp != 0){
        digit = temp % 10;
        sum = sum + digit;
        temp = temp/10;        
    }
    printf("%d\n", sum);
    return 0;
}