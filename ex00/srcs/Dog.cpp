/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:11:14 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 13:28:26 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() {
	std::cout << "Dog:\tDefault constructor called" << std::endl;
	this->setType("Dog");
}

Dog::~Dog() {
	std::cout << "Dog:\tDefault Destructor called" << std::endl;
}

Dog::Dog(const Dog& other) {
	std::cout << "Dog:\tCopy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	if (this == &other) {return (*this);}
	this->_type = other.getType();
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "WOOF" << std::endl;
}
