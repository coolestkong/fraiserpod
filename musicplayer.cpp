#include "splashkit.h"
#include "utilities.h"
using std::stoi;

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
                play_music(loaded_song.file_name);
                loaded_song.plays++;
                break;
            case 5:
                print_song(loaded_song);
                break;
            case 6:
                write_line("Main Menu!");
                break;
        }
    }
    


}