/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:53:07 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 12:16:23 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria: " << type << " constructor called" << std::endl;
	_type = type;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria &a)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = a;
}

AMateria& AMateria::operator=(const AMateria &a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "AMateria " << _type << " used on " << target.getName() << std::endl;
}
