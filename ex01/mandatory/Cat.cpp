/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:16:45 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:32:38 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "A Cat pops up";
	std::cout << std::endl;
	_type = "Cat";
	try
	{
		_catIdeas = new Brain();
	}
	catch(const std::bad_alloc& e)
	{
		std::cout << "Memory allocation has failed: " << e.what() << std::endl;
	}
}

Cat::~Cat()
{
	delete _catIdeas;
	std::cout << "The Cat has escaped";
	std::cout << std::endl;
}

Cat::Cat(const Cat& a) : Animal()
{
	std::cout << "Copy constructor for Cat";
	std::cout << " has been called" << std::endl;
	*this = a;
}

Cat& Cat::operator=(const Cat& a)
{
	if (this != &a)
	{
		_type = a._type;
		_catIdeas = new Brain (*a._catIdeas);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The Cat **** MIAUSSSS ****";
	std::cout << std::endl;
}