/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:50:03 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 13:51:39 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal:\tDefault constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal:\tDefault Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "WrongAnimal:\tCopy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this == &other) {return (*this);}
	this->_type = other._type;
	return (*this);
}

void WrongAnimal::makeSound() const {
	std::cout << "INCOHERENT ANIMAL NOISES" << std::endl;
}

std::string WrongAnimal::getType(void) const {
  return this->_type;
}

void WrongAnimal::setType(std::string type) {
  this->_type = type;
}
