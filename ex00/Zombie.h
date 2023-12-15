/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psalame <psalame@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:50:38 by psalame           #+#    #+#             */
/*   Updated: 2023/12/14 22:51:52 by psalame          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include "Zombie.hpp"
# include <iostream>

Zombie	*newZombie(std::string name);
Zombie	*randomChump(std::string name);

#endif
