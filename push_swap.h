/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by etorun            #+#    #+#             */
/*   Updated: 2025/02/14 17:24:09 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"
int	ft_atoix(const char *str);
void	ft_error(void);
int *ft_checker_fixer(int argc,char **argv);
void ft_free_split(char **split_k);
int ft_count(int argc,char **argv);
int *ft_fill(int argc,char **argv,int *as,int count);
int	ft_checksorted(int *as);
void ft_double_checker(int *as);
#endif