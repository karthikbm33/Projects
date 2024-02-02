#include<stdio.h> 
int isPrime(int); 
 
int main() 
{ 
 int n, result; 
 printf("Enter an integer to check whether it is prime or not.\n"); 
 scanf("%d",&n); 
 
 result = isPrime(n); 
 
 if ( result == 1 ) 
 printf("%d is prime.\n", n); 
 else 
 printf("%d is not prime.\n", n); 
 
 return 0; 
} 
 
int isPrime(int a) 
{ 
 int c; 
 
 for ( c = 2 ; c <= a - 1 ; c++ ) 
 { 
    if ( a%c == 0 ) 
    return 0; 
 } 
 return 1; 
} 
