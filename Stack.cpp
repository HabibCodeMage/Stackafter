// Stack.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include "Stack.h"
using namespace std;
int main()
{
    Stack<int>object;
    char flag = ' ';
    do
    {
        cout<<  "ENTER A TO PUSH\n"
            <<  "ENTER B TO POP\n"
            <<  "ENTER C TO TOP\n"
            <<  "ENTER E TO EXIT\n";
        cin.get(flag);
        if (!(isspace(flag))) { cin.ignore(); }
        switch (flag)
        {
        case'a':
        case'A':
            int x;
            cout << "ENTER INPUT\n";
            cin >> x; cin.ignore();
            object.push(x);
            break;
        case'b':
        case'B':
            try
            {

                object.pop();
            }
            catch (const char* that)
            {
                cout << that<<endl;
            }
            break;
        case'c':
        case'C':
            try
            {
                object.top();
                cout << "TOP IS:" << object.top() << endl;
            }
            catch (const char*that)
            {
                cout << that << endl;
            }
            
            break;
        default:
            break;
        }
    } while (toupper(flag)!='E');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
