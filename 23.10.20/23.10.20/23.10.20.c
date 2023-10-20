//#include<stdio.h>
//int main() {
//	long long int a=0, b=0;
//	unsigned long long sum;
//	scanf("%lld%lld", &a, &b);
//	if (a < 0 && b < 0) {
//		sum = -a + -b;
//		printf("-%llu", sum);
//	}
//	else {
//		sum = a + b;
//		printf("%llu", sum);
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main() {
//	char line[1000];
//
//	while (gets(line)) {
//
//		if (!isalpha(line[1])) {
//			for (int i = 0, j = 0;1; j++) {
//				if (line[j] == ' '&&line[j-1]!=' '&&j>=1) {
//					i++;
//				}
//				else if (i == 3) {
//					printf("%c", line[j]);
//				}
//				else if (i >= 4) {
//					printf("\n");
//					break;
//				}
//				else {
//					continue;
//				}
//
//			}
//		}
//		else {
//			continue;
//		}
//	}
//	return 0;
//}
#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	int n,num=0,num2=1;
	char str[21000];
	int line[10000];


	scanf("%d", &n);
	getchar();
	gets(str);


	char* token = strtok(str, " ");
	while (token != NULL) {
		line[num] = atoi(token);
		token = strtok(NULL, " ");
		num++;
	}
	
	
	while (1) {
		for (int i = 0;i < n;i++) {
			if (line[i] != 0) {
				line[i]--;
			}
		}
		for (int j = 0;j < n;j++) {
			if (line[j] == 0 && line[j + 1] > 0) {
				num2++;
			}
		}
		int all_zero = 1;
		for (int p = 0; p < n; p++) {
			if (line[p] != 0) {
				all_zero = 0;
				break;
			}
		}
		if (all_zero) {
			break;
		}
	}
	printf("%d", num2);



	return 0;
}