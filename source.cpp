#include <iostream>
#include <cctype>
#include <stdlib.h>

using namespace std;



//Functions

void WaitAnyInput(string text = "...")
{
    cout << text << endl;

    system("pause > 0");
    system("cls");
}

char ChoiceSimple()
{
    char choice;

    cout << endl;
    cout << "Yes or No? (Y/N): ";
    cin >> choice;
    choice = toupper(choice);

    while (choice != 'Y' && choice != 'N')
    {
        system("cls");
        cout << "Invalid answer, please answer by Yes or No... (Y/N): ";
        cin >> choice;
        choice = toupper(choice);
    }

    system("cls");

    return choice;
}

void ShowIntroRandomFinishLines()
{
    int numberOfLines = 12;
    int line = rand() % (numberOfLines);

    switch (line)
    {
    case 0:
        cout << "You're there?...";
        break;
    case 1:
        cout << "Did I say something wrong?";
        break;
    case 2:
        cout << "Wait, did I forgot something?";
        break;
    case 3:
        cout << "Any Questions?...";
        break;
    case 4:
        cout << "I Hope you'll have fun!";
        break;
    case 5:
        cout << "Wait, did I lost myself in a switch?";
        break;
    case 6:
        cout << "I'm coding this in 2022 by the way.";
        break;
    case 7:
        cout << "Is this an easter egg? Good question...";
        break;
    case 8:
        cout << "The cake is the truth.";
        break;
    case 9:
        cout << ":^)";
        break;
    case 10:
        cout << "Hello? :C";
        break;
    case 11:
        cout << "LoneKenshi once said \"a,b = b,a\"...";
        break;
    }

    cout << endl;

    WaitAnyInput();
}

void ShowIntro()
{
    cout << "Hi! Welcome again!" << endl
        << endl
        << "Thank you for giving me your precious time!" << endl;
    WaitAnyInput();

    cout << "In this program, you'll be able to access every game of mine that will run in the terminal!" << endl
        << "So you might notice that this isn't the first version of this program." << endl;
    WaitAnyInput();

    cout << "It is because I might add new games to this program." << endl;
    WaitAnyInput();

    cout << "After this introduction, the main menu will appear." << endl
        << "It will let you play one of my games or just quit the experiment." << endl
        << "If you choose to play one of my games, every one of them will have a tutorial. Don't worry!" << endl;
    WaitAnyInput();

    cout << "That's everything you need to know!" << endl;
    WaitAnyInput();

    ShowIntroRandomFinishLines();
}

int ChoiceMainMenu()
{
    int choice;

    cout << "Your choice : ";

    do
    {
        cin >> choice;
    } while (choice > 1 || choice < 1);

    return choice;
}

void ShowMainMenu()
{
    cout << "ver 22/02.01" << endl
        << endl
        << "   +-----------+" << endl
        << "   | MAIN MENU |" << endl
        << "   +-----------+" << endl
        << endl
        << endl
        << endl
        << "There is no game for now..." << endl
        << endl
        << "[1] Exit" << endl
        << endl;
}

void ShowCredits()
{
    cout << "+-----------------+" << endl
        << "| Made by BUBBLE. |" << endl
        << "+-----------------+" << endl;
}


//Main

int main(void)
{
    srand(time(NULL));

    cout << "Hello!" << endl
        << "Welcome to my first ever C++ program!" << endl
        << endl;
    WaitAnyInput("Press any key to continue...");

    cout << "Are you new to this program? I've made an introduction for this program..." << endl
        << "Skip the introduction?" << endl;

    char choiceFilter = 'N';

    while (ChoiceSimple() == choiceFilter)
    {
        system("cls");

        ShowIntro();
        cout << "Would you like to read the introduction again?";

        choiceFilter = 'Y';
    }

    cout << "Okay then.You are now ready!" << endl;
    WaitAnyInput("Press any key to continue...");

    int choice;

    while (true)
    {
        do
        {
            ShowMainMenu();

            cin >> choice;

            system("cls");
        } while (choice < 1 || choice > 1);

        cout << "Ho you're leaving?" << endl;

        if (ChoiceSimple() == 'Y') break;
    }

    cout << "Well, thank you for trying my program then!" << endl;
    WaitAnyInput("Press any key to end the experiment...");

    ShowCredits();

    return 0;
}
