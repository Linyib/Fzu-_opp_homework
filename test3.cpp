#include<stdio.h>
#include<string.h>
void change1(int n,char a[]){//将汉字转化成数字 
	switch(n){
		case 0:strcpy(a,"零");break;
		case 1:strcpy(a,"一");break;
		case 2:strcpy(a,"二");break;
		case 3:strcpy(a,"三");break;
		case 4:strcpy(a,"四");break;
		case 5:strcpy(a,"五");break;
		case 6:strcpy(a,"六");break;
		case 7:strcpy(a,"七");break;
		case 8:strcpy(a,"八");break;
		case 9:strcpy(a,"九");break;
	}
}
void change2(int n,char cnum[]){
	char a[20];
	if(n>=0&&n<=99){//判断数字是否合法 
		if(n<10){change1(n,a),strcpy(cnum,a);}
		else{int t;
			t=n/10,n=n%10;
			if(t!=1){//考虑“十”和“一十”的差别 
				change1(t,a),strcpy(cnum,a),strcat(cnum,"十");
				if(n!=0){change1(n,a),strcat(cnum,a);}//考虑末尾是零的情况 
			}
			else{strcpy(cnum,"十");
				if(n!=0){change1(n,a),strcat(cnum,a);}
			}
		}
	} 
}
int main(){
	for(int i=0;i<100;i++){
		char cnum[20];
		change2(i,cnum);
		printf("%d %s\n",i,cnum);
	}
	return 0;
}
