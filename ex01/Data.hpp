/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ribana-b <ribana-b@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 19:08:40 by ribana-b          #+#    #+# Malaga      */
/*   Updated: 2025/06/05 19:56:59 by ribana-b         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

class Data
{
	public:
		Data();
		~Data();
		Data(const Data& that);
		Data& operator=(const Data& that);

		int	getX() const;
		int	getY() const;

	private:
		int	x;
};

#endif
