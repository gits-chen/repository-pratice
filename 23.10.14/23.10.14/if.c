//#include <stdio.h>
//
//int main() {
//    int age;
//
//    printf("请输入您的年龄：");
//    scanf("%d", &age);
//
//    if (age < 0){
//        printf("年龄不能为负数。\n");
//    }
//    else if (age < 18){
//        printf("您是未成年人。\n");
//    }
//    else if (age < 60){
//        printf("您是成年人。\n");
//    }
//    else{
//        printf("您是老年人。\n");
//    }
//
//    return 0;
//}
//else if 是一种在前一个条件不满足时，继续检查下一个条件的结构。它可以用于在多个条件之间进行选择。当满足某个 if 条件时，对应的代码块会被执行，然后程序会跳过其余的 else if 和 else 部分。
//else 是在前面的所有条件都不满足时的备选方案。它是条件语句中的最后一个分支，不需要条件表达式。如果前面的所有条件都不满足，else 代码块中的语句将被执行。
#include <stdio.h>
#include <stdlib.h>//#include <stdlib.h> 是C语言中的预处理指令，它包含了标准库（Standard Library）中的函数和宏定义。该库提供了一些常用的函数，用于内存管理、随机数生成、字符串处理等操作。
#include <time.h>//#include <time.h> 是C语言中的预处理指令，它包含了标准库（Standard Library）中与时间相关的函数和数据类型。该库提供了一些用于获取和处理时间的函数和结构体。

int main() {
    int secret_number, guess, attempts = 0;
    srand(time(NULL));
    secret_number = rand() % 100 + 1;

    printf("欢迎来到猜数字游戏！\n");

    while (1) {
        printf("请输入您猜测的数字：");
        scanf("%d", &guess);
        attempts++;

        if (guess == secret_number) {
            printf("恭喜！您猜对了！\n");
            printf("您共猜了 %d 次。\n", attempts);
            break;
        }
        else if (guess < secret_number) {
            printf("太小了，请再试一次。\n");
        }
        else {
            printf("太大了，请再试一次。\n");
        }
    }

    return 0;
}
//在代码中包含 <stdlib.h> 头文件后，就可以使用该库中的函数和宏。一些常用的函数包括：
//malloc()：用于动态分配内存。
//free()：用于释放之前动态分配的内存。
//rand()：用于生成伪随机数。
//srand()：用于设置随机数种子。
//atoi()：将字符串转换为整数。
//system()：执行操作系统命令。
//exit()：终止程序的执行。


//在代码中包含 <time.h> 头文件后，就可以使用该库中的函数和数据类型。一些常用的函数和结构体包括：
//time()：用于获取当前的系统时间，返回自1970年1月1日以来经过的秒数。
//ctime()：将时间表示为字符串，通常用于将时间打印到控制台。
//localtime() 和 gmtime()：将时间表示为 struct tm 结构体，可以提取出年、月、日、时、分、秒等信息。
//strftime()：将时间格式化为指定的字符串格式。
//difftime()：计算两个时间之间的差值。
//clock()：返回程序运行时间的近似值，以时钟周期为单位。
//sleep()：让程序暂停执行指定的秒数。