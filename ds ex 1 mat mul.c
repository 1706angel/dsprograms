#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10][10],b[10][10],mul[10][10],r,c,i,j,k,cls;
	system c(cls);
	printf("Enter the number of rows = ");
	scanf("%d",&r);
	printf("Enter the number of columns = ");
	scanf("%d",&c);
	printf("Enter the elements of first matrix :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);    
		}
	}
	printf("Enter the elements of second matrix :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiply of the matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    
}    
}    
}     
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  		
