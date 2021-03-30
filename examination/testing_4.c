#include<stdio.h>
#include<malloc.h>
int *process(int *arr , int n , int smallest);
int finding(int *arr , int n);
void main(){
	
	int arr[100]={1,2,3,4,5,6,7,8,9,10,12,-1,37,36,27,26,17};
	int smallest = finding(arr , 17);
//	printf("%d\n" , smallest);
	int *b;
	b = process(arr , 17 , smallest);
	int i = 0;
	for(;i < 16;i++){
		printf("%d " , *(b+i));
	}
}

int *process(int *arr , int n , int smallest){
	int i = 0;
	int *p , *q = arr;
	p = (int *)malloc(sizeof(int)*(n-1));
	
	for(; q<arr+n; q++){
		if(smallest != *q){
			*(p+i) = *q;
			i++;
		}
	}
//	rewind(p);	
//	for(;p;p++){
//		printf("%d " , *p);
//	}
	return p;
}

int finding(int *arr , int n){
	int smallest = *arr;
	int *p = arr;
	p++;
	int i = 0;
	for(; p<arr+n; p++){
		if(smallest > *p){
			smallest = *p;
		}
	}
	
	return smallest;
}  


















































