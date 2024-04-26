#include "utilities.h"
#include "splashkit.h"
using std::stoi;

string read_string(string prompt)
{
  write(prompt);
  return read_line();
}

int read_integer(string prompt)
{
  string line = read_string(prompt);
  while (!is_integer(line))
  {
    write_line("Please enter a whole number.");
    line = read_string(prompt);
  }
  return stoi(line);
}

int integer_range(int integer)
{
  while (integer > 3 || integer < 1)
  {
    string int_string = read_string("Please enter a a number between 1-3: ");
    integer = stoi(int_string);
  }
  return (integer);
}

int main_menu(){
    write_line("Screen Selection: ");
    write_line("(1) - Load & Play Music");
    write_line("(2) - Stop Music");
    write_line("(3) - Main Menu");
    int input = read_integer("Please select a screen: ");
    input = integer_range(input);
    return input;
}

/**
 * Uses earlier user input to navigate the program
 *
 * @param input int as selected by user
 
 */
void screen_selection(int input){
    string track;
    switch (input){
        case 1:
            write_line("Enter track name including extension: ");
            track = read_line();
            play_music(track);
            break;
        case 2:
            stop_music();
            break;
        case 3:
            write_line("Main Menu!");
            break;
    }
}
