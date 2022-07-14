#include <iostream>
#include <cstring>
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



void lives1()
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
void lives2()
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
void lives3()
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
void lives5()
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
void lives6()
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
void lives7()
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
	string randomWord = randWordGen();
	std::system("clear");
    
	lives1();
	cout << randomWord << endl;
	string array_underscore[randomWord.size()];


	for(int i = 0; i < randomWord.size(); i++) // underscores for the word
	{
		array_underscore[i] = "_";
		cout << array_underscore[i];
	}

	//for (int i = 0; i<randomWord.size)

	cout << " " << "There are " << randomWord.size() << " letters in this word!" << endl << endl;

	cout << "Guess a letter: ";
	cin >> response;
	if(response >= 65 && response <= 90) // uppercase to lowercase converter
	{
	response = response + 32;
	}

	int randWordLen = randomWord.length();

	//cout << randWordLen << endl;
	char char_array[randWordLen + 1];


	
	strcpy(char_array, randomWord.c_str());

	// while(word_counter != randWordLen)
	// {
	for(int i = 0; i < randWordLen; i++)
	{
		if(response == char_array[i])
		{
			array_underscore[i] = response;
			word_counter++;
			//cout << "right!" << endl;
		}
		// else
		// {
		// lives--;
		// }
		cout << array_underscore[i];
	}
			if (lives == 6)
			{
				lives2();
			}
			if (lives == 5)
			{
				lives3();
			}
			if (lives == 4)
			{
				lives4();
			}
			if (lives == 3)
			{
				lives5();
			}
			if (lives == 2)
			{
				lives6();
			}
			if (lives == 1)
			{
				lives7();
				cout << "YOU HAVE DIED!" << endl;
				return -1;
			}
	//}
    cout << "Guess a letter: ";
	cin >> response;
	if(response >= 65 && response <= 90) // uppercase to lowercase converter
	{
	response = response + 32;
	}
for(int i = 0; i < randWordLen; i++)
	{
		if(response == char_array[i])
		{
			array_underscore[i] = response;
			word_counter++;
			//cout << "right!" << endl;
		}
		// else
		// {
		// lives--;
		// }
		cout << array_underscore[i];
	}

		//cout << char_array[i];
		cout << endl;
	//cout << response << endl;
	//cout << random << endl;
	// for(int i = 0; i < randWord().size(); i++)
	// {
	// 	response | randWord
	// }


	return 0;
}
