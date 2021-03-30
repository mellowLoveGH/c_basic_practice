#include<stdio.h> 

void sort(char **str);
void main(){
//	char *str[7] = {
//					"I love you", "this is chinese world", "I think we need to study hard", 
//					"I hope you could be more genteel", "good you are", "I hope so too", "you are good"
//					};
					
//	sort(str);
	char *pstr[7];
	char str[7][30];
	
	int i;
	for(i=0; i<7; i++){
		pstr[i] = str[i];
	}
	
	for(i=0; i<7; i++){
		scanf("%s",pstr[i]);
	}
//	int i;
	for(i=0; i<7; i++){
		printf("%s\n" , pstr[i]);
	} 
}

void sort(char *str[]){
//	char **p;
//	p = str;
//	for(;p<str+7;p++){
//		printf("%s\n" , *p);
//	}
}
