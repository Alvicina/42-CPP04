/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:48:21 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 10:08:34 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
	public:	
		Animal();
		virtual ~Animal();
		Animal(const Animal& a);
		Animal&	operator=(const Animal& a);
		virtual void	makeSound() const;
		std::string		getType() const;
};
#endif