#include<stdio.h>

struct Student{
	int stuNum,mat,eng,C_lan;
};

int main(){
	int max=-2147000000;
	int max_index=-1;
	Student s[10];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d %d",&s[i].stuNum,&s[i].mat,&s[i].eng,&s[i].C_lan);
	}	
	for(i=0;i<n;i++){
		if(s[i].mat>max){
			max=s[i].mat;
			max_index=i;
		}
	}
	printf("%d",s[max_index].C_lan);
	return 0;
}
