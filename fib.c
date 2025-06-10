#include<stdio.h> 
int fib(int n){ 
if(n<=1){ 
return n; 
} 
else{ 
return fib(n-1)+fib(n-2); 
} 
} 
 
void main(){ 
int x,i; 
printf("Enter the limit: "); 
scanf("%d",&x); 
int a[x],l;
printf("Fibonacci Series:\n"); 
for (i = 0; i < x; i++) 
{ 
    a[i]=fib(i);
} 
l=sizeof(a);printf("%d",l);
//while(l>=0)

} 