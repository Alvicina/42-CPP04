/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 12:11:46 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:07:52 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain created" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

Brain::Brain(const Brain& a)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = a;
}

Brain& Brain::operator=(const Brain& a)
{
	if (this != &a)
	{
		size_t	i = 0;
		while (i < 100)
		{
			_ideas[i] = a._ideas[i];
			i++;
		}
	}
	return (*this);
}
