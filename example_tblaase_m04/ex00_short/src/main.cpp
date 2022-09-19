/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaase <tblaase@student.42.fr>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/30 09:47:42 by tblaase       #+#    #+#                 */
/*   Updated: 2022/09/17 10:22:47 by jaka          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
// #include "WrongAnimal.hpp"
// #include "WrongCat.hpp"

int main()
{
	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	const Animal	*meta = new Animal();
	const Animal	*doggo = new Dog();
	const Animal	*catto = new Cat();
	// std::cout << std::endl;
	// std::cout << "\033[34mTesting\033[0m" << std::endl;

	// std::cout << "Animal _type: " << meta->getType() << std::endl;
	// meta->makeSound();
	// std::cout << std::endl;

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete meta;
	// std::cout << std::endl;

	// std::cout << "-------------------------------------------------------" << std::endl;

	// std::cout << std::endl;
	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// std::cout << std::endl;

	// std::cout << "\033[34mTesting\033[0m" << std::endl;
	// std::cout << "Cat _type: " << catto->getType() << std::endl;
	// catto->makeSound();
	// std::cout << std::endl;

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete catto;
	// std::cout << std::endl;

	// std::cout << "-------------------------------------------------------" << std::endl;

	// std::cout << std::endl;
	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// std::cout << std::endl;
	// std::cout << "\033[34mTesting\033[0m" << std::endl;
	// std::cout << "Dog _type: " << doggo->getType() <<std::endl;
	// doggo->makeSound();
	// std::cout << std::endl;
	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete doggo;
	// std::cout << std::endl;

	// std::cout << "-------------------------------------------------------" << std::endl;

	// std::cout << std::endl;
	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// const WrongAnimal	*wrong_meta = new WrongAnimal();
	// std::cout << std::endl;

	// std::cout << "\033[34mTesting\033[0m" << std::endl;
	// std::cout << "Animal _type: " << wrong_meta->getType() << std::endl;
	// wrong_meta->makeSound();
	// std::cout << std::endl;

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete wrong_meta;
	// std::cout << std::endl;

	// std::cout << "-------------------------------------------------------" << std::endl;

	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// const WrongAnimal	*wrong_catto = new WrongCat();
	// std::cout << std::endl;

	// std::cout << "\033[34mTesting\033[0m" << std::endl;
	// std::cout << "WrongCat _type: " << wrong_catto->getType() <<std::endl;
	// wrong_catto->makeSound();
	// std::cout << std::endl;

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete wrong_catto;
	// std::cout << std::endl;

	// std::cout << "-------------------------------------------------------" << std::endl;

	// std::cout << "\033[34mConstructing\033[0m" << std::endl;
	// const WrongCat	*wrong_catta = new WrongCat();
	// std::cout << std::endl;

	// std::cout << "\033[34mTesting\033[0m" << std::endl;
	// std::cout << "WrongCat _type: " << wrong_catta->getType() <<std::endl;
	// wrong_catta->makeSound();
	// std::cout << std::endl;

	// std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	// delete wrong_catta;
	// std::cout << std::endl;

	return (0);
}
