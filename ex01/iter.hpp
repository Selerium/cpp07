/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:32 by jadithya          #+#    #+#             */
/*   Updated: 2024/04/18 14:40:48 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template <typename A> void iter(A *a, int b, void (*c)(A const &a)) {
	for (int i = 0; i < b; i++)
		c((a[i]));
}

template <typename T> void print(T const &a) {
	std::cout << a << std::endl;
}

#endif