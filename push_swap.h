/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by etorun            #+#    #+#             */
/*   Updated: 2025/02/09 19:15:17 by etorun           ###   ########.fr       */
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
	int sorted_index;
	struct s_stack *next;
	struct s_stack *prev;
}t_stack;

t_stack *ft_stack_new(int index, int value);
void ft_stack_add_back(t_stack **head,t_stack *new);
t_stack	*ft_stack_last(t_stack *head);
void	ft_error(void);
int	ft_atoix(const char *str);
void ft_free_split(char **split_k);
t_stack *ft_checker_fixer(int argc,char **argv);
void ft_duble_checker(t_stack *check_me);
int	ft_checksorted(t_stack *stack_a);
void ft_enumerator(t_stack **head);
void ft_sorter(t_stack **head);
t_stack *ft_exchange(t_stack *first,t_stack **head);
void ft_back_to(t_stack **head);
#endif