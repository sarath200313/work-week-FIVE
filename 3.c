#include <stdio.h>
int main()
{
	int size;
	int direction;
	scanf("%d", &size);
	int arr[size];
	for (int j = 0; j < size; j++)
	{
		scanf("%d",&arr[j]);
	}
	printf("press 1 for left roration\nPress 2 for Rigth rotation: ");
	scanf("%d", &direction);
	int n;
	printf("shift: ");
	scanf("%d", &n);
	if (direction==1)
	{
		for(int i = 0; i < n; i++)
	{
		int j, first;
		first = arr[0];
		
		for(j=0; j < size-1; j++)
		{
			arr[j] = arr[j+1];
			arr[j]= arr[j+1];
		}
		arr[j]= first;
	}
	}
	else if (direction==2)
	{
		for (int i = 0; i < n; i++)
		{
			int j, last;
			last= arr[size-1];
			for(j= size-1; j> 0; j--)
			{
				arr[j] = arr[j-1];
			}
		arr[0]= last;
		}
	}
	else
	{
		printf("ERROR");
	}
	if (direction==1)
	{
		printf("Array after left rotation: \n");
		for (int i=0; i< size; i++){
		printf("%d", arr[i]);}
	}
	return 0;
}
