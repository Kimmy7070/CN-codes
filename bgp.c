#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k;
	int a[10][10],b[10][10];
	printf("\tenter the number of nodes: \t");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("\n Enter thew distance between the host %d - %d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(k=0;k<n;k++){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i][j]>a[i][k]+a[k][j]){
					a[i][j]=a[i][k]+a[k][j];
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[i][j];
			if(i==j){
				b[i][j]=0;
			}
		}
	}
	printf("\n the output matrix is: \n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
}
