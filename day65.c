#include<stdio.h>
char* reverse(char*string){
	static int i=0;
	static char rev[10];
	if(*string)
	{
		reverse(string+1);
		rev[i++]=*string;
	}
	return rev;
}
int main(){

char line[200];
FILE*f;
f=fopen("C:/Users/DELL/Desktop/66.txt","r");
	if(f!=NULL)
	{
		printf("file opened succesfully \n");
	}
	fgets(line,200,f);
	printf("string input from file: ");
	puts(line);
fclose(f);
printf("the reversed string : " "%s" ,reverse(line));
f=fopen("C:/Users/DELL/Desktop/66.txt","a");
fprintf(f,"%s",reverse(line));
fclose(f);
printf("\nThis reserved string was added successfully ");
return 0;
}
