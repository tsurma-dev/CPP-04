/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:24:36 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 16:37:26 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain:\tDefault constructor called" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain:\tDefault Destructor called" << std::endl;

}

Brain::Brain(const Brain& other) {
	std::cout << "Brain:\tCopy constructor called" << std::endl;
	*this = other;
}


Brain& Brain::operator=(const Brain& other) {
	if (this == &other) {return (*this);}
	for (int i = 0; i < 100; ++i) {
		if (other.ideas[i].empty() == false)
			this->ideas[i] = other.ideas[i];
	}
	return (*this);
}

void Brain::setIdea( const std::string& thought, int pos) {
	this->ideas[pos] = thought;
}

std::string Brain::getIdea(int pos) const {
	return (this->ideas[pos]);
}
