/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:56:02 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/29 16:43:27 by fabou-za         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain();
		Brain(Brain const &obj);
		Brain &operator=(Brain const &obj);
		~Brain();
};

#endif
