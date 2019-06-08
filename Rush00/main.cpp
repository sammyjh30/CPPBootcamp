/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 10:31:29 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 11:34:13 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
 
int XPOS = 5;
int YPOS = 5;
char PLAYER = '@';
int userInput;
 
void Update() {
	switch(userInput) {
		case KEY_LEFT:
			XPOS = XPOS - 1;
			break;
		case KEY_RIGHT:
			XPOS = XPOS + 1;
			break;
		case KEY_UP:
			YPOS = YPOS - 1;
			break;
		case KEY_DOWN:
			YPOS = YPOS + 1;
			break;
	}
}
 
void Draw() {
	clear();						//Clears the screen.
	mvaddch(YPOS, XPOS, PLAYER);	//Draw '@' in the initial location.
	refresh();						//Updates the screen to display the '@'.
}
 
int main(void)		{
 
	//Initialize ncurses
 
	initscr(); //Tells it to make a terminal screen.
	// clear();
	noecho();  //When user types input, it doesn't appear on the screen.
	cbreak();  //Typed character is immediately available.
	keypad(stdscr, TRUE);  //Standard screen.
	curs_set(0);  //Starts the cursor at (0,0).
	// mvaddch(YPOS, XPOS, PLAYER); 
	// refresh();  //Updates the screen to display the '@'.
 
	while(true) {
 
		//Input()
		userInput = getch();
 
		Update();
		Draw();
 
		if (userInput == 'q') {
			break;
		}
	}
 
	endwin();  //Closes the terminal screen.
 
	return 0;
}
