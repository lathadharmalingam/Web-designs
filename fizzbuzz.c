//if the array element is multiples of ‘3’ print “Fizz” instead of the number 
//and for the multiples of ‘5’ print “Buzz” and if the number is divisible by both '3' and '5' print "fizzbuzz".

#include <stdio.h>

int main()
{
    int n;
    int i=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
    if(a[i]%3==0 && a[i]%5==0)
    printf("\nfizzbuzz");
    else if(a[i]%3==0)
    printf("\nfizz");
    else if(a[i]%5==0)
    printf("\nbuzz");
    else 
    printf("\nnot fizzbuzz");
    }
    
     return 0;
}
