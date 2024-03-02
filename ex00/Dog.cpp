/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:16:08 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:22:38 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &ob)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	*this = ob;
}

Dog &Dog::operator=(const Dog &ob)
{
	if (this == &ob)
		return (*this);
	this->type = ob.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called" << std::endl;
}

void Dog::makeSound(void) const
{
	std::cout << "How How" << std::endl;
}
