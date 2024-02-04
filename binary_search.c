/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void b_search(int a[],int first,int last,int search_element)
{
    while(first<=last){
        int midd=(first+last)/2;
        
        if(a[midd]==search_element){
            printf("number is found at %d",midd+1);
            break;
        }else if(a[midd]>search_element){
            last=midd-1;
        }else{
            first=midd+1;
        }
    }
    
    if(first>last){
        printf("number is not found");
    }
    
}

int main()
{
    int first,last,range,search_element;
    printf("enter your range :");
    scanf("%d",&range);
    
    int a[range];
    
    printf("enter %d number ",range);
    for(int i=0; i<range;i++){
        scanf("%d",&a[i]);
    }
    
    printf("enter the search element :");
    scanf("%d",&search_element);
    
    first=0;
    last=range-1;
    
    b_search(a,first,last,search_element);
    return 0;
}
