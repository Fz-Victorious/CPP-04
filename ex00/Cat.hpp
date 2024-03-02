/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 14:14:12 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 13:38:46 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &obj);
		Cat &operator=(Cat const &obj);
		~Cat();

		virtual void makeSound(void) const;
};

#endif
