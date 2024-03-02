/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:10:22 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:56:10 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default constructor called" << std::endl;
	this->type = "";
}

Animal::Animal(std::string const &type)
{
	std::cout << "Animal Parameter constructor called" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &ob)
{
	std::cout << "Animal copy constructor called" << std::endl;
	(*this) = ob;
}

Animal &Animal::operator=(Animal const &ob)
{
	if (this != &ob)
	{
		std::cout << "Animal Assign operator called" << std::endl;
		this->type = ob.type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destuctor called" << std::endl;
}

std::string const &Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "Animal's sound" << std::endl;
}
