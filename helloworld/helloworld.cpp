#include <iostream>
#include <vector>
#include <string>4

using namespace std;

int main()
{
    int wordh;
    cout << "Enter a number: ";
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cin >> wordh; // Read input from the user
        cout << word << " ";
        while (wordh > 10)
        {
            cout << wordh << " ";
            break;
        }
        
    }

    cout << endl;
}