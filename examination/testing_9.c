#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[20];
	int score;
}stu[3];


void main(){
	FILE *fp , *f_new;
	
	//char c;
	char filename[20] ;// f_picture[20];
	scanf("%s" , filename);
	
	fp = fopen(filename , "r+");
	if(fp == NULL){
		printf("cannot open.\n");
		exit(0);
	}else{
		printf("succeed.\n");
	}
	
	
//	getchar();	
//	char c[7];	
//	fgets(c , 7 , stdin);
//	fputs(c , fp);
	int i;
	for(i = 0; i<9; i++){
		fscanf(fp , "%s\t%d" , &stu[i].name , &stu[i].score);
	}
	
	float sum = 0;
	//sorting
	int j = 0;
	for(i = 0; i<9; i++){
		for(j=i+1 ;j<9 ; j++){
			if(stu[i].score < stu[j].score){
				struct student temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
		sum = sum + stu[i].score;
	}
	
	//
	for(i = 0; i<9; i++){
		printf("%s\t%d\n" , stu[i].name , stu[i].score);
	}
	
	printf("the average is: %f\n" , sum/9);
	
	for(i = 0; i<3; i++){
		fprintf(fp , "%s\t%d\n" , stu[i].name , stu[i].score);
	}
	
	
	fclose(fp);
}


