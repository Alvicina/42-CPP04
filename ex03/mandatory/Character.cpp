/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvicina <alvicina@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:53:47 by alvicina          #+#    #+#             */
/*   Updated: 2024/04/10 17:57:36 by alvicina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character()
{
	std::cout << "Character default constructor called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character " << _name << "destructor called" << std::endl;
	size_t	i = 0;
	while (_inventory[i])
	{
		delete _inventory[i];
		i++;
	}
}

Character::Character(std::string const &name)
{
	_name = name;
	std::cout << "A Character with name: " << _name << "has been created";
	std::cout << std::endl;
	size_t i = 0;
	while (i < 4)
	{
		_inventory[i] = NULL;
		i++;
	}
}

Character::Character(const Character &a)
{
	*this = a;
	std::cout << "A Character with name: " << _name << "has been created";
	std::cout << std::endl;
}

Character& Character::operator=(const Character &a)
{
	if (this != &a)
	{
		_name = a._name;
		size_t	i = 0;
		while (i < 4)
		{
			_inventory[i] = a._inventory[i]->clone();
			i++;
		}
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	size_t	i = 0;
	while (i < 4)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			std::cout << "Character " << _name << "equipped " << m->getType();
			std::cout << std::endl;
			return;
		}
		i++;
	}
	std::cout << "Character " << _name << "could not equip " << m->getType();
	std::cout << " no space left on inventory" << std::endl;
}

void	Character::unequip(int idx)
{
	size_t	i = 0;
	if (_inventory[idx])
	{
		std::cout << "Character " << _name << " unequipped" << _inventory[idx]->getType();
		std::cout << std::endl;
		delete _inventory[idx];
	}
	else
	{
		std::cout << "Character " << _name << " has nothing to unequipped";
		std::cout << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (_inventory[idx])
	{
		_inventory[idx]->use(target);
		std::cout << "Character " << _name << " used " << _inventory[idx]->getType();
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Character " << _name << " cannot use";
		std::cout << " inventory slot empty" << std::endl;
	}
}