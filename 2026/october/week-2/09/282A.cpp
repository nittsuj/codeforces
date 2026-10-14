#include <stdio.h>
#include <string.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char command[5];
    int count = 0;
    for (int i = 0; i < n; i++) {
        scanf("%s", command);
        if ((strcmp(command, "++X")==0) || (strcmp(command, "X++") == 0)) count++;
        if ((strcmp(command, "--X")==0) || (strcmp(command, "X--") == 0)) count--;
    }
    printf("%d", count);
    
}