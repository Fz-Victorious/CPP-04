/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:48:08 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:51:00 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string const &type);
		Animal(Animal const &obj);
		Animal &operator=(Animal const &obj);
		virtual ~Animal();

		std::string const &getType() const;
		virtual void makeSound(void) const;
};

#endif
