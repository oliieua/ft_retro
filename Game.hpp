/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooliinyk <ooliinyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:20:23 by ooliinyk          #+#    #+#             */
/*   Updated: 2019/12/07 20:37:34 by ooliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GAME_HPP
# define GAME_HPP
# include <ncurses.h>
# include <unistd.h>
# include <iostream>

class Game
{
	public:
		Game(void);
		Game(Game const &src);
		~Game(void);

		Game	&operator=(Game const &src);
		void	startGame(void);
		void	endGame(void);
		bool	getStatus(void) const;
		void	setStatus(bool s);
		void	resizeWindow(void);
		static const int	winW;
		static const int	winH;
	private:
		bool	_gameStarted;
};

#endif
