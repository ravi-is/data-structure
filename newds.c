#include<stdio.h>
#include<stdlib.h>
int i;
void display(int arr[],int n)

{

    for(i=0;i<n;i++)

   {

        printf(" %d ",arr[i]);

   }

 

}

void bubble_Sort(int arr[],int n){
	  int i,j,temp;

  for(i=0;i<n;i++)

  {

      for(j=0;j<n-i-1;j++)

      {

          if(arr[j]>arr[j+1])

          {

             temp=arr[j];

             arr[j]=arr[j+1];

             arr[j+1]=temp;

          }

      }

  }

printf("After Bubble sort Elements are : ");

display(arr,n);
}




void selection_Sort(int arr[],int n){
       int i,j,temp;

    for(i=0;i<n-1;i++)

    {

        for(j=i+1;j<n;j++)

        {

            if(arr[i]>arr[j])

            {

             temp=arr[i];

             arr[i]=arr[j];

             arr[j]=temp;

            }

        }

 

    }

printf("After Selection sort Elements are : ");

display(arr,n);
	
}



void insertion_Sort(int arr[], int n){
	  int i,j,min;

    for(i=1;i<n;i++)

    {

        min=arr[i];

        j=i-1;

        while(min<arr[j] && j>=0)

        {

            arr[j+1]=arr[j];

            j=j-1;

        }

        arr[j+1]=min;

    }

printf("After Insertion sort Elements are : ");

display(arr,n);
}
void merge_Sort(){
	
}
void quick_Sort(){
	
}
void radix_Sort(){
	
}
void heap_Sort(){
	
}



int main(){
	int choice;
	int size;
	int i;
	
	printf("\nEnter size of Array \n");
	scanf("\n%d",&size);
	
	int arr[size];
	printf("\nEnter %d element \n",size);
	
	for (i = 0 ; i < size ; i++){
		scanf(" %d", &arr[i]);
	}
	
	
	printf("\n Enter Your Choice \n");
	printf("\n ********************************************* \n");
	printf(" 1) Bubble sort \n");
	printf(" 2) Selection Sort\n");
	printf(" 3) Insertion sort \n");
	printf(" 4) Merge sort \n");
	printf(" 5) Quick sort \n");
	printf(" 6) Radix sort \n");
	printf(" 7) Heap sort \n");
	printf(" 8) Exit \n");
	
	scanf("%d",&choice);
	
	switch(choice){
		case 1: bubble_Sort(arr,size);
			break;
		case 2: selection_Sort(arr,size);
			break;
		case 3: insertion_Sort(arr,size);
			break;
		case 4: merge_Sort(arr,size);
			break;
		case 5: quick_Sort(arr,size);
			break;
		case 6: radix_Sort(arr,size);
			break;
		case 7: heap_Sort(arr,size);
			break;
		case 8: exit(0);
			break;
	}
	
	
	return 0;
}

