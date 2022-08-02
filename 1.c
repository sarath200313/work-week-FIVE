#include <stdio.h>
int main()
{
	int n;
	printf("enetr size of array:");
	scanf("%d",&n);
	int arr[n];
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
		}
		for(j=0;j<n-1;j++){
			for(i=0;i<n;i++){
				if(arr[i]>arr[i+1]){
					temp=arr[i];
					arr[i]=arr[i+1];
					arr[i+1]=temp;
					}
					}
					}
					printf("\nsorted array\n");
					for(i=0;i<n;i++)
					{
						printf("%d\t",arr[i]);}
						return 0;
						}
