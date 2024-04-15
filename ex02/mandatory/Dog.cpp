/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:44:33 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:34:43 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "A Dog comes to us";
	std::cout << std::endl;
	_type = "Dog";
	try
	{
		_dogIdeas = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cout << "Memory allocation failed: " << e.what() << std::endl;
	}
}

Dog::~Dog()
{
	delete _dogIdeas;
	std::cout << "The Dog runs away";
	std::cout << std::endl;
}

Dog::Dog(const Dog& a) : Animal()
{
	std::cout << "Copy constructor for Dog";
	std::cout << " has been called" << std::endl;
	*this = a;
}

Dog& Dog::operator=(const Dog& a)
{
	if (this != &a)
	{
		_type = a._type;
		_dogIdeas = new Brain (*a._dogIdeas);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "The Dog **** GUAUSSSS ****";
	std::cout << std::endl;
}