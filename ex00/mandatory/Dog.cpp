/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:44:33 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/08 16:50:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	_type = "Dog";
	std::cout << "A Dog comes to us";
	std::cout << std::endl;
}

Dog::~Dog()
{
	std::cout << "The Dog runs away";
	std::cout << std::endl;
}

Dog::Dog(const Dog& a) : Animal()
{
	*this = a;
	std::cout << "Copy constructor for Dog";
	std::cout << " has been called" << std::endl;
}

Dog& Dog::operator=(const Dog& a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The Dog **** GUAUSSSS ****";
	std::cout << std::endl;
}