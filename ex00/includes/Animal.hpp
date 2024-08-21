/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:30:56 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/19 17:04:46 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	~Animal();
	Animal(const Animal& other);
	Animal& operator=(const Animal& other);

	std::string getType(void);
	void setType(std::string type);
};


#endif
