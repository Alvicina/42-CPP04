/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:53:00 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 11:10:02 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "An Animal has appeared";
	std::cout << std::endl;
}

Animal::~Animal()
{
	std::cout << "The Animal has vanished";
	std::cout << std::endl;
}

Animal::Animal(const Animal& a)
{
	*this = a;
	std::cout << "Copy constructor for Animal";
	std::cout << " <-- has been called" << std::endl;
}

Animal& Animal::operator=(const Animal& a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

/*
void	Animal::makeSound() const
{
	std::cout << "The Animal **** ROOAAARSSS ****";
	std::cout << std::endl;
}*/

std::string	Animal::getType() const
{
	return (_type);
}

