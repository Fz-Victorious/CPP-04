/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:16:33 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 17:04:40 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string const &type)
{
	std::cout << "WrongAnimal Parametre Constructor called" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal(WrongAnimal const &ob)
{
	std::cout << "WrongAnimal copy Constructor called" << std::endl;
	(*this) = ob;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &ob)
{
	std::cout << "WrongAnimal Assign operator called" << std::endl;
	if (this != &ob)
		this->type = ob.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destuctor called" << std::endl;
}

std::string const &WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal make sound" << std::endl;
}
