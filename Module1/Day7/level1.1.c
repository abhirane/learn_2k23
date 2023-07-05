/*
1. File Copy: Write a C program to copy a file using file operations
*/
#include <stdio.h>
int main()
{
    FILE *fs, *fd;
    char buffer[100];
    size_t byte;
    fs = fopen("src.txt", "r");
    if (fs == NULL)
    {
        printf("Unexpected error\n");
        return 1;
    }
    fd = fopen("dst.txt", "w");
    if (fd == NULL)
    {
        printf("Unexpected error\n");
        fclose(fs);
        return 1;
    }
    while ((byte = fread(buffer, 1, 100, fs)) > 0)
    {
        fwrite(buffer, 1, byte, fd);
    }
    fclose(fs);
    fclose(fd);
    return 0;
}