#include<stdio.h> 
#include<string.h>
#include<malloc.h>
char *reverse(char *str);
char *concatenate(char *str_1 , char *str_2);
char *longest(char *str);
void main(){
	char *str;
//	str = reverse("abcdefg");
//	printf("%s\n" , str);
	
//	str = concatenate("abcd" , "efg");
//	printf("%s\n" , str);

	str = longest("I am a student and alogorithm programming too");
	printf("%s\n" , str);
}

char *reverse(char *str){
	int length = strlen(str);
	char *s;
	s = (char *)malloc(sizeof(char) * length);
	int i = length - 1;
	int j = 0;
	for(;i>=0 ;i--){
		*(s+j) = *(str+i);
		j++;
	}
	return s;
}

char *concatenate(char *str_1 , char *str_2){
	int length = strlen(str_1) + strlen(str_2);
	int i;
	char *str;
	str = (char *)malloc(sizeof(char)*length);
	for(;str_1[i]!='\0';i++){
		*(str+i) = *(str_1+i);
	}
	
	int j = 0;
	for(;str_2[j]!='\0';j++){
		*(str+i+j) = *(str_2+j);
	}
	
	*(str+i+j) = '\0';
	
	return str;
}

char *longest(char *str){
	int length = strlen(str);
	int i = 0, j = 0, k = 0;
	int len = 0 , start = -1;
	for(;i<=length;i++){
		if(*(str+i) == 32 || *(str+i) == '\0'){
			k = i - j;
			if(k > len){
				len = k;
				start = j;
			}
			j = i + 1;
		}
	}
	
	char *s = (char *)malloc(sizeof(char)*len);
	int t = 0;
	for(;t < len ; t++){
		*(s+t) = *(str+start+t);
	}
	*(s+t) = '\0';
	return s;
}




















































