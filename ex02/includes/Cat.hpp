/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:10:54 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:47:56 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain*	_catIdeas;
	public:
		Cat();
		~Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		virtual void	makeSound() const;
};
#endif