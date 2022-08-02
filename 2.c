#include <stdio.h>
int main()
{
	int n;
	printf("enetr size of array:");
	scanf("%d",&n);
	int arr[n];
	int i,j,temp,pos=0;
	for(i=0;i<n;i++)
	{
		printf("enter %d element:",i);
		scanf("%d",&arr[i]);
		}
		for(j=0;j<n-1;j++){
			pos=j;
			for(i=j+1;i<n;i++){
				if(arr[pos]>arr[i]){
					pos=i;
					}
					}
					if(pos!=j){
						temp=arr[j];
						arr[j]=arr[pos];
						arr[pos]=temp;
						}
						}
						printf("\nsorted array\n");
						for(i=0;i<n;i++){
							printf("%d\t",arr[i]);}
							return 0;
							}
