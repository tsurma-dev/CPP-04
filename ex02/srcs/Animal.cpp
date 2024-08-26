/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:36 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 13:31:56 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() {
	std::cout << "Animal:\tDefault constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal:\tDefault Destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal:\tCopy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	if (this == &other) {return (*this);}
	this->_type = other._type;
	return (*this);
}

void Animal::makeSound() const {}

std::string Animal::getType(void) const {
  return this->_type;
}

void Animal::setType(std::string type) {
  this->_type = type;
}
