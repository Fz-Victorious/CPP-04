/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:56:13 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:40:13 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &ob)
{
	std::cout << "Cat copy Constructor called" << std::endl;
	*this = ob;
}

Cat & Cat::operator=(const Cat &ob)
{
	if (this == &ob)
		return (*this);
	this->type = ob.type;
	this->_brain = new Brain();
	this->_brain = ob._brain;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "cat destuctor called" << std::endl;
	delete this->_brain;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaw Miaw" << std::endl;
}
