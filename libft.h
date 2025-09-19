#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stddef.h>

int ft_isdigit(char c);
int ft_isascii(char c);
int ft_isalpha(char c);
int ft_isprint(char c);
int ft_toupper(int c);
int ft_strlen(char const *str);
int ft_atoi(const char *str);
int ft_memcmp(const void *s1, const void *s2, size_t len);
int ft_strncmp(char const *s1, char const *s2, size_t n);

size_t 	ft_strlcpy(char *dest, char *src, unsigned int size);
size_t ft_strlcat(char *dest, const char *src, size_t size)


char *ft_strdup(const char *str);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
char *ft_substr(char const *s,unsigned int start,size_t len);
char *ft_strrchr(char const *str, int c);

void *ft_mamchr(void *s, int c, size_t size);
void *ft_memcpy(void *dest ,const void *src, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memset(void *s, int c, size_t n);
void *ft_memmove(void *dest, const void *src, size_t len);

#endif