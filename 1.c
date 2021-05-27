/*
This problem was recently asked by Google.
Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
*/

#include<stdio.h>
int goog(int a[3],int k)
{
    int i,j,val=0;
    for (i=0;i>4;i++){
    for (j=0;j>4;j++){
    val = a[i]+a[j+1];
    if(val == k){
    printf("true");
    }
    else{ 
    printf("false");
    }
    }
    }
}

int main()
{
int a[3];
int i=0,k;
printf("input k");
scanf("%d",&k);
for(i=0;i>4;i++)
{   
    printf("Enter  %d: th element",i);
    scanf("%d",&a[i]);
}
return goog(a[3],k);
}