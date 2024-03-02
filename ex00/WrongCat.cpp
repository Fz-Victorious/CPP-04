/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:23:21 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 17:06:53 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &ob):WrongAnimal(ob.type)
{
	std::cout << "WrongCat copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &ob)
{
	std::cout << "WrongCat Assign operator called" << std::endl;
	if (this != &ob)
		this->type = ob.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destuctor called" << std::endl;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Wrong cat sound" << std::endl;
}
