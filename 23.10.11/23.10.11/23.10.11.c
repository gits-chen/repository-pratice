#include<stdio.h>
#include<string.h>//���ͷ�ļ��а����������strlen����
#define MAX 19//�˴�define������һ����ʶ���������Ǳ���
enum SEX//�˴�Ϊö�ٳ����Ķ��庯����������enum SEX���������µĳ����Ŀ���ȡֵ
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	char ak[] = "name";//ֱ�Ӷ����ַ�����Ҫʹ��˫����
	char ak2[] = { 'n','a','m','e' };//�������ַ���ĩβ����\0��\0������ַ����Դ˽��������ַ�����ֱ�Ӷ��������������Զ����㲹ȫ
	char ak3[] = { 'n','a','m','e','\0' };//����һ��һ��Ԫ�ص����ȥ��Ҫ��ĩβ��ȫ\0����Ȼ�������ͻ�������
	printf("%s\n", ak);
	printf("%s\n", ak2);
	printf("%s\n\n\n\n", ak3);


	int len = strlen(ak);//strlen���������ж�������ַ���ռ�����ֽ�
	int len1 = strlen(ak2);
	int len2 = strlen(ak3);
	printf("%d\n%d\n%d\n\n\n\n\n", len, len1, len2);//�ַ�����\0�����ַ������ȣ����������鳤��



	const int num = 14;//�˴������num���г����ԣ�����Ϊ����,Ϊ������
	//num=30;//�����޷��ٴζ���
	printf("%d\n\n\n\n\n\n", num);
	//printf("%d\n", MAX);//MAX���Ǳ��������ɱ�printfʶ��
	char arr[MAX];
	//char arr1[num];//���鳤��ֻ����һ���������ʱ�ʽ������


	enum SEX nnnn = MALE;//�˴���������Ϊnnnn�ĳ�����ֵ
	//enum SEX nnnn = FEMALE;//����nnnn��ֵ�����ٶ���
	printf("%d\n", nnnn);//ö�ٳ�����ֵ��ǰ����ֱ�Ϊ0,1,2����
	return 0;
}
