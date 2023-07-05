#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void upper(char *str)
{
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            *str = *str - ('a' - 'A');
        }
        str++;
    }
}
void lower(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}
void sentenceCase(char *str)
{
    int cap = 1;
    while (*str)
    {
          if (*str == ' ')
            {
                 cap=1;
                    str++;
            }
            if (cap && (*str >= 'a' && *str <= 'z'))
            {
                *str = *str - ('a' - 'A');
                cap = 0;
            }
            else if (!cap && (*str >= 'A' && *str <= 'Z'))
            {
                *str = *str + ('a' - 'A');
            }
            str++;
        }  
    }
int main(int argc, char *argv[])
{
    char *option = argv[1];
    char *ps = argv[2];
    char *pd = argv[3];
    FILE *fs = fopen(ps, "r");
    if (fs == NULL)
    {
        printf("unexpected error\n");
        return 1;
    }
    FILE *fd = fopen(pd, "w");
    if (fd == NULL)
    {
        printf("unexpected error\n");
        return 1;
    }
    char buffer[100];
    size_t byte;
    while ((byte = fread(buffer, 1, 100, fs)) > 0)
    {
        printf("\n%s\n",buffer);
        if (strcmp(option, "-u") == 0)
        {
            upper(buffer);
        }
        else if (strcmp(option, "-l") == 0)
        {
            lower(buffer);
        }
        else if (strcmp(option, "-s") == 0)
        {
            sentenceCase(buffer);
        }
        fwrite(buffer, 1, byte, fd);
    }
    fclose(fs);
    fclose(fd);
    return 0;
}