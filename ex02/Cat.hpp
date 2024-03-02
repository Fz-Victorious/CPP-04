/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:56:24 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:44:30 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

	private:
		Brain *_brain;

	public:
		Cat();
		Cat(Cat const &obj);
		Cat &operator=(Cat const &obj);
		~Cat();

		virtual void makeSound(void) const;
};

#endif
