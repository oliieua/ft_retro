/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooliinyk <ooliinyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:04:39 by ooliinyk          #+#    #+#             */
/*   Updated: 2019/12/07 21:26:32 by ooliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP
# define PLAYER_HPP
# include <ncurses.h>
# include <unistd.h>
# include <iostream>

class Player
{
	public:
		Player(void);
		Player(Player const &src);
		~Player(void);

		Player	&operator=(Player const &src);
		int		getPosX(void) const;
		int		getPosY(void) const;
		void	moveUp(void);
		void	moveDown(void);
		void	moveLeft(void);
		void	moveRight(void);
	private:
		int	_posX;
		int	_posY;
};

#endif
