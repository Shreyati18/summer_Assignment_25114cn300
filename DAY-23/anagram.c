#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    for(i = 0; str1[i] != '\0'; i++) {
        freq1[(int)str1[i]]++;
    }

    for(i = 0; str2[i] != '\0'; i++) {
        freq2[(int)str2[i]]++;
    }

    for(i = 0; i < 256; i++) {
        if(freq1[i] != freq2[i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Strings are Anagrams.\n");
    else
        printf("Strings are Not Anagrams.\n");

    return 0;
}