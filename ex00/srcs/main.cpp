/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsurma <tsurma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 16:47:40 by tsurma            #+#    #+#             */
/*   Updated: 2024/08/26 14:11:39 by tsurma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main() {
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!

		std::cout << j->getType() << " " << std::endl;
		j->makeSound(); //will output the Dog sound!
		meta->makeSound();
		delete j;
		delete i;
		delete meta;
	}
	{
		std::cout << "--------------" << std::endl;
		const WrongAnimal* i = new WrongCat();
		const WrongCat j = WrongCat();

		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); //will output the cat sound!
		j.makeSound();
		delete i;
	}
	return 0;
}
