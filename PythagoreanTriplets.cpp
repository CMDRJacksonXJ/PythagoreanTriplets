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
    // Time Complexity: O(n^3)
    // Efficiency: n = 100,000, t = ~1 day, 8 hours

    file.close();
    return 0;
}

