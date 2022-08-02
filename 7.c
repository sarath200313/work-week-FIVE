#include <stdio.h>
int main()
{
	int row,col;
	scanf("%d %d",&row,&col);
	int x[row][col];
	printf("Enter Matrix\n");
	for(int i=0;i<row;i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	printf("\n");
	int a[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			a[j][i]=x[i][j];
		}
	}
	for(int i=0;i<row;i++)
	{
		printf("\n");
		for(int j=0;j<col;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
}
	


