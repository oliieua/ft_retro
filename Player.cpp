/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooliinyk <ooliinyk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:04:39 by ooliinyk          #+#    #+#             */
/*   Updated: 2019/12/07 21:27:32 by ooliinyk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Player.hpp"
#include "Game.hpp"

Player::Player(void) : _posX(0), _posY(Game::winH / 2) {
	return;
}

Player::Player(Player const &src) {
	*this = src;
	return;
}

Player::~Player(void) {
	return;
}

Player	&Player::operator=(Player const &src) {
	return *this;
}

int		Player::getPosX(void) const {
	return this->_posX;
}

int		Player::getPosY(void) const {
	return this->_posY;
}

void	Player::moveUp(void) {
	if (this->_posY > 0)
		this->_posY--;
}

void	Player::moveDown(void) {
	if (this->_posY < Game::winH - 1)
	this->_posY++;
}

void	Player::moveLeft(void) {
	if (this->_posX > 0)
		this->_posX--;
}

void	Player::moveRight(void) {
	if (this->_posX < Game::winW - 1)
		this->_posX++;
}
