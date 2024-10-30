#include "Game.h"
#include <string.h>
using namespace std;

//Initializing all the values here...
Game::Game()
{
    cout << "=======================" << endl;
    cout << "       Tic Tac Toe     " << endl;
    cout << "=======================" << endl;
    m_choice = true;
    m_player_1 = 0;
    m_player_2 = 0;
    for(int i = 0 ; i < 9; i++)
    {
        arr[i] = '*';
    }
    display();
    choice();
}

//Displaying the stuff inside the array...
void Game::display() const
{
    cout << endl;
    cout << "       "<< arr[0] << " | " << arr[1] << " | " << arr[2] << endl;
    cout << "       "<<"- - - - -" << endl;
    cout << "       "<< arr[3] << " | " << arr[4] << " | " << arr[5] << endl;
    cout << "       "<< "- - - - -" << endl;
    cout << "       "<< arr[6] << " | " << arr[7] << " | " << arr[8] << endl;
}

void Game::indexSetter(int index , bool choice)
{
    if (!choice)
    {
        arr[index] = 'X';
    }
    else
    {
        arr[index] = 'O';
    }
}

int Game::validInput(int input)
{
    int ret = input;
    bool valid = false;
    while (!valid)
    {
        if(ret >= 0 && ret < 9 && arr[ret] == '*')
        {
            valid = true;
        }
        else
        {
            cout << "Invalid input try again : " ;
            cin >> ret;
        }
    }
    return ret;
}


bool Game::result()
{
    bool ret = false;
    if(((arr[0] == arr[1] && arr[1] == arr[2] && arr[0] != '*') || (arr[3] == arr[4] && arr[4]== arr[5] && arr[4] != '*') || (arr[6] == arr[7] && arr[7] == arr[8]&& arr[6] != '*') || (arr[0] == arr[3] && arr[3]== arr[6] && arr[0] != '*') || (arr[1] == arr[4] && arr[4]== arr[7]&& arr[4] != '*') || (arr[2] == arr[5] && arr[5] == arr[8] && arr[2] != '*') || (arr[0] == arr[4] && arr[4]== arr[8] && arr[0] != '*') || (arr[2] == arr[4] && arr[4]== arr[6] && arr[2] != '*')))
    {
        ret = true;
    }
    
    return ret;
}

void Game::declareWinner()const
{
    if (!m_choice)
    {
        cout << "-------------------------------"<< endl;
        cout << "  Congratulations Player-1 Win  " << endl;
        cout << "-------------------------------"<< endl;
    }
    else
    {
        cout << "-------------------------------"<< endl;
        cout << " Congratulations Player-2 Win  " << endl;
        cout << "-------------------------------"<< endl;
    }
}



void Game::choice()
{
    int index{};
    int tries = 0;
    while(tries < 9)
    {
        if(m_choice)
        {
            cout << endl << " Player - 1 (select index 0-8): ";
            cin >> index;
            index = validInput(index);
            cout << "This is the choice: " << index << endl; //create a validinput function here...
            m_choice = false;
            indexSetter(index, m_choice);
            tries++;
            display();
        }
       else
        {
            cout << endl << " Player - 2 (select index 0-8): ";
            cin >> index;
            index = validInput(index);
            cout << "This is the choice: " << index << endl;
            m_choice = true;
            indexSetter(index, m_choice);
            tries++;
            display();
        }
        if (tries >= 5)
        {
            bool winner = result();
            if (winner)
            {
                declareWinner();
                break;
            }
        }
        if(tries == 9)
        {
            cout << "===================" << endl;
            cout << "    It's a tie" << endl;
            cout << "===================" << endl;
        }
    }
}





