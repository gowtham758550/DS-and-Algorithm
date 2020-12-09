#include<stdio.h>
#include<time.h>
//#include<stdlib.h>


//Recursive function
int recursion(int n){
  if(n<=1){
    return n;
  }
  return recursion(n-1) + recursion(n-2);
}


//Dynamic programming
int dynamic(int n){
  int arr[n + 1];
  int i;

  arr[0] = 0;
  arr[1] = 1;

  for(i = 2; i <= n; i++){
    arr[i] = arr[i -1] + arr[i -2];
  }
  return arr[n];
}


//Space optimized method
int space_optimized(int n){
	int a = 0, b = 1, i, c;
	if(n == 0){
		return a;
	}
	for(i = 2;i <= n;i++){
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}


int main(){

clock_t start, end;
double time;
int choice, n, fib;
printf("Fibonacci series\n\n");

while(1){
  printf("[1] Recursion\n[2] Dynamic Programming\n[3] Space Optimized Method\n[4] Exit\n\nEnter choice : ");
  scanf("%d", &choice);
  
  if(choice == 1){
    printf("Fibonacci using recursion\n\nEnter n : ");
    scanf("%d", &n);
    start = clock();
    fib = recursion(n);
    end = clock() - start;
    time = ((double)end) / CLOCKS_PER_SEC;
    printf("%d Fibonacci series is %d\n", n, fib);
    printf("\nTime taken %f\n\n ", time);

  }
  else if(choice == 2){
    printf("Fibonacci using dynamic programming\n\nEnter n : ");
    scanf("%d", &n);
    start = clock();
    fib = dynamic(n);
    end = clock() - start;
    time = ((double)end) / CLOCKS_PER_SEC;
    printf("%d Fibonacci series is %d\n", n, fib);
    printf("\nTime taken %f\n\n", time);

  }
  else if(choice == 3){
    printf("Fibonacci series using Space optimized program\n\nEnter n : ");
    scanf("%d", &n);
    start = clock();
    fib = space_optimized(n);
    end = clock() - start;
    time = ((double)end) / CLOCKS_PER_SEC;
    printf("%d Fibonacci series is %d\n", n, fib);
    printf("\nTime taken %f\n\n", time);
  }
  else if(choice == 4){
    //exit(0);
    break;
  }
  else{
    printf("Invalid choice\n\n");
  }
}
return 0;
}
