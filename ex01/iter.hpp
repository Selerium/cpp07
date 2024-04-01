/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 23:16:32 by jadithya          #+#    #+#             */
/*   Updated: 2024/03/11 12:05:31 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include<iostream>

template <typename A, typename B, typename C> void iter(A a, B b, C c) {
	for (int i = 0; i < static_cast<int>(b); i++)
		c(a[i]);
}

template <typename T> void multiplyByTwo(T a) {
	std::cout << a * 2 << std::endl;
}

template void multiplyByTwo<int>(int a);
template void multiplyByTwo<char>(char a);

#endif