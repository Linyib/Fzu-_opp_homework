#include<stdio.h> 
#include<string.h>
int change(char a[]){
	int n;
	if(!strcmp(a,"��")) n=0;
	else if(!strcmp(a,"һ")) n=1;
	else if(!strcmp(a,"��")) n=2;
	else if(!strcmp(a,"��")) n=3;
	else if(!strcmp(a,"��")) n=4;
	else if(!strcmp(a,"��")) n=5;
	else if(!strcmp(a,"��")) n=6;
	else if(!strcmp(a,"��")) n=7;
	else if(!strcmp(a,"��")) n=8;
	else if(!strcmp(a,"��")) n=9; 
	return n;
}
int main(){
	char a[10][10]={"��","һ","��","��","��","��","��","��","��","��"};
	for(int i=0;i<10;i++)
	printf("%s %d\n",a[i],change(a[i]));
	return 0; 
} 
