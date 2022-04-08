#include<stdio.h>
#include<stdlib.h>

int main(){
	int a[5];
	int l=0,h=4,i,mid,flag=0,key;
	printf("access element for sorting");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);;
		
	}
	printf("enter a key  for serching  ");
	scanf("%d",&key);
	
	while(l<=h){
		mid=(l+h)/2;
		if(a[mid]==key){
			printf("\nelement is found %d at %d index  ",key,i);
			flag=1;
			break;
		}
	else if(key<a[mid])	{
	l=l;
	h=mid-1;
	
	}
	else{
	l=mid+1;
	h=h;

	}
	
	}
	if(flag==0)
	{
		printf("\nelement is not found");
	}
		
	
}
