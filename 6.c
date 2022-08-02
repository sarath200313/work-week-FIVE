#include<stdio.h>
int main()
{
	int m,n;
	printf("enter dimensions of matrices: ");
	scanf("%d %d",&n,&m);
	int i,j,a[n][m],b[n][m];
	printf("enter first array: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second array: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
