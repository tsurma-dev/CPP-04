/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:32:58 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 13:52:49 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_

#include <iostream>

class WrongAnimal {
protected:
	std::string _type;
public:
// Orthodox Canonical Form
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal& other);
	WrongAnimal& operator=(const WrongAnimal& other);

// Member functions
	// ~Make Class abstract~
	void makeSound() const;
	std::string getType(void) const;
	void setType(std::string type);
};

#endif
