/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:33:10 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 16:07:36 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP_
#define WRONGCAT_HPP_

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
private:
public:
// Orthodox Canonical Form
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);

	void makeSound() const;
};

#endif
