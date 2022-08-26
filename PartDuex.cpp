#include <iostream>
#include <vector>
#include "TriangleHeap.h"
#include "TriangleStack.h"

using namespace std;

int AddNumbersReturnInt(int* a, int* b)
{

	return *a + *b;
}

void AddNumbersReturnVoid(int a, int b, int* sum)
{

	*sum = a + b;
}


void SwapValues(int* a, int* b)
{
	int temp = *a; 
	*a = *b; 
	*b = temp; 
}

void program1()
{
	// test the functions
	int a = 10, b = 5, sum;

	cout << "AddNumbersReturnInt: " << AddNumbersReturnInt(&a, &b) << endl;
	AddNumbersReturnVoid(a, b, &sum);
	cout << "AddNumbersReturnVoid: " << sum << "\n" << endl;

	cout << "Before Swap:" << endl;
	cout << "a = " << a << ", b = " << b << endl;
	SwapValues(&a, &b);
	cout << "After Swap:" << endl;
	cout << "a = " << a << ", b = " << b << "\n" << endl;
}

void program2()
{
	// test the functions
	cout << "TriangleStack:" << endl;
	vector<TriangleStack> trStack; 
	
	TriangleStack ts1, ts2;
	
	ts1.SetBase(7.5);
	ts1.setHeight(5);

	ts2.SetBase(10);
	ts2.setHeight(7.25);


	trStack.push_back(ts1);
	trStack.push_back(ts2);


	for (size_t i = 0; i < trStack.size(); i++)
		cout << "Area: " << trStack[i].GetArea() << endl;

	cout << endl << "TriangleHeap:" << endl;
	vector<TriangleHeap> trHeap;

	TriangleHeap th1;


	th1.setBase(7.5);
	th1.setHeight(5);


	TriangleHeap th2(th1);


	trHeap.push_back(th1);
	trHeap.push_back(th2);


	for (size_t i = 0; i < trHeap.size(); i++)
		cout << "Area: " << trHeap[i].GetArea() << endl;
}

string options[2]{ "1. program 1", "2. program 2" };

int main()
{
	int menuChoice;
	do
	{


		cout << endl
			<< " 1 - Program 1.\n"
			<< " 2 - Program 2.\n"
			<< " 3 - Exit.\n"
			<< " Enter your choice and press return: ";
		cin >> menuChoice;
		system("cls");

		switch (menuChoice)
		{
		case 1:
			program1();
			break;
		case 2:
			program2();
			break;
		case 3:
			cout << "End of Program.\n";
			break;
		default:
			cout << "Not a Valid Choice. \n"
				<< "Choose again.\n";
			break;
		}

	} while (menuChoice != 3);
	return 0;
}