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
#include <limits.h>

size_t		ft_strlen(const char *str);                                  //santoos
void		*ft_memmove(void *dest, const void *src, size_t n);				//santoos
char		*ft_strchr(const char *s, int c);                               //santoos
char		*ft_strrchr(const char *s, int c);								//santoos
int			ft_strncmp(const char *s1, const char *s2, size_t n);			//santoos
char		*ft_strnstr(const char *big, const char *little, size_t len);


void		*ft_memset(void *s, int c, size_t n);                        //santoos
void		*ft_memcpy(void *dest, const void *src, size_t n);          //santoos     
void		ft_bzero(void *s, size_t n);                                //santoos       
void		*ft_memchr(const void *s, int c, size_t n);					//santoos
size_t		ft_strlcpy(char *dst, const char *src, size_t size);       
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_memcmp(const void *s1, const void *s2, size_t n);        //santoos
void		ft_bzero(void *s, size_t n);

int			ft_atoi(const char *nptr);														


int			ft_isalpha(int c);  										//santoos
int			ft_isdigit(int c);  										//santoos	`
int			ft_isalnum(int c);  									  	//santoos
int			ft_isascii(int c);										  	//santoos
int			ft_isprint(int c);  										//santoos		
int			ft_tolower(int c);											//santoos	
int			ft_toupper(int c);											//santoos



void		*ft_calloc(size_t nmemb, size_t size);                      //santoos
char		*ft_strdup(const char *s);							    	//santoos


char		*ft_substr(char const *s, unsigned int start, size_t len);  //santoos
char		*ft_strjoin(char const *s1, char const *s2);				//santoos
char		*ft_strtrim(const char *s1, const char *set);				
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char)); //santoos
void		ft_striteri(char *s, void (*f)(unsigned int,char*));      
void		ft_putchar_fd(char c, int fd);                             
void		ft_putstr_fd(char *s, int fd);                             
void		ft_putendl_fd(char *s, int fd);


typedef struct s_list
{
void *content;
struct s_list *next;
} t_list;
#endif