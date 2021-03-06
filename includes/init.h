/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 11:10:06 by nburat-d          #+#    #+#             */
/*   Updated: 2022/06/12 10:14:41 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INIT_H
# define INIT_H

# include "philo.h"

t_global	*create_global(char **av);
t_philo		**create_philo(t_global *global);
void		init_philo(t_philo *philo, int i, t_global *global);
void		set_param(t_global *global, char **av);
void		init_philo(t_philo *philo, int i, t_global *global);
void		init_forks(t_global *global);
void		set_fork_to_philo(t_philo *philo, t_global *global);

#endif