#include<stdio.h>

void print(int *arr , int n);
void sort(int *arr , int n);
void main(){
	
	int a[11]={7,9,10,0,12,67,21,17,16,37,11};
	print(a , 11);
	sort(a , 11);
}

void sort(int *arr , int n){
	int max = arr[n-1], min = arr[0], num_1 = 0, num_2 = n-1;
	int i, j;
	for(i=0; i<(n/2); i++){
		
		for(j=i; j<=(n-i-1); j++){
			if(min >= arr[j]){
				min = arr[j];
				num_1 = j;
			}
			if(max <= arr[j]){
				max = arr[j];
				num_2 = j;
			}
		}
		arr[num_1] = arr[i];
		arr[i] = min;
		arr[num_2] = arr[n-i-1];
		arr[n-i-1] = max;
		
		print(arr , n);
		min = arr[i+1];
		max = arr[n-i-2];
		printf("%d %d; " , i, n-i-1);
		printf("%d %d\n" , min , max);
	}
	
	
}

void print(int *arr , int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
