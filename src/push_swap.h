/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 13:40:48 by etorun            #+#    #+#             */
/*   Updated: 2025/02/25 18:21:03 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

void	ft_str_check(const char *str, char **strhead);
void	ft_errortoi(char **strhead);
int		ft_atoix(const char *str, char **strhead);
void	ft_error(void);
int		*ft_checker_fixer(int argc, char **argv);
void	ft_free_split(char **split_k);
int		ft_count(int argc, char **argv, int i, int y);
int		*ft_fill(int argc, char **argv, int *as, int count);
int		ft_checksorted(int *as);
void	ft_double_checker(int *as);
void	ft_ss(int *as, int *bs, int min_i);
void	ft_back_tofuture(int *as, int*bs, int min_i);
int		ft_finalcost(int a, int b);
int		ft_mci(int *as, int *bs, int min_i);
void	ft_sorter(int *as);
void	ft_pb(int *as, int *bs, int min_i);
void	ft_rx(int *xs, int times, int w_one);
void	ft_rrx(int *xs, int times, int w_one);
void	ft_sa(int *xs);
int		ft_calb(int *xs, int number);
int		ft_find_number(int *xs, int number);
void	ft_turn(int *xs, int mci, int w_one);
void	ft_tp(int *as, int *bs, int m_times, int min_i);
void	ft_triblesort(int *xs, int w_one);
int		ft_local_cost(int *as, int index);
void	ft_minmax(int *as, int min_i);
void	ft_pa(int *as, int *bs, int min_i);
void	ft_perfecter(int *xs, int m_times, int w_one);
void	ft_cm(int *as, int *bs, int min_i);
void	ft_rr(int *as, int*bs, int a, int b);
void	ft_rrr(int *as, int*bs, int a, int b);
void	ft_rr_maker(int *xs, int times);
void	ft_rrr_maker(int *xs, int times);
void	ft_tpa(int *as, int *bs, int m_times, int min_i);
int		ft_cala(int *as, int number);
#endif