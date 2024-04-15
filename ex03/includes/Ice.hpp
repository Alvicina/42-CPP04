/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:24:23 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 12:27:52 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:

	public:
		Ice();
		~Ice();
		Ice(const Ice &a);
		Ice& operator=(const Ice &a);
		virtual AMateria* 	clone() const;
		virtual void		use(ICharacter &target);	
};

#endif