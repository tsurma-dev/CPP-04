/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:47:40 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 17:50:19 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"


int main() {
{
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	delete j;//should not create a leak
	delete i;
}
{
	Cat* copper = new Cat();
	copper->exposeBrain().setIdea("EUREKA", 20);
	std::cout << copper->exposeBrain().getIdea(20) << std::endl;
	Cat* voib = new Cat( *copper );
	// *voib = *copper;
	delete (copper);
	std::cout << voib->exposeBrain().getIdea(20) << std::endl;
	delete (voib);
}

return 0;
}
