//#include <stdio.h>
//
//int main() {
//    char  str[] = "OpenAI GPT-3.5";
//    char version[10];
//    int major, minor;
//
//    // 从字符串中提取版本信息
//    sscanf(str, "OpenAI GPT-%d.%d", &major, &minor);
//    printf("Major: %d\n", major);
//    printf("Minor: %d\n", minor);
//
//    return 0;
//}
//int main() {
//	int a = 0;
//	int c = a++ + a++;
//	return 0;
//}
#include<stdio.h>
int main() {
	for (int i = 1;i <=10 ;i++) {
		if (i == 5) {
			return;
		}
		printf("%d", i);
	}
}