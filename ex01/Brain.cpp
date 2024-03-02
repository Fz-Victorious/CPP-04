/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:48:48 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:52:00 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(Brain const &ob)
{
	std::cout << "Brain copy Constructor called" << std::endl;
	(*this) = ob;
}

Brain &Brain::operator=(Brain const &ob)
{
	if (this != &ob)
	{
		std::cout << "Brain Assign operator called" << std::endl;
		for (int j = 0; j < 100; j++)
		{
			this->ideas[j] = ob.ideas[j];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
