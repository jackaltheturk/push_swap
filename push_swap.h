/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by etorun            #+#    #+#             */
/*   Updated: 2025/02/14 23:17:41 by etorun           ###   ########.fr       */
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
void ft_sorter(int *as);
void ft_pb(int *as,int *bs);
void ft_sorter(int *as);
void ft_rb(int *bs,int times);
void ft_rrb(int *bs,int times);
int ft_calb(int *bs,int number);
int ft_find_max(int *bs,int max);
void ft_turn_put(int *as,int *bs,int m_times);
#endif