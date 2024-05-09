/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jadithya <jadithya@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:37:37 by jadithya          #+#    #+#             */
/*   Updated: 2024/05/08 16:13:26 by jadithya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <exception>
#include <iostream>
#include <cstdio>

template <class T>
class Array {
	T *list;
	unsigned int n;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array &a);
		~Array();

		Array &operator = (const Array &a);
		T &operator [] (int n);

		unsigned int size() const;
};

# include"Array.tpp"

#endif