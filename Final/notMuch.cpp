#include <iostream>
#include <fstream>
#include <string>

using namespace std;

ifstream inFile;
int const MAX = 25;

void printArray(string myArray[]);
void fillArray(string myArray[]);

int main()
{
    string myData[MAX];

    inFile.open("Input.txt"); 

    fillArray(myData);
    printArray(myData);

    inFile.close();
    
    return 0;
}

void printArray(string myArray[])
{
    for(int i =0; i < MAX; i = i +5)
    {
        cout << myArray[i] << " " << myArray[i + 1] << " " << myArray[i + 2] << " " << myArray[i + 3] << " " << myArray[i + 4] << " "<< endl;
    }
}

void fillArray(string myArray[])
{
    for(int i =0; i < MAX; i++)
    {
        inFile >> myArray[i];
    }
}