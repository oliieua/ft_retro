/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooliinyk <ooliinyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 18:20:23 by ooliinyk          #+#    #+#             */
/*   Updated: 2019/12/07 20:38:32 by ooliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.hpp"

Game::Game(void) : _gameStarted(false) {
	return;
}

Game::Game(Game const &src) {
	*this = src;
	return;
}

Game::~Game(void) {
	return;
}

Game	&Game::operator=(Game const &src) {
	if (&src != this) {
		this->_gameStarted = src._gameStarted;
	}
	return *this;
}

void	Game::startGame(void) {
	this->resizeWindow();
	initscr();
	curs_set(0);
	noecho();
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	this->_gameStarted = true;
}

bool	Game::getStatus(void) const {
	return this->_gameStarted;
}

void	Game::setStatus(bool s) {
	this->_gameStarted = s;
}

void	Game::endGame(void) {
	this->setStatus(false);
	endwin();
}

void	Game::resizeWindow(void) {
	std::string size = "\e[8;" + std::to_string(Game::winH) + ";" + std::to_string(Game::winW) + "t";
	std::cout << size;
}

const int Game::winH = 30;
const int Game::winW = 115;
