#include "headers.h"

int CurrentStep();
void Login();
void Register();

int main()
{
    Book_database B;
    User_database U;
    int a = CurrentStep();

    while (a!= 0)
    {

        

        if (a == 0)
        {
            cout << "Exiting succesfully!\n";
            exit(0);
        }

        if (a== 1)
        {
            Register();
            cout << "\n\n\n";
        }
        else if(a ==2)
        {
        Login();
            
            

        }
        a= CurrentStep();
    }

    return 0;
}


int CurrentStep()
{
    // system("clear");
    cout << "\t Choose the among following options"<< "\n";
    cout << "Press 1 to Registation\n";
    cout << "Press 2 to Login\n";
    cout << "Press 0 to quit\n";
    int choice;
    cin >> choice;
    if (choice == 0)
        {return 0;}

    if (choice == 1)
        {return 1;}
    if (choice == 2)
        {return 2;}
    else
    {
        return -1;
    }
}

void Login()
{
    cout << "\tEnter your ID :";
    int id;
    cin >> id;
    cin.ignore();

    cout << "\t Enter your Password : ";
    string password;
    getline(cin, password);

    if (id)
    {
        //
        cout << "No user exsist with the above id\n";
        cout << "Press a to continue login or press b to quit\n";
        char c;
        cin >> c;
        cin.ignore();
        if (c == 'a')
            Login();
    }

}

void Register()
{
cout << "\t Enter Your Name : ";
    string name;
    getline(cin, name);
    cout << "\t Enter Your ID(4 digit Number): ";
    int id;
    cin >> id;
    cout << "\t Enter Password to be set: ";
    string password;
    cin >> password;
}