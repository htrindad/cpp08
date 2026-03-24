/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htrindad <htrindad@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 13:49:06 by htrindad          #+#    #+#             */
/*   Updated: 2026/03/24 14:11:33 by htrindad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>
#include <exception>

template <typename T>
T easyfind(T &t, int &i)
{
	const typename T::iterator r = std::find(t.begin(), t.end(), i);

	if (r == t.end())
		throw std::runtime_error("Value not found");
	return r;
}
