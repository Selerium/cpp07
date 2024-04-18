/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:27:53 by jadithya          #+#    #+#             */
/*   Updated: 2024/04/18 13:48:31 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

# include <iostream>

template <typename T> void swap(T &x, T &y) {
	T t;
	t = x;
	x = y;
	y = t;
}

template <typename T> T min(const T &x, const T &y) {
	return (x < y ? x : y);
}

template <typename T> T max(const T &x, const T &y) {
	return (x > y ? x : y);
}

#endif