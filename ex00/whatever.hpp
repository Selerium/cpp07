/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Templates.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 21:27:53 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/09 21:36:55 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
# define TEMPLATES_HPP

template <typename T> void swap(T &x, T &y) {
	T t;
	t = x;
	x = y;
	y = t;
}

template <typename T> T min(T x, T y) {
	return (x < y ? x : y);
}

template <typename T> T max(T x, T y) {
	return (x > y ? x : y);
}

#endif