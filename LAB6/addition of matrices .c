#include <stdio.h>
#include <conio.h>
int x,y;
void main()

{
    printf("enter the size of matrix");
    printf("\n enter the number of rows");
    scanf("%d",&x);
    printf("\n enter the number of columns");
    scanf("%d",&y);
    int a[x][y],b[x][y],c[x][y],i,j;

	printf("\nENTER VALUES FOR MATRIX A:\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",&a[i][j]);
	printf("\nENTER VALUES FOR MATRIX B:\n");
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",&b[i][j]);
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			c[i][j]=a[i][j]+b[i][j];
	printf("\nTHE VALUES OF MATRIX C ARE:\n");
	for(i=0;i<x;i++)
        {
		for(j=0;j<y;j++)
			printf("%5d",c[i][j]);
		printf("\n");
	}
	getch();
}
