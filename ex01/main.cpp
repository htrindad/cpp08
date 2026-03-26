/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 19:40:08 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/26 19:40:22 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Modified main by htrindad

#include "Span.h"
#include <iostream>
#include <ctime>

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	if (!BONUS)
		return 0;
	try
	{
		sp.addNumber(11);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout
			<< "testing shortestSpan(): " << sp.shortestSpan() << '\n'
			<< "testing longestSpan(): " << sp.longestSpan() << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	Span sp2 = Span(50);
	std::vector<int> v;
	int r;
	std::srand(std::time(NULL));
	for (int i = 0; i < 100; i++)
	{
		r = std::rand() % 500;
		v.push_back(r);
	}
	try
	{
		sp2.addNumber(v.begin(), v.end());
		std::cout
			<< "Shortest: " << sp2.shortestSpan() << '\n'
			<< "Longest: " << sp2.longestSpan() << '\n';
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
