/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moerrais <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:55:55 by moerrais          #+#    #+#             */
/*   Updated: 2025/10/13 15:55:56 by moerrais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <stdio.h>

//دوال التعامل مع السلاسل النصية (Strings funtions)
size_t ft_strlen(const char *str);
void *ft_memmove(void *dest, const void *src, size_t n);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strcmp(const char *s1, const char *s2);
char *ft_strnstr(const char *big, const char *little, size_t len);


//دوال التعامل مع الذاكرة (Memory functions)
void *ft_memset(void *s, int c, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void ft_bzero(void *s, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);
int ft_memcmp(const void *s1, const void *s2, size_t n);


//دوال التحويل (Conversion)
int ft_atoi(const char *nptr);



//دوال التعامل مع الحروف (Character handling)
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_tolower(int c);
int ft_tolower(int c);


//دوال التعامل مع الذاكرة (Memory functions)
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);


char    *ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(const char *s1, const char *set);//error santks
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
//bonus
#endif