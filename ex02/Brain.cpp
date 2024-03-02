/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:55:50 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:42:11 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(Brain const &ob)
{
	std::cout << "Brain copy constructor called" << std::endl;
	(*this) = ob;
}

Brain &Brain::operator=(Brain const &ob)
{
	if (this != &ob)
	{
		std::cout << "Brain assign operator called" << std::endl;
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = ob.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}
