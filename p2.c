#include <stdio.h>

int main(void)
{
    FILE *fp = NULL;
    int c;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("파일 열기에 실패했습니다. \n");
    }
    else
    {
        printf("파일 열기에 성공했습니다. \n");
    }

    while ((c = fgetc(fp)) != EOF)
    // fgetc() 함수로 fp파일의 문자 하나를 읽고 c의 저장 만약 c의 저장된 문자가 파일의 끝을 가르키는 문자라면?
    // 그러면 while문이 동작하지 않음. 근데 끝을 가르키는 문자가 아니면?? 계속 진행.
    // 🔯 EOF 파일의 끝을 알리는 문자.
    {
        putchar(c); // 우리의 콘솔창에 문자 하나 출력.
    }

    fclose(fp);
    return 0;
}
