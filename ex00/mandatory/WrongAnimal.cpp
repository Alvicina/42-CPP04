/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:50:32 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 09:55:29 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << "A WrongAnimal has appeared";
	std::cout << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "The WrongAnimal has vanished";
	std::cout << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& a)
{
	*this = a;
	std::cout << "Copy constructor for WrongAnimal";
	std::cout << " <-- has been called" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "The WrongAnimal **** POOOOOS ****";
	std::cout << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (_type);
}