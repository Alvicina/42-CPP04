/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:35:47 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 10:56:51 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria(std::string const &type);
		AMateria();
		virtual ~AMateria();
		AMateria(const AMateria &a);
		AMateria& operator=(const AMateria &a);
		std::string const& getType() const;
		virtual AMateria* clone() const =0;
		virtual void use(ICharacter &target); 
};

#endif