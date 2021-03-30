#include<stdio.h>
#include<math.h>
#include<malloc.h>
#include<string.h>

int prime(int n);
char *catenate(char *str_1 , char *str_2);
int compare(char *str_1 , char *str_2);
void copy(char *str_1 , char *str_2);
void main(){
//	int i;
//	for(i=2; i<=100; i++){
//		if(prime(i)){
//			printf("%d ", i);
//		}
//	}
	char str_1[27]="what is youA" , str_2[100]="what is you and how do you do";
//	char *str = catenate(str_1 , str_2);
//	printf("%s\n" , str);

//	printf("%d \n", compare(str_1 , str_2));
	
	char *str;
	str = (char *)malloc(sizeof(char)*100);
	copy(str , str_2);
	printf("%s\n" , str);
}

int prime(int n){
	int flag = 1;
	int i;
	for(i=2; i<=sqrt(n); i++){
		if(n%i == 0){
			flag = 0;
			break;
		}
	}
	
	return flag;	
}

char *catenate(char *str_1 , char *str_2){
	int i , j;
	char *str;
	str = (char *)malloc(sizeof(char)*100);
	
	for(i=0; str_1[i]!='\0'; i++){
		str[i]=str_1[i];
	}
	
	for(j=0; str_2[j]!='\0'; j++){
		str[i+j]=str_2[j];
	}
	str[i+j] = '\0';
	
//	printf("%s\n" , str);
	return str;
}

int compare(char *str_1 , char *str_2){
	int i,j=0;
	for(i=0; str_1[i]!='\0' && str_2[i]!='\0'; i++){
		if(str_1[i] != str_2[i]){
			
			break;
		}
	}
	
	if(str_1[i]=='\0' && str_2[i]=='\0'){
		
	}else{
		j = str_1[i] - str_2[i];
	}
	return j;
}

void copy(char *str_1 , char *str_2){
	int i,j=strlen(str_2);
	for(i=0; i<=j; i++){
		str_1[i] = str_2[i];
	}
}





































