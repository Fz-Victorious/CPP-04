/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:12:07 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:22:08 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat &ob)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = ob;
}

Cat &Cat::operator=(const Cat &ob)
{
	if (this != &ob)
	{
		std::cout << "Cat Assign operator called" << std::endl;
		this->type = ob.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destuctor called" << std::endl;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaw Miaw" << std::endl;
}
