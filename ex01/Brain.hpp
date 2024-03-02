/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fabou-za <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 15:49:04 by fabou-za          #+#    #+#             */
/*   Updated: 2022/12/28 19:36:04 by fabou-za         ###   ########.fr       */
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
		Brain(Brain const &ob);
		Brain &operator=(Brain const &ob);
		~Brain();

};

#endif
