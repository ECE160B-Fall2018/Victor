// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct linked {
	int num;
	struct linked *next;
};

int main()
{
	struct linked *ptr1;
	struct linked *ptr2;
	ptr1 = (struct linked *)malloc(sizeof(struct linked));
	ptr2 = (struct linked *)malloc(sizeof(struct linked));
	
	struct linked *temp1;
	struct linked *temp2;
	temp1 = ptr1;
	temp2 = ptr2;
	for (int i = 0; i < 3; i++)
	{
		
		
		temp1->num = 1 + i;
		temp2->num = 3 + i;
		cout << temp1->num << endl;
		cout << temp2->num << endl;
		temp1->next = (struct linked *)malloc(sizeof(struct linked));
		temp2->next = (struct linked *)malloc(sizeof(struct linked));
		temp1 = temp1->next;
		temp2 = temp2->next;
		
	}
	
	struct linked *ptr3 = (struct linked *)malloc(sizeof(struct linked));
	struct linked *temp3 = ptr3;
	
	for (int i = 0; i < 3; i++)
	{
		temp3->num = ptr1->num + ptr2->num;
		
		temp3->next = (struct linked *)malloc(sizeof(struct linked));
		temp3 = temp3->next;
		
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;
	}
	
	for (int i = 0; i < 3; i++)
	{
		cout << ptr3->num << endl;
		ptr3 = ptr3->next;
	}
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
