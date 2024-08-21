/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:32:30 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/19 17:04:32 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "iostream"

class Cat : public Animal {
private:
public:
	Cat();
	~Cat();
	Cat(const Cat& other);
	Cat& Cat(const Cat& other);

};

Cat::Cat() : type("Cat")
{
}

Cat::~Cat()
{
}


#endif
