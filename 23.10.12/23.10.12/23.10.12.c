#include <stdio.h>
//\'��������
//\"��˫����
//\\����б��
//\ ? ���ʺ�
//\a�����壨������
//\b���˸����C �����е��˸�� \b ֻ�Ὣ����ƶ���ǰһ��λ�ã�������ɾ��ǰһ���ַ�����
//\f����ҳ��
//\n�����з�
//\r���س���
//\t���Ʊ��
//\v����ֱ�Ʊ��
//\0�����ַ�
//\nnn���˽����ַ���ʾ��nΪ 0 - 7 �����֣�
//\xhh��ʮ�������ַ���ʾ��hΪ 0 - 9 �� A - F �����֣�

int main() {
    printf("This is a single quote: \'%c\'\n", 'A');
    printf("This is a double quote: \"%s\"\n", "quoted text");
    printf("This is a question mark: \?\n");
    printf("This is a backslash: \\ \n");
    printf("This is a bell sound: \a\n");
    printf("This is a backspace: Hello\bWorld\n");
    printf("This is a backspace: Hello\b\n");//������Կ���\b������ֱ��ɾ��һ���ַ���������ֻ��ʹ���ǰ����һ��
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