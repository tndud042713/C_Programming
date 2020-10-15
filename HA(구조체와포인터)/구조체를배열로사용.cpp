//#include<stdio.h>
//#include<string.h>
//
//struct Student{
//	char name[20];
//	int mat,eng;
//};
//
//int main(){
//	Student s[10]; //10명의 학생을 배열로 선언-10명 이하로 입력한다. 
//	char res[20]; //수학 성적이 가장 우수한 학생의
//	//이름을 저장하기 위한 배열 
//	int i,n,max=-2147000000;
//	printf("몇명의 학생 입력 정보를 희망하십니까?\n");
//	scanf("%d",&n);
//	//열명의 학생의 정보를 집어넣는다. 
//	for(i=1;i<=n;i++){
//		scanf("%s",s[i].name);
//		scanf("%d",&s[i].mat); //&값을 깜빡하지 않고 기입해줘야 한다. 
//		scanf("%d",&s[i].eng);
//	} 
//	for(i=1;i<=n;i++){
//		if(s[i].mat>max){
//			max=s[i].mat;
//			strcpy(res,s[i].name);
//		}
//	}
//	printf("수학 점수가 가장 높은 학생은 %s 학생 입니다.\n",res);
//	return 0;
//}
