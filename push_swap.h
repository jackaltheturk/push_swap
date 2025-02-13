/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by etorun            #+#    #+#             */
/*   Updated: 2025/02/13 08:58:06 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP
# define PUSH_SWAP

# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

typedef struct s_stack{
	int value;
	int index;
	struct s_stack *next;
}t_stack;

t_stack *ft_stack_new(int index, int value);
void ft_stack_add_back(t_stack **head,t_stack *new);
t_stack	*ft_stack_last(t_stack *head);
void	ft_error(void);
int	ft_atoix(const char *str);
void ft_free_split(char **split_k);
t_stack *ft_checker_fixer(int argc,char **argv);
void ft_double_checker(t_stack *check_me);
int	ft_checksorted(t_stack *stack_a);
t_stack *ft_indexed_node(int index,t_stack *head);
void ft_sorter(t_stack **head);
void ft_enum(t_stack *head);
int ft_stack_len(t_stack *head);
void ft_swap(t_stack **head,int w_stk);
void ft_sort_trible(t_stack **head, int w_stk);
void ft_rev(t_stack **head, int w_stk);
void ft_rrev(t_stack **head, int max_index, int w_stk);
void ft_push(t_stack **stack_src,t_stack **stack_dst,int to_where);
void ft_real_sorter(t_stack **head, int max_index);

#endif