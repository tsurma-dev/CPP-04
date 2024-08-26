/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:30:56 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 13:30:56 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal {
protected:
	std::string _type;
public:
// Orthodox Canonical Form
	Animal();
	virtual ~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

// Member functions
	// ~Make Class abstract~
	virtual void makeSound() const;
	std::string getType(void) const;
	void setType(std::string type);
};


#endif
