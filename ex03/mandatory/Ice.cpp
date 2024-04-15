/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 12:45:31 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 12:54:55 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria()
{
	std::cout << "Ice Materia created" << std::endl;
	_type = "ice";
}

Ice::~Ice()
{
	std::cout << "Ice Materia destructor called" << std::endl;
}

Ice::Ice(const Ice &a)
{
	std::cout << "Ice Materia copy constructor called" << std::endl;
	*this = a;
}

Ice& Ice::operator=(const Ice &a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria* tmp = new Ice(*this);
	return (tmp);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}


