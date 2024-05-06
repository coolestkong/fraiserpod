#include "utilities.h"
#include "splashkit.h"
using std::stoi;
using std::to_string;


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
  while (integer > 6 || integer < 1)
  {
    string int_string = read_string("Please enter a a number between 1-6: ");
    integer = stoi(int_string);
  }
  return (integer);
}

int main_menu(){
    write_line("Screen Selection: ");
    write_line("(1) - Load & Play Music");
    write_line("(2) - Stop Music");
    write_line("(3) - Load Song");
    write_line("(4) - Alter Song");
    write_line("(5) - Play Loaded Song");
    write_line("(6) - Print Song Details");
    write_line("(7) - Main Menu");
    int input = read_integer("Please select a screen: ");
    input = integer_range(input);
    return input;
}

song_data load_song(){
  song_data loaded_song;
  genre_data loaded_genre;
  loaded_song.file_name = read_string("Enter file name including extension: ");
  loaded_song.song_name = read_string("Enter name for song: ");
  int genre = read_integer("Enter genre for song: Pop(0), Rock(1), RnB(2): ");
  switch (genre){
    case POP:
      loaded_song.genre = "Pop";
      break;
    case ROCK: 
      loaded_song.genre = "Rock";
      break;
    case RNB:
      loaded_song.genre = "RnB";
      break;
    default:
      loaded_song.genre = "Unknown";  // Handle unexpected values
      break;
  }
  loaded_song.plays = 0;
  return loaded_song;

}

void print_song(song_data loaded_song){
  write_line("File: " + loaded_song.file_name);
  write_line("Song Name: " + loaded_song.song_name);
  write_line("Genre: " + loaded_song.genre);
  write_line("Plays: " + to_string(loaded_song.plays));

}
  




