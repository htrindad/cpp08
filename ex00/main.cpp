/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:13:07 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/24 14:51:07 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>
#include <ctime>

int main()
{
	std::vector<int> v; // resizable array
	std::list<int> l; // chain of nodes
	std::deque<int> d; // queues

	std::srand(std::time(NULL)); // Making it truly random
	for (std::size_t i = 0; i < 20; i++) // Initing random values
	{
		v.push_back(std::rand() % 19 + 1);
		l.push_back(std::rand() % 19 + 1);
		d.push_back(std::rand() % 19 + 1);
	}
	std::cout << "Testing vector\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++) // Testing random values
			std::cout << *easyfind(v, std::rand() % 19 + 1) << '\n';
		std::cout << "Vector testing successful\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... The vector failed, because " << e.what() << " happened.\n";
	}
	std::cout << "Testing list\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++)
			std::cout << *easyfind(l, std::rand() % 19 + 1) << '\n';
		std::cout << "List testing successful\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... The list failed, because " << e.what() << " happened.\n";
	}
	std::cout << "Testing deque\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++)
			std::cout << *easyfind(d, std::rand() % 19 + 1) << '\n';
		std::cout << "Queue testing successful\n";
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... The queue failed, because " << e.what() << " happened.\n";
	}
	return 0;
}
