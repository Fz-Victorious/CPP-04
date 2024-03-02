/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:56:43 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:43:40 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog"), _brain(new Brain)
{
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const &ob)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	*this = ob;
}

Dog & Dog::operator=(const Dog &ob)
{
	if (this == &ob )
		return (*this);
	this->type = ob.type;
	this->_brain = new Brain();
	this->_brain = ob._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destuctor called" << std::endl;
	delete this->_brain;
}

void Dog::makeSound(void) const
{
	std::cout << "How How" << std::endl;
}
