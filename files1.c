#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp,*fptr;
	char s[50],n,file_name1[50],file_name2[50];
	int i=0,j,k;
	printf("write file name which we have to read contents from it\n");
	scanf("%s",file_name1);
	fp = fopen(file_name1,"r");
	if(fp == NULL)
	{
		printf("cannot open the file %s\n",file_name1);
		exit(1);
	}
	printf("write file name which we have to copy contents from before file\n");
	scanf("%s",file_name2);
	fptr = fopen(file_name2,"w");
	if(fptr == NULL)
	{
		printf("cannot open the file %s\n",file_name2);
		exit(1);
	}
	s[i] = fgetc(fp);
	while(s[i] != EOF)/*copy one file content to another*/
	{
		fputc(s[i],fptr);
		i++;
		s[i] = fgetc(fp);
	}
	s[i] = '\0';
	for(i = strlen(s);i >= 0;i--)/*display content from reverse in file*/
	{
		printf("%c",s[i]);
	}
	fclose(fp);
	fclose(fptr);
	
}
