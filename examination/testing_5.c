#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<malloc.h>
char *LString(char *str_1 , char *str_2);
void main(){
	
	char str_1[] = "this is C programming text", str_2[]="this is a text for C programming"; 
	char *str = LString(str_1 , str_2);
	if(str != NULL){
		printf("%s\n" , str);
	}else{
		printf("cannot find the common word for these.\n");
	}
}

char *LString(char *str_1 , char *str_2){
	int i = 0, j, k = -1, length = 0;
	int m = 0 , n;
	int len = 0;
	while(m<strlen(str_1)){
		//i -- m
		for(;str_1[m] != '\0';){
			m++;
			if(str_1[m] == 32){
				break;
			}
			
		}
		printf("%d %d\n" ,i, m);
		for(j=0; j<strlen(str_2); j++){
			
			len = m - i;
			for(;i<m;i++){
				if(str_1[i] != str_2[j+i]){
					break;
				}
			}
			if(i == m && length < len){
				length = len;
				k = m - length;
			}
		}
		i = m + 1;
		m++;
	}
	
	if(k!=(-1)){
		char *word;
		word = (char *)malloc(sizeof(char)*100);
		int t = 0;
		for(; t<length; t++,k++){
			word[t] = str_1[k]; 
		}
		word[t]='\0';
		return word;
	}else{
		return NULL;
	}
	
}


