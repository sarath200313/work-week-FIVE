#include <stdio.h>
void pairs(int* arr,int k){
	int i,j=0;
	for(i=0;i<=k;i++){
		for(j=0;j<=i;j++){
			if(arr[j]+arr[i]==k)
			printf("%d+%d=%d\n",arr[i],arr[j],k);
			}
			}
			}
			int main()
			{
				int n;
				printf("enetr size of array:");
				scanf("%d",&n);
				int arr[n];
				int i;
				for(i=0;i<n;i++)
				{
					printf("enter %d element:",i);
					scanf("%d",&arr[i]);
					}
					int k;
					printf("select a no:");
					scanf("%d",&k);
					pairs(arr,k);
					return 0;
					}
