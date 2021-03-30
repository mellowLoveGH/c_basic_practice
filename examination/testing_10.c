#include<stdio.h>
#include<string.h>

int finding(char *str , char ch);
void main(){
	
	finding("this is china" , 'g');
}

int finding(char *str , char ch){
	int i, j=-1;
	for(i=0; *(str+i)!='\0'; i++){
		if(*(str+i) == ch){
			j = i;
			break;
		}
	}
	
	if(j != -1){
		printf("find it: %d\n" , j);
		printf("%s\n" , str);
		int length = strlen(str);
		char s[length];
		for(i = 0; i<j; i++){
			s[i] = str[i];
		}
//		str = str + i;
//		s = strcat(s,str);
		for(; str[i+1]!='\0'; i++){
			s[i] = str[i+1];
		}
		s[i] = '\0';
		printf("%s\n" , s);
	}else{
		printf("do not find.\n");
//		printf("%s\n" , str);
	}
	return j;
}
