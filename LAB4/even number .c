 
#include<stdio.h> 

int main(){

           int a,b,c,i;

          printf("   Give the First number for the Range :   \n");
           scanf("%d",&a);
           
           printf("   Give the Final number for the Range :   \n");
           scanf("%d",&b);
           
          printf("\n The Even numbers between %d and %d are ",a,b); 
           for(i=a; i<=b; ++i){

               c = i % 2;

               if(c == 0)

               printf("\n  %d",i);

           }

    return 0; 

    } 
