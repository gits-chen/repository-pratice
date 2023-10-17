//#include <stdio.h>
//
//int main() {
//    char line[100];
//    int freeValue;
//
//    while (fgets(line, sizeof(line), stdin)) {
//        int count = sscanf(line, "%*d %*d %*d %d", &freeValue);
//        if (count == 1) {
//            printf("%d\n", freeValue);
//        }
//    }
//
//    return 0;
//}
#include<stdio.h>
int main() {
	int n;
	char line[10000];


	scanf("%d", n);
	gets(line);

	loop:
	for (int i = 0;i <= 2n - 1;i++) {
		if (line[i] != 0 && line[i]!='\0') {
			line[i]--;
		}

		else {
			continue;
		}
	}

	int 
	if()


	return 0;
}
