/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarbari <mbarbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/24 18:12:55 by mbarbari          #+#    #+#             */
/*   Updated: 2015/06/24 18:13:05 by mbarbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

class B
{
public:
	B();
	B(const B& src);
	~B();

	B& operator=(const B& rhs);

private:

};

#endif // B_HPP
