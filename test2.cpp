#include<stdio.h> 
#include<string.h>
int change(char a[]){
	int n;
	if(!strcmp(a,"零")) n=0;
	else if(!strcmp(a,"一")) n=1;
	else if(!strcmp(a,"二")) n=2;
	else if(!strcmp(a,"三")) n=3;
	else if(!strcmp(a,"四")) n=4;
	else if(!strcmp(a,"五")) n=5;
	else if(!strcmp(a,"六")) n=6;
	else if(!strcmp(a,"七")) n=7;
	else if(!strcmp(a,"八")) n=8;
	else if(!strcmp(a,"九")) n=9; 
	return n;
}
int main(){
	char a[10][10]={"零","一","二","三","四","五","六","七","八","九"};
	for(int i=0;i<10;i++)
	printf("%s %d\n",a[i],change(a[i]));
	return 0; 
} 
