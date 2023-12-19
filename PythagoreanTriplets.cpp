// PythagoreanTriplets.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>


using namespace std;


int main()
{
    ofstream file;
    file.open("triplets.txt", ios::app);

    unsigned long a;
    unsigned long b;
    unsigned long c;
    unsigned long t;
    unsigned long tf = 0;
    cout << "Number of Iterations: " << endl;
    cin >> t;
    
    for (a = 1; a <= t; a++)
    {
        system("cls");
        cout << "Loading iteration " << a << " of " << t << "..." << endl;
        cout << "Found " << tf << " triples." << endl;
        for (b = (a+1); b <= t; b++)
        {
            for (c = (b+1); c <= t && c <= (a+b); c++)
            {
                if ((a*a) + (b*b) == (c*c))
                {
                    file << a << "," << b << "," << c << "\n";
                    tf++;
                }
            }
        }
    }
    system("cls");
    cout << "Complete! Found " << tf << " triplets" << endl;

    file.close();
    return 0;
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
