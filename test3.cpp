#include<stdio.h>
#include<string.h>
void change1(int n,char a[]){//������ת�������� 
	switch(n){
		case 0:strcpy(a,"��");break;
		case 1:strcpy(a,"һ");break;
		case 2:strcpy(a,"��");break;
		case 3:strcpy(a,"��");break;
		case 4:strcpy(a,"��");break;
		case 5:strcpy(a,"��");break;
		case 6:strcpy(a,"��");break;
		case 7:strcpy(a,"��");break;
		case 8:strcpy(a,"��");break;
		case 9:strcpy(a,"��");break;
	}
}
void change2(int n,char cnum[]){
	char a[20];
	if(n>=0&&n<=99){//�ж������Ƿ�Ϸ� 
		if(n<10){change1(n,a),strcpy(cnum,a);}
		else{int t;
			t=n/10,n=n%10;
			if(t!=1){//���ǡ�ʮ���͡�һʮ���Ĳ�� 
				change1(t,a),strcpy(cnum,a),strcat(cnum,"ʮ");
				if(n!=0){change1(n,a),strcat(cnum,a);}//����ĩβ�������� 
			}
			else{strcpy(cnum,"ʮ");
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
