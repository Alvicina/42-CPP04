/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:18:25 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 12:24:07 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
		
	public:
		Cure();
		~Cure();
		Cure(const Cure &a);
		Cure& operator=(const Cure &a);
		virtual	AMateria*	clone() const;
		virtual void		use(ICharacter &target);
};
#endif