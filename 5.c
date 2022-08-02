#include<stdio.h>
int main()
{
	int n,m;
	printf("enter the matrix size n,m: ");
	scanf("%d %d",&n,&m);
	int i,j,a[n][m];
	printf("enter matrix elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
