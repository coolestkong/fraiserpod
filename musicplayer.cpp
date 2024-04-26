#include "splashkit.h"
#include "utilities.h"
using std::stoi;


int main(){
    write_line("Welcome to Dotifin!");
    bool quit;
    while(!quit){
        int input = main_menu();
        screen_selection(input);
    }
    

}