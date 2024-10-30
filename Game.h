#ifndef GAME_H
#define GAME_H

#include "iostream"

class Game
{
    char arr[9]{};
    int m_player_1;
    int m_player_2;
    bool m_choice;
public:
    //constructor...
    //NOTE: initializes all the data members.
    Game();
    
    //Displaying the stuff in the array...
    //NOTE: displays all the elements in the array.
    void display() const;
    
    
    //Player choice...
    //NOTE:player chooses index.
    void choice();
    
    //
    void indexSetter(int index , bool choice);
    
    
    int validInput(int input);
    
    
    bool result();
    
    void declareWinner()const;
    
    //Destructor...
    //NOTE:deallocates the dynamically allocated memory.
//    ~Game();
};




#endif
