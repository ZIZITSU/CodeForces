#include <stdio.h>
#include <string.h>
 
int main() {
    char s[101];
    char numbers[101];
    int n = 0;
    
    scanf("%s", s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '+') {
            numbers[n++] = s[i];
        }
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                char temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf("+");
        }
        printf("%c", numbers[i]);
    }
    
    return 0;
}