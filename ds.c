#include<stdio.h>
#include<stdlib.h>

void bubble_Sort(){
	
}
void selection_Sort(){
	
}
void insertion_Sort(){
	
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
	int arr[size];
	
	printf("Enter size of Array \n");
	scanf("\t  %d",&size);
	printf("\t Enter %d element \n");
	
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
		case 1: bubble_Sort();
			break;
		case 2: selection_Sort();
			break;
		case 3: insertion_Sort();
			break;
		case 4: merge_Sort();
			break;
		case 5: quick_Sort();
			break;
		case 6: radix_Sort();
			break;
		case 7: heap_Sort();
			break;
		case 8: exit(0);
			break;
	}
	
	
	return 0;
}

