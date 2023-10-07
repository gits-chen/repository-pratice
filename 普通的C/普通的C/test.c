//1、写代码步骤
//写出主函数（即main函数） 
//C语言是从主函数的第一行开始执行的
//main函数相当于入口
//一个项目中可以有多个源文件，但一个项目只能有一个main函数
// 【此有函数】
//int main()
//{
//	printf("克拉拉可爱");
//	return 0;
//}
//int是表示函数的返回类型中的整型（即表示函数返回的值为整数类型）
//main属于函数名,()是函数后面一定会带一个的字符,就像f(x)一样
// return 0相当于初始化，这里暂时还没搞懂，以后来看【这里这里】
//{}中间的玩意叫函数体,函数打完了记得带个“;”
//printf()意为在屏幕上打印其内容
//prinft()是一个库函数，意为其引用了头文件studio.h，故要用代码跟库“打个招呼”，具体如下
// 【此有函数】
//#include<stdio.h>
//意即包含头文件
//2、数据类型
//字符数据类型：char，即ABCD等字符
//短整型：short
//整型：int
//长整型：long
//更长的整形：long long
//单精度浮点数：float
//双精度浮点数：double
//3、计算机中的单位
//计算机为二进制，而计算机储存一个1或0所用的大小即为1bit（比特）
//而1byte（字节）=8bit
//1Kb=1024byte
//1Gb=1024Kb
//1Tb=1024Gb
//1Pb=1024Tb
//而计算各种数据类型的存储大小方式如下
//【此有函数】
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	//""中间的玩意是用来确定函数输出类型的
//	//%d在此处代表输出类型为整数，\代表输出量以后换行（注意是反斜杠）
// //与之类似的%f代表float，%lf代表double
//	//sizeof是一种操作符，用来计算计算类型或变量的大小（单位是字节）
//	return 0;
//}
//#include<stdio.h>
//4、变量与常量
//变量就是可以改变的量，如：身高、体重.etc
//常量就是不会改变的量，如：圆周率、介电常数.etc
//（1）变量
//定义一个变量的方法：变量类型+变量名=变量初始值，如下
//【此有函数】
//int main()
//{
//	int age = 20;
//	return 0;
//}
//或者可以不定义一个初始值，直接创建变量(不推荐)
//则变量类型+变量名即可
//【此有函数】
//int main()
//{
//	int age;
//	return 0;
//}
//（2）局部变量与全局变量
//{}外定义的变量叫全局变量，{}内定义的变量叫局部变量
//当局部变量和全局变量冲突时，局部变量优先（不建议把全局变量和局部变量命名成一样）
//【此有函数】
//int a = 10;
//int main()
//{
//	int a = 100;
//	printf("%d\n", a);
//}
//#include<stdio.h>
//（3）变量相加
//scanf为输入函数，即将输入的值给变量赋值
//【此有函数】
//#include <stdio.h>
//
//int main() {
//    int num1, num2, sum;
//
//    printf("请输入两个整数：\n");
//    scanf_s("%d %d", &num1, &num2);
//
//    sum = num1 + num2;
//
//    printf("两个整数的和为：%d\n", sum);
//
//    return 0;
//}
#include<stdio.h>

int main()
{
	int i;
	int j = 9;
	j = i + 18;
	printf("%d", j);
	return 0;
}