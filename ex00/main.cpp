/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:13:07 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/24 14:31:31 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.h"
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <cstdlib>

int main()
{
	std::vector<int> v; // resizable array
	std::list<int l; // chain of nodes
	std::deque<int> d; // queues

	for (std::size_t i = 0; i < 20; i++)
	{
		v.push_back(std::rand() % 19 + 1);
		l.push_back(std::rand() % 19 + 1);
		d.push_back(std::rand() % 19 + 1);
	}
	std::cout << "Testing vector\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++)
			std::cout << *easyfind(v, std::rand() % 19 + 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... " << e.what() << " happened.\n";
	}
	std::cout << "Testing list\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++)
			std::cout << *easyfind(l, std::rand() % 19 + 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... " << e.what() << " happened.\n";
	}
	std::cout << "Testing deque\n\n";
	try
	{
		for (std::size_t i = 0; i < 20; i++)
			std::cout << *easyfind(d, std::rand() % 19 + 1) << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << "Sorry... " << e.what() << " happened.\n";
	}
	return 0;
}
