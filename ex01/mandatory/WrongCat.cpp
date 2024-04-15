/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:55:43 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 10:01:39 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	_type = "WrongCat";
	std::cout << "A WrongCat pops up";
	std::cout << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "The WrongCat has escaped";
	std::cout << std::endl;
}

WrongCat::WrongCat(const WrongCat& a) : WrongAnimal()
{
	*this = a;
	std::cout << "Copy constructor for WrongCat";
	std::cout << " has been called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "The WrongCat **** MIAUSSSS ****";
	std::cout << std::endl;
}