#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    float a=(m+n);
    float avg=a/2;
    printf("Average of %d and %d is: %.2f",m,n,avg);
}