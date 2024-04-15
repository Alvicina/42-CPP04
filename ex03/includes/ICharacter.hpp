/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:29:28 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 16:35:25 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const& getName() const =0;
		virtual void	equip(AMateria* m) =0;
		virtual void	unequip(int idx) =0;
		virtual void	use(int idx, ICharacter& target) =0;	
};

#endif