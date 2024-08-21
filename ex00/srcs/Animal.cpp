/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:36:36 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/19 17:05:05 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Animal.hpp"

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
	this->type = other.type;
}

std::string Animal::getType(void) {
	return this->type;
}

void Animal::setType(std::string type) {
	this->type = type;
}
