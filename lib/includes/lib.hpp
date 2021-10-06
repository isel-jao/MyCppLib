/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 13:50:02 by yq                #+#    #+#             */
/*   Updated: 2021/06/21 12:18:32 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_HPP
#define LIB_HPP

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include <stdio.h>
#include <cmath>

#include "vec.hpp"
#include "bst.hpp"

template <typename T>
void put(T const &x) { std::cout << x; }

template <typename T>
void log(T const &x) { std::cout << x << std::endl; }

template <typename T>
T max(T const &a, T const &b) { return (a >= b ? a : b); }

template <typename T>
T min(T const &a, T const &b) { return (a <= b ? a : b); }

#endif