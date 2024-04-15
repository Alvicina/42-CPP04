/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:10:54 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/08 16:39:29 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	private:
	
	public:
		Cat();
		~Cat();
		Cat(const Cat& a);
		Cat& operator=(const Cat& a);
		virtual void	makeSound() const;
};
#endif