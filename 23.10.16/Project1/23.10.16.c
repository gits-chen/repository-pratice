//#include<stdio.h>
//int main() {
//	
//	int arr[100];
//	int max=0;
//	printf("请输入这些数字\n");
//
//
//	for (int i = 0;i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] > max) {
//			max= arr[i];
//		}
//		
//	}
//	printf("最大的数字是%d",max)
//	
//}
#include <stdio.h>
#include <string.h>

int main() {
    int arr[100];
    int max = 0;
    printf("请输入这些数字（按回车键结束）：\n");

    for (int i = 0; ; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);

        if (strlen(input) == 1 && input[0] == '\n') {
            break;  // 输入为空，跳出循环
        }

        sscanf(input, "%d", &arr[i]);

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("最大的数字是 %d\n", max);

    return 0;
}