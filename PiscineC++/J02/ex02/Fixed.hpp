/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/14 18:37:51 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/16 22:43:28 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <fstream>

class Fixed {

	private :
		int			_fixe;
		const int	_fractionalbits;

	public :
		Fixed(void);
		Fixed(const int fixe);
		Fixed(const float fixe);
		Fixed(Fixed const &rhs);
		~Fixed();

		Fixed& operator=(Fixed const &rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed operator+(Fixed const &rhs);
		Fixed operator-(Fixed const &rhs);
		Fixed operator*(Fixed const &rhs);
		Fixed operator/(Fixed const &rhs);
		Fixed& operator++();
		Fixed operator++(int);

		bool operator>(Fixed const &rhs) const;
		bool operator<(Fixed const &rhs) const;
		bool operator>=(Fixed const &rhs) const;
		bool operator<=(Fixed const &rhs) const;
		bool operator==(Fixed const &rhs) const;
		bool operator!=(Fixed const &rhs) const;

		static Fixed const& min(Fixed const& lhs, Fixed const& rhs) ;
		static Fixed const& max(Fixed const& lhs, Fixed const& rhs) ;
		static Fixed& min(Fixed& lhs, Fixed& rhs) ; 
		static Fixed& max(Fixed& lhs, Fixed& rhs) ;
};

		std::ostream& operator<<(std::ostream& ofs, Fixed const &rhs);

#endif
