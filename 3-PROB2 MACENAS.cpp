#include <iostream>
#include <conio.h>
#include <iomanip> 

using namespace std; 

int main ()
{
	int tempA[7], tempB[7], tempC[7];
	
	cout << "Enter all temperature for a week of Province A, Province B and then Province C: \n"; 

    for(int i = 0; i < 7; i++)
    {
        cout << "Province A, Day " << i + 1 << ": "; 
        cin >> tempA[i];
    }
    for(int z = 0; z < 7; z++)
    {
        cout << "Province B, Day " << z + 1 << ": "; 
		cin >> tempB[z];
	}
	for(int j = 0; j < 7; j++)
	{
        cout << "Province C, Day " << j + 1 << ": "; 
		cin >> tempC[j]; 
	}
	cout << "\n"; 
    
    
	cout << "\nDisplaying Values: " << "\n"; 
	
	for(int i = 0; i < 7; i++)
	{
        cout << "Province A, Day " << i + 1 << ":" << tempA[i] << "\n";
	}
	for(int z = 0; z < 7; z++)
	{
        cout << "Province B, Day " << z + 1 << ":" << tempB[z] << "\n";
	}
	for(int j = 0; j < 7; j++)
	{
        cout << "Province C, Day " << j + 1 << ":" << tempC[j] << "\n";
	}
	
_getch(); 
return 0; 
}



