#ifndef UTILITIES_H
#define UTILITIES_H

#include <string>
using std::string;

/**
 * Read a string from the user
 *
 * @param prompt the message to show the user
 * @returns the string entered
 */
string read_string(string prompt);

/**
 * Read an integer from the user
 *
 * @param prompt the message to show the user
 * @returns the integer entered
 */
int read_integer(string prompt);

/**
 * Checks that user choice is in range of menu
 *
 * @param input Integer input, called from read_integer()
 * @returns the integer entered so long as in range
 */
int integer_range(int input);

/**
 * Uses earlier user input to navigate the program
 *
 * @param input int as selected by user
 
 */
void screen_selection(int input);

/**Main Menu
 * Displays the main menu and takes a user input for navigation
 * @returns user input as integer or prompts user for an int in range  
*/
int main_menu();

#endif