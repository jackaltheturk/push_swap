/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_bonus.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etorun <etorun@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:14:57 by etorun            #+#    #+#             */
/*   Updated: 2025/02/22 20:49:32 by etorun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_BONUS_H
# define C_BONUS_H

int		ft_atoix(const char *str, char **strhead);
void	ft_errortoi(char **strhead);
void	ft_str_check(const char *str, char **strhead);
void	ft_free_split(char **split_k);
int		ft_count(int argc, char **argv);
int		*ft_fill(int argc, char **argv, int *as, int count);
int		*ft_checker_fixer(int argc, char **argv);
int		ft_checksorted(int *as);
void	ft_double_checker(int *as);
void	ft_error(void);
char	*get_next_line(int fd);
void	ft_really(int *as, int *bs);
void	ft_sure(int *as);
void	ft_dhandler(int *as, int *bs, const char *cur, int max);
void	ft_thandler(int *as, int *bs, const char *cur);
void	ft_rrx(int *xs);
void	ft_rx(int *xs);
void	ft_sx(int *xs, int *fs);
void	ft_px(int *ss, int *ds, int max);
#endif