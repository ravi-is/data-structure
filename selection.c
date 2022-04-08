#include<stdio.h>
#include<stdlib.h>
void main(){
	int i,j,n,min,temp;
	int a[5];
	printf("enter element");
	for(i=0;i<n;i++)
	scannf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		min=i;
		
	}
	for(j=i+1;j<n;j++)
	{
		if(a[j]<a[min])
			min=j;
	}
			temp=a[i];
	a[i]=a[min];
	a[min]=temp;
}
	
	printf("sorted arry is");
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return(0);


}
