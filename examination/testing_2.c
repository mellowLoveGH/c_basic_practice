#include<stdio.h>

void main(){
	int x = 6;
	
	x+=x-=x*x;
	
//	printf("%d\n" , x);
	
//	printf("int \t\t: %d\n" , sizeof(int));
//	printf("long int \t: %d\n" , sizeof(long));
//	printf("double int \t: %d\n" , sizeof(double));
//	printf("float \t\t: %d\n" , sizeof(float));
//	printf("char \t\t: %d\n" , sizeof(char));
//	int i = 3;
//	printf("%d %d\n" , i , i++);
//	
//	char c;
//	for(i=33; i<127; i++){
//		c = i;
//		printf("%c " , c);
//	}
	
	int a,b,c;
	scanf("a=%d,b=%d,c=%d" , &a,&b,&c);
	printf("%d %d %d" , a,b,c);
}






