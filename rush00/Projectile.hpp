/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpace <bpace@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/18 10:58:38 by mbrave            #+#    #+#             */
/*   Updated: 2020/01/19 14:50:13 by bpace            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_HPP
#define PROJECTILE_HPP

#include "GameObject.hpp"



class Projectile : public GameObject
{
	private:
	
	public: 
		Projectile(void);
		Projectile(char symbol);
		Projectile(const Projectile &Projectile);
		Projectile & operator = (const Projectile &Projectile);
		~Projectile(void);
};

#endif
