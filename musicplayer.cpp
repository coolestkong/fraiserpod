#include "splashkit.h"
#include "utilities.h"
using std::stoi;

void alter_song(song_data &loaded_song){
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
}

/**
 * Displays a main menu that takes user input as integer.
 * References input with menu options and navigates accordingly. 
*/
int main(){
    write_line("Welcome to Dotifin!");
    bool quit = false;
    song_data loaded_song;
    while(!quit){
        
        int input = main_menu();
        switch (input){
            case 1:
                write_line("Enter track name including extension: ");
                loaded_song.file_name = read_line();
                play_music(loaded_song.file_name);
                break;
            case 2:
                stop_music();
                break;
            case 3:
                loaded_song = load_song();
                break;
            case 4: 
                alter_song(loaded_song);
                break;
            case 5:
                play_music(loaded_song.file_name);
                loaded_song.plays++;
                break;
            case 6:
                print_song(loaded_song);
                break;
            case 7:
                write_line("Main Menu!");
                break;
        }
    }
    


}