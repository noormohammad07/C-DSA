/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void bubble_sort(int a[],int n)
{
    int temp=0;
   for(int i=0; i<n; i++){
       for(int j=0; j<n-1;j++){
           if(a[j]>a[j+1]){
              temp=a[j+1];
              a[j+1]=a[j];
              a[j]=temp;
           }
       }
   }
   
   for(int i=0; i<n; i++){
       printf("%d ",a[i]);
   }
    
}

int main()
{
    int n;
    printf("enter number of element :");
    scanf("%d",&n);
    
    int a[n];
    
    printf("enter %d number ",n);
    for(int i=0; i<n;i++){
        scanf("%d",&a[i]);
    }
    
    bubble_sort(a,n);
    return 0;
}
