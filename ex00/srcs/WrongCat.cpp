/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:53:26 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 14:00:13 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat:\tDefault constructor called" << std::endl;
	this->setType("WrongCat");
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat:\tDefault Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "WrongCat:\tCopy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this == &other) {return (*this);}
	this->_type = other.getType();
	return (*this);
}

void WrongCat::makeSound() const {
	std::cout << "MEOW" << std::endl;
}
