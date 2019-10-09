#ifndef HOLBERTON_SCHOOL
#define HOLBERTON_SCHOOL

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
int _strlen(char *s);
int _strcmp(char *s1, char *s2);
int _strncmp(const char *s1, const char *s2, int n);
int _putchar(char c);

#endif
