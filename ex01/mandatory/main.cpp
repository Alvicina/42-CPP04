/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:03:41 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/09 17:49:53 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	std::cout << "--------> NO ARRAY <--------------" << std::endl;
	const Animal*	Jose = new Dog();
	const Animal*	Mauro = new Cat();
	
	delete	Jose;
	delete	Mauro;

	std::cout << "--------> BASIC <--------------" << std::endl;
	Dog basic;
	{
		Dog tmp = basic;
	}

	std::cout << "--------> ARRAY <--------------" << std::endl;
	const Animal*	zoo[6] = {new Dog(), new Dog(), new Dog(), new Cat(), new Cat(), new Cat()};
	
	size_t	i = 0;
	while (i < 6)
	{
		delete zoo[i];
		i++;
	}
	
	//system("leaks Brain")
	return (0);
}