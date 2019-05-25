#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int array[10];
	int sum = 0;
	int average = 0;
	
	cout<<"Enter 10 integers: "<< "\n";
	for(int i = 0; i < 10; i++)
	{
		cin>>array[i];
		sum += array[i];
		average = sum / 10;
	}
	int smallest = array[0];
	for(int y = 0; y < 10; y++)
	{
		if(smallest > array[y])
		smallest = array[y];
	}
	int largest = array[0];
	for(int x = 0; x < 10; x++)
	{
		if(largest < array[x])
		largest = array[x];
	}
	cout<<"The smallest integer is "<<smallest<<". \n"; 
	cout<<"The largest integer is "<<largest << ". \n";
	cout<<"Total sum of the elements is "<< sum <<". \n"; 
	cout<<"The average of the elements is "<<average << ". \n"; 
	
	getch();
	return 0;
}
