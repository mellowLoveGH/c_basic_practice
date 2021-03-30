#include<stdio.h>

int func(int a[] , int n);
void func2(int n);
void main(){
	
//	int a[]={1,2,3,4,5,6,7};
//	printf("%d\n", func(a , 7));

//	func2(5831177);
//	char c='47';
//	printf("\n%c\n", c);
//	putchar(c+48);

	char ch = 108;
	ch = ch & 24;
	printf("%d\n" , ch);
}

int func(int a[] , int n){
	
	if(n == 1){
		return 1;
	}
	
	if(n == 2){
		return a[1]>a[0];
	}
	
	return func(a , n-1) && (a[n-1]>a[n-2]);
}

void func2(int n){
	int i;
	i = n/10;
	if(i>0){
		func2(i);
	}
	putchar(n-i*10 + 48);
//	printf("%d", n-i*10);
}
