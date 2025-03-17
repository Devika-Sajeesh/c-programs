#include <stdio.h>

int main() {
    char source[100], destination[100], ch;
    FILE *src, *dest;

    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", destination);

    src = fopen(source, "r");
    if (src == NULL) {
        printf("Cannot open source file\n");
        return 1;
    }

    dest = fopen(destination, "w");
    if (dest == NULL) {
        printf("Cannot open destination file\n");
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) fputc(ch, dest);

    printf("File copied successfully\n");

    fclose(src);
    fclose(dest);

    return 0;
}
