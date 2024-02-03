/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void linersearch(int a[],int r,int s){
    int count =0;
    for(int i=0; i<r; i++){
         if(a[i]==s){
             count++;
             printf("number if found at %d",i+1);
             break;
         }
    }
    if(count==0){
        printf("number is not found");
    }
    
}

int main()
{
    int a[100],s, r;
    int k=0;
    printf("enter the range: ");
    scanf("%d",&r);
    
    printf("enter the %d number: ",r);
    for(int i=0; i<r; i++){
         scanf("%d",&a[i]);
    }
    
    printf("enter the search element: ");
    scanf("%d",&s);
    
    linersearch(a,r,s);
    
    return 0;
}
