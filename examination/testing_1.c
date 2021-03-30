#include<stdio.h>
#include<string.h>

int search(char *str_1 , char *str_2);
void deleting(char *str_1 , int len , int start);
void main(){
	
	char str[100] = "this is data structure algorithm programming.this.", *sub = "algorit";
	
	int finding = search(str , sub);
	
	if(finding == -1){
		printf("not find!\n");
	}else{
		printf("finding!\n");
		printf("the starting position is : %d\n" , finding);
	}
	
	printf("%s\n",str);
	deleting(str , strlen(sub) , finding);
	printf("%s\n",str);
}

int search(char *str_1 , char *str_2){
	int start = -1;
	
	int i,j;
	for(i=0; str_1[i]!='\0'; i++){
		
		for(j=0; str_2[j]!='\0'; j++){
			if(str_1[i+j] != str_2[j]){
				break;
			}
		}
		
		//
		if(str_2[j] == '\0'){
			start = i;
			break;
		}
		
	}
	return start;
}

void deleting(char *str_1 , int len , int start){
	
	int end = start + len;
	char p[100];
	int i = 0;
	for(;i<start;i++){
		p[i] = str_1[i];
	}
	for(;str_1[i+len]!='\0';i++){
		p[i] = str_1[i+len];
	}
	p[i] = '\0';
	
	strcpy(str_1 , p);
//	str_1 = p;
//	printf("%s\n",p);
}































