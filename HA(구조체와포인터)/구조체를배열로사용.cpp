//#include<stdio.h>
//#include<string.h>
//
//struct Student{
//	char name[20];
//	int mat,eng;
//};
//
//int main(){
//	Student s[10]; //10���� �л��� �迭�� ����-10�� ���Ϸ� �Է��Ѵ�. 
//	char res[20]; //���� ������ ���� ����� �л���
//	//�̸��� �����ϱ� ���� �迭 
//	int i,n,max=-2147000000;
//	printf("����� �л� �Է� ������ ����Ͻʴϱ�?\n");
//	scanf("%d",&n);
//	//������ �л��� ������ ����ִ´�. 
//	for(i=1;i<=n;i++){
//		scanf("%s",s[i].name);
//		scanf("%d",&s[i].mat); //&���� �������� �ʰ� ��������� �Ѵ�. 
//		scanf("%d",&s[i].eng);
//	} 
//	for(i=1;i<=n;i++){
//		if(s[i].mat>max){
//			max=s[i].mat;
//			strcpy(res,s[i].name);
//		}
//	}
//	printf("���� ������ ���� ���� �л��� %s �л� �Դϴ�.\n",res);
//	return 0;
//}
