//#define _crt_secure_no_warnings 1
//#include<stdio.h>
//int main()
//{
//    /**********begin**********/
//    char name[40];
//    gets_s(name);
//    printf("hello %s!", name);
//        /**********end**********/
//        return 0;
//}
//#include<stdio.h>
//int main()
//{
//    /**********  begin  **********/
//    int m[9];
//    int sum;
//    float average;
//    for (int i = 0;i <= 9;i++) {
//        scanf("%d", &m[i]);
//        sum = sum + m[i];
//        if (m[i] > 0) {
//            average = m[i] + average;
//        }
//    }
//    average = average / 10;
//    printf("累加和：%d\n平均值：%.1f", sum, average);
//
//
//    /**********  end  **********/
//    return 0;
//}
#include <stdio.h>
int main(){
	int a = 9 / 2;
	int b = 9 / 2.0;
	float c = 9 / 2;//当/两边为整数时，m/n表示m除以n去掉余数后的商，对于上式，因为9/2=4……1，所以该数为一
	float d = 9 / 2.0;//当/两边有一数为小数时，则其执行的是小数除法，即9/2.0=4.5
	printf("%d\n%d\n%f\n%f\n", a, b, c, d);
	return 0;
}