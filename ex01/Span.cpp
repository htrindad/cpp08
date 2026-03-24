/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:30:56 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/24 18:12:25 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.h"

//CDO
Span::Span() : N(0) {}
Span::~Span() {}
Span::Span(const std::size_t &len) : N(len) {}
Span::Span(const Span &ref) { *this = ref; }
Span &Span::operator=(const Span &ref)
{
	if (this != &ref)
	{
		N = ref.N;
		V = ref.V;
	}
	return *this;
}

// Methods

void Span::addNumber(const int &n)
{
	if (V.size() >= N)
		throw std::out_of_range("Span vector already full");
	V.push_back(n);
}

void Span::addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end)
{
	if (V.size() + std::distance(begin, end))
		throw std::out_of_range("Span vector has less than 2 values");
	V.insert(V.begin(), begin, end);
}

int Span::longestSpan() const
{
	std::vector<int>::iterator max;
	std::vector<int>::iterator min;

	if (V.empty() || V.size() == 1)
		throw std::out_of_range("size too low.");
	max = std::max_element(V.begin(), V.end());
	min = std::min_element(V.begin(), V.end());
	return *max - *min;
}

int Span::shortestSpan() const
{
	std::vector<int> tmp;
	int min;
	int cur;

	if (V.empty() || V.size() == 1)
		throw std::out_of_range("Span vector has less than 2 values");
	std::sort(tmp.begin(), tmp.end());
	min = MIN_INT;
	for (std::size_t i = 0; i < V.size() - 1; i++)
	{
		cur = tmp[i + 1] - tmp[i];
		if (cur < min)
			min = tmp;
	}
	return min;
}
