//#include "pch.h"
#include <iostream>
#include "LinkedList.h"
#include "LinkedList.cpp"

int main()
{
	
	setlocale(LC_ALL, "Russian");

	cout << "Hello! Laboratory work #1 \n";
	cout << "by Novikova Anastasiya 7302\n";
	cout << "You are welcome!";
	cout << endl;
	LinkedList<int> lst;
	lst.push_back(4);
	lst.push_back(1);
	lst.push_back(5);
	lst.push_back(7);
	lst.push_front(2);
	cout << "------------------------------------------------------------------";
	cout << endl;
	
	cout << "The first list:\n";
	cout << lst;

	cout << endl;
	cout << "Size of list= " << lst.get_size();
	cout << endl;

	lst.pop_front();

	cout << "list after deleting the first item:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	cout << "List output without using the AT function:\n";
	lst.print_to_console();
	cout << endl;
	lst.pop_back();
	cout << "list after deleting last item:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}

	
	cout << endl;
	
	lst.insert(2, -1);
	cout << "the list after adding the number -1 at index 2 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;

	lst.remove(1);
	cout << "the list after deleting the number at index 5 :\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	lst.set(2, 2);
	cout << "list after replacing the number of 2 positions on the number 2:\n";
	for (size_t i = 0; i < lst.get_size(); i++)
	{
		cout << lst.at(i) << " ";
	}
	cout << endl;
	cout << "Deleting first list\n";
	lst.clear();
	cout << endl;
	cout << "------------------------------------------------------------------";
	cout << endl;

	LinkedList<char> lst2;
	lst2.push_back('a');
	lst2.push_back('b');
	lst2.push_back('h');
	lst2.push_back('t');
	lst2.push_front('y');
	cout << "The second list:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	cout << "Size of list2= " << lst2.get_size();
	cout << endl;

	lst2.pop_front();
	cout << "list2 after deleting the first item:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	cout << "List2 output without using the AT function:\n";
	lst2.print_to_console();
	cout << endl;
	lst2.pop_back();
	cout << "List2 after deleting last item:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	lst2.insert(2, 'z');
	cout << "The list2 after adding the number z at index 2 :\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;

	lst2.remove(1);
	cout << "The list after deleting the number at index 1 :\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	lst2.set(1, 'e');
	cout << "List after replacing the number of 1 positions on the symbol e:\n";
	for (size_t i = 0; i < lst2.get_size(); i++)
	{
		cout << lst2.at(i) << " ";
	}
	cout << endl;
	cout << "Deleting second list\n";
	lst2.clear();
	cout << endl;
	cout << "List is empty";
	cout << endl;
	cout << "Bye, Have a nice day!\n";
	cout << endl;
	system("pause");
}