#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main_046()
{
    char word[30];               // �ܾ ������ �迭
    int length;                  // ���ڿ� ����
    bool isPalindrome = true;    // ȸ�� �Ǻ����� ������ ����, �ʱ갪�� true

    printf("�ܾ �Է��ϼ���: ");
    scanf("%s", word);

    length = strlen(word);

    for (int i = 0; i < length / 2; i++)
    {
        if (word[i] != word[length - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }
    printf("%d\n", isPalindrome);

    return 0;
}