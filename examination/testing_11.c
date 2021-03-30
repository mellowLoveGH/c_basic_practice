#include<stdio.h>
int acounting(int base , int factor , int max);
void main(){
	int a = 0;
//	int b = a++;
//	int c = a + (++b);
//	printf("%d , %d" , b ,c);
	
	printf("%d\n" , a++);
	printf("%d\n" , acounting(10 , 3 , 6));
	char b[] = "I am China";
	char *p = b;
	printf("%d , %d\n" , sizeof(char) , sizeof(p));
//	putchar('\101');
	float x = 3e+5;
	printf("%f" , x);
}

int acounting(int base , int factor , int max){
	int i , result = 0;
	for(i=1; i<=max; i++){
		if(i%factor==0){
			continue;
		}
		result += base;
	}
	return result;
}
