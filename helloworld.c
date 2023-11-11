#include <stdio.h>
#include <string.h>
#include <windows.h>

void main() {
    char word[] = "Hello World!";
    char newword[] = "            ";

    for(int i = 0; i < strlen(word); i++) {
        char c = *(newword+i);
        while (*(word+i) != c) {
            printf("%s\n",newword);
            c++;
            newword[i] = c;
            Sleep(10);
        }
    }
    printf("%s",newword);
}