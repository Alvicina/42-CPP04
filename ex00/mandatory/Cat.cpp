/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:16:45 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 12:43:57 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	_type = "Cat";
	std::cout << "A Cat pops up";
	std::cout << std::endl;
}

Cat::~Cat()
{
	std::cout << "The Cat has escaped";
	std::cout << std::endl;
}

Cat::Cat(const Cat& a) : Animal()
{
	*this = a;
	std::cout << "Copy constructor for Cat";
	std::cout << " has been called" << std::endl;
}

Cat& Cat::operator=(const Cat& a)
{
	if (this != &a)
	{
		_type = a._type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "The Cat **** MIAUSSSS ****";
	std::cout << std::endl;
}