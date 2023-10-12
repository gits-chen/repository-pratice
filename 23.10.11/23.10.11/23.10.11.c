#include<stdio.h>
#include<string.h>//这个头文件中包含了下面的strlen函数
#define MAX 19//此处define定义了一个标识符常量，非变量
enum SEX//此处为枚举常量的定义函数，定义了enum SEX函数定义下的常量的可能取值
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	char ak[] = "name";//直接定义字符串需要使用双引号
	char ak2[] = { 'n','a','m','e' };//但所有字符串末尾都是\0，\0代表该字符串自此结束；若字符串是直接定义的则编译器会自动帮你补全
	char ak3[] = { 'n','a','m','e','\0' };//但若一个一个元素的输进去则要在末尾补全\0，不然编译器就会编出乱码
	printf("%s\n", ak);
	printf("%s\n", ak2);
	printf("%s\n\n\n\n", ak3);


	int len = strlen(ak);//strlen的作用是判定后面的字符串占几个字节
	int len1 = strlen(ak2);
	int len2 = strlen(ak3);
	printf("%d\n%d\n%d\n\n\n\n\n", len, len1, len2);//字符串中\0不算字符串长度，但是算数组长度



	const int num = 14;//此处定义的num具有常属性，但仍为变量,为常变量
	//num=30;//常量无法再次定义
	printf("%d\n\n\n\n\n\n", num);
	//printf("%d\n", MAX);//MAX不是变量，不可被printf识别
	char arr[MAX];
	//char arr1[num];//数组长度只能是一个常量，故本式不成立


	enum SEX nnnn = MALE;//此处定义了名为nnnn的常量的值
	//enum SEX nnnn = FEMALE;//常量nnnn的值不可再定义
	printf("%d\n", nnnn);//枚举常量的值自前到后分别为0,1,2……
	return 0;
}
