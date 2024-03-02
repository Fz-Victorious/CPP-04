/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:53:12 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 17:58:56 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

	int n = 4;
	Animal *array[n];

	for (int i = 0; i < n; i++)
	{
		if (i < n / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << array[i]->getType() << std::endl;
	}

	for (int i = 0; i < n; i++)
	{
		delete array[i];
	}
}
