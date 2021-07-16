#include <stdio.h>
int main()
{
    int a[1000],i,n,min,max,minpos,maxpos,pos;
   
    printf("Enter size of the array : ");
    scanf("%d",&n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)

        scanf("%d",&a[i]);

 
    min=max=a[0];
    for(i=1; i<n; i++)
   
         if(min>a[i])
		  {min=a[i];
          minpos=i;}
          
		 if(max<a[i])
		  {  max=a[i]; 
          maxpos=i;}
		

    pos=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=pos;
	printf("\nAfter interchange array elemnts are: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
    
    
 
    return 0;
}