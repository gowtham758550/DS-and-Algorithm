#include<stdio.h>
#include<stdlib.h>

//linear search
//array[] - array
//n - size of array(number of elements in array)
//x - search element
//return position if element found 
//return -1 if element not found
int linear_search(int array[], int n, int x){
	for(int i = 0; i < n; i++){
	  if (array[i] == x){
	  	return i+1; 
	  }	
	}
	return -1;
}


int main(){
	int n, x, result;
	int *array;
	printf("Linear search\n\nEnter array length(max = 100) : ");
	scanf("%d", &n);
	//allocating size for array
	array = (int*)malloc(n * sizeof(int));
	for(int i = 0; i < n; i++){
		printf("\nEnter %d element : ", i+1);
		scanf("%d", &array[i]);
	}
	printf("\nEnter search element :");
	scanf("%d", &x);
	result = linear_search(array, n, x);
	printf("\n%d", result);
	return 0;
}