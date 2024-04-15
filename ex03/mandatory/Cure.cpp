/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:28:17 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 12:45:09 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria()
{
	std::cout << "Cure Materia created" << std::endl;
	_type = "cure";
}

Cure::~Cure()
{
	std::cout << "Cure Materia destructor called" << std::endl;
}

Cure::Cure(const Cure &a)
{
	std::cout << "Cure Materia copy constructor called" << std::endl;
	*this = a;
}

Cure& Cure::operator=(const Cure &a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

AMateria*	Cure::clone() const
{
	AMateria* tmp = new Cure(*this);
	return (tmp);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}