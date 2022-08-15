#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main_046()
{
    char word[30];               // 단어를 저장할 배열
    int length;                  // 문자열 길이
    bool isPalindrome = true;    // 회문 판별값을 저장할 변수, 초깃값은 true

    printf("단어를 입력하세요: ");
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