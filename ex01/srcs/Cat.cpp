/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:02:40 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 17:47:50 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : _Brain(new Brain) {
	std::cout << "Cat:\tDefault constructor called" << std::endl;
	this->setType("Cat");
}

Cat::~Cat() {
	std::cout << "Cat:\tDefault Destructor called" << std::endl;
	delete (this->_Brain);
}

Cat::Cat(const Cat& other) : _Brain(new Brain) {
	std::cout << "Cat:\tCopy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	if (this == &other) {return (*this);}
	this->_type = other.getType();
	*_Brain = *(other._Brain);
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "MEOW" << std::endl;
}

Brain& Cat::exposeBrain(void) {
	return *(this->_Brain);
}
