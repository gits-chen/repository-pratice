//#include<stdio.h>
//int main() {
//	
//	int arr[100];
//	int max=0;
//	printf("��������Щ����\n");
//
//
//	for (int i = 0;i++) {
//		scanf("%d", &arr[i]);
//		if (arr[i] > max) {
//			max= arr[i];
//		}
//		
//	}
//	printf("����������%d",max)
//	
//}
#include <stdio.h>
#include <string.h>

int main() {
    int arr[100];
    int max = 0;
    printf("��������Щ���֣����س�����������\n");

    for (int i = 0; ; i++) {
        char input[100];
        fgets(input, sizeof(input), stdin);

        if (strlen(input) == 1 && input[0] == '\n') {
            break;  // ����Ϊ�գ�����ѭ��
        }

        sscanf(input, "%d", &arr[i]);

        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("���������� %d\n", max);

    return 0;
}