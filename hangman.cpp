#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;

string randWordGen()
{
    string randWord[100] = {"poke",
        "cave",
        "charge",
        "wink",
        "weight",
        "bedroom",
        "stale",
        "vacation",
        "chess",
        "embarrass",
        "cure",
        "picture",
        "fretful",
        "warlike",
        "numberless",
        "dizzy",
        "boundless",
        "linen",
        "teaching",
        "aberrant",
        "hulking",
        "manage",
        "voiceless",
        "woman",
        "river",
        "hair",
        "flavor",
        "partner",
        "basketball",
        "visitor",
        "internal",
        "peck",
        "nondescript",
        "aromatic",
        "expert",
        "eyes",
        "fowl",
        "jazzy",
        "bat",
        "report",
        "mug",
        "poison",
        "mere",
        "concentrate",
        "fork",
        "stick",
        "frantic",
        "connect",
        "maniacal",
        "friendly",
        "guiltless",
        "desert",
        "tiger",
        "crush",
        "entertaining",
        "secretary",
        "far",
        "drawer",
        "absurd",
        "fruit",
        "juggle",
        "afternoon",
        "stupid",
        "introduce",
        "ice",
        "land",
        "incandescent",
        "deserted",
        "drop",
        "selfish",
        "crabby",
        "bored",
        "miniature",
        "pathetic",
        "crime",
        "frame",
        "kettle",
        "nifty",
        "number",
        "sweet",
        "squeak",
        "profuse",
        "crowd",
        "trail",
        "explain",
        "nippy",
        "scrub",
        "untidy",
        "test",
        "rush",
        "drink",
        "two",
        "remarkable",
        "border",
        "ship",
        "slow",
        "radiate",
        "shape",
        "tax",
        "protest"};

    int  number;
    int  i;
    srand(time(NULL));

    number = rand() % 100+1;
    srand(1);

    return randWord[number];
}
void lives7()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|        / \\         |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives6()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|          \\         |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives5()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|\\         |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives4()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|        /|          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives3()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives2()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         O          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}
void lives1()
{
std:system("clear");
    cout << "+--------------------+" << endl;
    cout << "|   GUESS THE WORD!  |" << endl;
    cout << "+--------------------+" << endl;
    cout << "|         |          |" << endl;
    cout << "|         |          |" << endl;
    cout << "|         x          |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "|                    |" << endl;
    cout << "+--------------------+" << endl << endl;
}

int main()
{
    int word_counter = 0;
    int lives = 7;
    char response;
    bool response_acc = false;
    string updatedRes;
    string randomWord = randWordGen();
    int randWordLen = randomWord.length();
    bool toggle_me = true;
    int counter = 0;
    int j = 0;
    string test[randWordLen] = {""};
    bool toggle_letter[randWordLen] = {false};
    bool word_entirety = false;
    std::system("clear");




    //std::string str = randomWord;


    lives7();
    cout << randomWord << endl;
    char array_underscore[randomWord.size()];


    for(int i = 0; i < randomWord.size(); i++) // underscores for the word
    {
        array_underscore[i] = '_';
        cout << array_underscore[i];
    }

    //cout << randWordLen << endl; // will display the amount of letters in the word

bool wtf = false;




   
   
    //cout << counter << " : IS THE COUNTER "<<endl;

    //cout << test << " VS " << randomWord << endl<< endl;


    while(toggle_me == true)
    {
        cout << " There are " << randomWord.size() << " letters in this word!" << endl << endl;
        char wordProgress[randomWord.size()];
        cout << "Guess a letter: ";
        cin >> response;
        if(response >= 65 && response <= 90) // uppercase to lowercase converter
        {
            response = response + 32;
        }

        //int randWordLen = randomWord.length();

        char char_array[randomWord.size() + 1];

        for(int k = 0; k <= randWordLen; k++)
        {
            if(response == char_array[k])
            {
                response = array_underscore[k];
                response_acc = true;
                k = randWordLen + 1;
                word_entirety = true;
            }
        }

        strcpy(char_array, randomWord.c_str());
        if(word_entirety == false)
        {
        for(int i = 0; i <= randWordLen; i++)
        {   
            if(response == array_underscore[randWordLen])
            {
                response = array_underscore[randWordLen];
                response_acc = true;
                i = randWordLen + 1;
            }
            if(response == array_underscore[i])
            {
                cout << "You've already tried that letter try something else! " << endl;
                usleep(500000);
                i = randWordLen + 1;
            }
            if(response == char_array[i])
            {
                array_underscore[i] = response;
                //word_counter++;
                response_acc = true;
                //toggle_letter[i] = true;
                if(char_array[j] == array_underscore[j] && toggle_letter[j] == false)
                {
                    word_counter++;
                    toggle_letter[j] == true;
                //cout << " This is char_arry[j]: " << char_array[j] << " and this is array_underscore[j]: " << array_underscore[j];
                //word_counter = word_counter + 1;
                }
            }
            // if(toggle_letter[i] == true)
            // {
            //     cout << "You already input that sorry try another option!" << endl;
            // }
        }
        }
        if(response_acc == false)
        {
            lives--;
        }
        if (lives == 7)
        {
            lives7();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else if(lives == 6)
        {
            lives6();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else if(lives == 5)
        {
            lives5();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else if(lives == 4)
        {
            lives4();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else if(lives == 3)
        {
            lives3();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else if(lives == 2)
        {
            lives2();
            cout << "This is your current lives: " << lives - 1 << endl;
            if(response_acc == true)
            {
                cout << endl << "That was correct!" << endl;
            }
            else
            {
                cout << endl << "Ouch! That was a wrong answer!" << endl;
            }
        }
        else
        {
            lives1();
            cout << "This is your current lives: " << lives - 1 << endl;
            cout << "YOU HAVE DIED!" << endl;
            cout << endl << endl << "The correct word was: " << randomWord << endl;
            return -1;
        }
        for(int i = 0; i <= randomWord.size(); i++)
        {
            cout << array_underscore[i];
            //test[i] = array_underscore[i];
            //test[i] = char_array[i];
            //cout << test << endl;

        }

        response_acc = false;
        counter++;
        
        // for(int j = 0; j < randWordLen; j++)
        // {
        //     cout << endl << "CURRENT WORD COUNTER: " << word_counter << endl;
        //     if(char_array[j] == array_underscore[j] && toggle_letter[j] == false)
        //     {
               
        //             word_counter++;
        //             toggle_letter[j] == true;
        //         //cout << " This is char_arry[j]: " << char_array[j] << " and this is array_underscore[j]: " << array_underscore[j];
        //         //word_counter = word_counter + 1;
        //     }
        //     //word_counter--;
        //    // wtf = true;
        // }
        if(word_counter == randWordLen)
            {
                toggle_me = false;
            }
    }


    cout << endl;
    return 0;
}
