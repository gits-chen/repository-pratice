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
//    printf("�ۼӺͣ�%d\nƽ��ֵ��%.1f", sum, average);
//
//
//    /**********  end  **********/
//    return 0;
//}
#include <stdio.h>
int main(){
	int a = 9 / 2;
	int b = 9 / 2.0;
	float c = 9 / 2;//��/����Ϊ����ʱ��m/n��ʾm����nȥ����������̣�������ʽ����Ϊ9/2=4����1�����Ը���Ϊһ
	float d = 9 / 2.0;//��/������һ��ΪС��ʱ������ִ�е���С����������9/2.0=4.5
	printf("%d\n%d\n%f\n%f\n", a, b, c, d);
	return 0;
}