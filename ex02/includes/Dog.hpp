/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:13:38 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:48:00 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* _dogIdeas;
	public:
		Dog();
		~Dog();
		Dog(const Dog& a);
		Dog& operator=(const Dog& a);
		virtual void	makeSound() const;
};
#endif