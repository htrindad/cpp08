/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:10:36 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/24 18:25:31 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <limits.h>
#include <stdexcept>

#ifndef BONUS
# define BONUS 0
#endif

class Span
{
	private:
		std::size_t N;
		std::vector<int> V;
	public:
		Span();
		~Span();
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		Span(const std::size_t &len);
		void addNumber(const int &n);
		int shortestSpan() const;
		int longestSpan() const;
		void addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
};
