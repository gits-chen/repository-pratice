#include <stdio.h>
#include <stdlib.h>

unsigned int IP[40];
int j = 0;

void NumToIP(unsigned int Num) {
    for (int i = 3; i >= 0; i--) {
        IP[j] = Num & 0xff;
        Num >>= 8;
        j++;
    }
}

int main() {
    char str[100];
    char ch;
    int num = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            str[num] = '\0';
            NumToIP(atoi(str));
            num = 0;
        }
        else {
            str[num] = ch;
            num++;
        }
    }

    for (int i = 0; i < j; i += 4) {
        printf("%u.%u.%u.%u\n", IP[i + 3], IP[i + 2], IP[i + 1], IP[i]);
    }
    return 0;
}
//在程序中使用全局数组与全局循环变量，从而达到记录数组值的目的
//或使用静态数组也可以达到相同的效果