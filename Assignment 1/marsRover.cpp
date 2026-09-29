//Syed Jawwad Hasnain Zaidi (35750) CSE_141
#include <iostream>
using namespace std;
int main()
{
    int direction = 0;
    int pit_x = -3;
    int pit_y = 2;
    int treasure_x = 2;
    int treasue_y = 3;
    int current_x = 0, current_y = 0;
    char command;
    bool finish = false, treasure = false, pit = false;
    while (finish == false)
    {
        cout << "Command: ";
        cin >> command;
        cout << endl;
        if (command >= 'a' && command <= 'z')
        {
            command = command - 32;
        }
        switch (command)
        {
        case 'F':
            if (direction == 0)
            {
                if (current_y == 5)
                {
                    cout << "Boundary reached. " << endl;
                }
                else
                {
                    current_y++;
                }
            }
            if (direction == 1)
            {
                if (current_x == 5)
                {
                    cout << "Boundary reached. " << endl;
                }
                else
                {
                    current_x++;
                }
            }
            if (direction == 2)
            {
                if (current_y == -5)
                {
                    cout << "Boundary reached. " << endl;
                }
                else
                {
                    current_y--;
                }
            }
            if (direction == 3)
            {
                if (current_x == -5)
                {
                    cout << "Boundary reached. " << endl;
                }
                else
                {
                    current_x--;
                }
            }
            if (current_x == pit_x && current_y == pit_y)
            {
                cout << "The rover has fallen into a pit. Mission failed." << endl;
                pit = true;
                finish = true;
            }
            if (current_x == treasure_x && current_y == treasue_y)
            {
                cout << "Treasure found! Mission successful." << endl;
                treasure = true;
                finish = true;

                break;
            case 'L':
                direction = (direction + 3) % 4;
                break;
            case 'R':
                direction = (direction + 1) % 4;
                break;
            case 'P':
                cout << "Current position: (" << current_x << ", " << current_y << ")" << endl;
                cout << "Current direction: ";
                if(direction==0){
                    cout<<"North"<<endl;
                }
                else if(direction==1){
                    cout<<"East"<<endl;
                }
                else if(direction==2){
                    cout<<"South"<<endl;
                }
                else if(direction==3)
                {
                    cout<<"West"<<endl;
                }
                break;
            case 'Q':
                finish = true;
                break;
            default:
                cout << "Unknown command." << endl;
                break;
            }
        }
    }
    for (int y = 5; y >=-5; y--)
    {
        for (int x = -5; x <=5; x++)
        {
            if (pit == true)
            {

                if (x == pit_x && y == pit_y)
                {
                    cout << "X ";
                }
                else if (x == treasure_x && y == treasue_y)
                {
                    cout << "T ";
                }
                else
                {
                    cout << "- ";
                }
            }
            else if (treasure == true)
            {
                if (x == pit_x && y == pit_y)
                {
                    cout << "P ";
                }
                else if (x == treasure_x && y == treasue_y)
                {
                    cout << "X ";
                }
                else
                {
                    cout << "- ";
                }
            }
            else
            {
                if (x == pit_x && y == pit_y)
                {
                    cout << "P ";
                }
                else if (x == treasure_x && y == treasue_y)
                {
                    cout << "T ";
                }
                else if (x == current_x && y == current_y)
                {
                    cout << "R ";
                }
                else
                {
                    cout << "- ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}