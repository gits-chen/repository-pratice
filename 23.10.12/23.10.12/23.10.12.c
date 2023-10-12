#include <stdio.h>
//\'：单引号
//\"：双引号
//\\：反斜杠
//\ ? ：问号
//\a：响铃（警报）
//\b：退格符（C 语言中的退格符 \b 只会将光标移动回前一个位置，并不会删除前一个字符。）
//\f：换页符
//\n：换行符
//\r：回车符
//\t：制表符
//\v：垂直制表符
//\0：空字符
//\nnn：八进制字符表示（n为 0 - 7 的数字）
//\xhh：十六进制字符表示（h为 0 - 9 或 A - F 的数字）

int main() {
    printf("This is a single quote: \'%c\'\n", 'A');
    printf("This is a double quote: \"%s\"\n", "quoted text");
    printf("This is a question mark: \?\n");
    printf("This is a backslash: \\ \n");
    printf("This is a bell sound: \a\n");
    printf("This is a backspace: Hello\bWorld\n");
    printf("This is a backspace: Hello\b\n");//这里可以看出\b并不是直接删除一个字符，而仅仅只是使光标前移了一格）
    printf("This is a form feed:\n\fNew Page\n");
    printf("This is a new line:\nSecond line\n");
    printf("This is a carriage return:\rOverwritten text\n");
    printf("This is a tab:\tIndented text\n");
    printf("This is a vertical tab:\vIndented text\n");
    printf("This is a null character: \0\n");
    printf("This is an octal representation of 'A': \101\n");
    printf("This is a hexadecimal representation of 'A': \x41\n");

    return 0;
}