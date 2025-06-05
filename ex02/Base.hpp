/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:40 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 21:01:16 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		Base();
		virtual ~Base();
		Base(const Base& that);
		Base& operator=(const Base& that);

		static Base*	generate(void);
		static void		identify(Base* p);
		static void		identify(Base& p);
};

#endif
