/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_utils.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntardy <ntardy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:51:39 by ntardy            #+#    #+#             */
/*   Updated: 2024/01/21 19:13:05 by ntardy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_UTILS_H
# define LIB_UTILS_H

# include "cub.h"

/*********************************/
/*            ft_str             */
/*********************************/
int		ft_strlen(char *str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_countword(char const *s, char c);

/*********************************/
/*           ft_write            */
/*********************************/
void	ft_putcharfd(char c, int fd);
void	ft_putstrfd(char *str, int fd);

/*********************************/
/*        ft_str_malloc          */
/*********************************/
char	*get_first_word(char *str);
char	*ft_strdup(char *src);
char	*ft_substr(char *s, int start, int len);
char	**ft_split(char *s, char c);

int		ft_atoi(char *str);
void	del_pars_map(void);

#endif
