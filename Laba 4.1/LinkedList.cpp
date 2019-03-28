//#include "pch.h"
#include "LinkedList.h"
#include <stdexcept>
#include <iostream>
 
using namespace std;
    template <class  T>
	void LinkedList<T>::reset_list()
	{
		head = nullptr;
		tail = nullptr;
		size = 0;
	}

	template <class  T>
	LinkedList<T>::LinkedList()
	{
		reset_list();
	}

	template <class  T>
	LinkedList<T>::~LinkedList()    // destructor
	{
		clear();
	}


	template <class  T>
	void LinkedList<T>::add_first(T newElem)
	{
		head = new Node(newElem);
		tail = head;
		size = 1;
	}

	template <class  T>
	size_t LinkedList<T>::get_size() const
	{
		return size;
	}

	template <class  T>
	void LinkedList<T>::clear()
	{
		if (size == 0) return;

		if (size == 1) {
			reset_list();
			delete head;
			delete tail;
		}
		else {
			while (head != nullptr) {
				pop_front();
			}
			reset_list();
			delete head;
			delete tail;
		}
	}

	template <class  T>
	void LinkedList<T>::set(size_t index, T newElem) const
	{
		if (index >= size) {
			throw std::out_of_range("Index is greater than list size");
		}
		else {
			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			current->data = newElem;
		}
	}

	/*template <class  T>
	bool LinkedList<T>::isEmpty() const
	{
		return size == 0;
	}*/

	template <class  T>
	void LinkedList<T>::print_to_console()
	{
		Node * current = head;
		while (current != NULL) {
			cout << current->data << " ";
			current = current->next;

		}
	}

	template <class  T>
	void LinkedList<T>::push_back(T newElem)
	{
		if (size == 0) {
			add_first(newElem);
		}
		else {
			tail->next = new Node(newElem, nullptr, tail);
			tail = tail->next;
			size++;
		}
	}

	template <class  T>
	void LinkedList<T>::push_front(T newElem)
	{
		if (size == 0) {
			add_first(newElem);
		}
		else {
			head = new Node(newElem, head, nullptr);
			size++;
		}
	}

	template <class  T>
	void LinkedList<T>::pop_back()
	{
		if (size == 0) return;

		if (size == 1) {
			reset_list();
			delete head;
			delete tail;
		}
		else {
			Node * current = tail->prev;
			current->next = nullptr;
			delete tail;
			tail = current;
			size--;
		}
	}

	template <class  T>
	void LinkedList<T>::pop_front()
	{
		if (size == 0) return;

		if (size == 1) {
			reset_list();
			delete head;
			delete tail;
		}
		else {
			Node * current = head->next;
			delete head;
			head = current;
			size--;
		}
	}

	template <class  T>
	void LinkedList<T>::insert(size_t index, T newElem)
	{
		if (index > size) {
			throw std::out_of_range("Index is greater than size of list. Sorry :ñ ");
		}
		else {
			if (size == 0 && index == 0) // if first element and list is empty
			{
				add_first(newElem);
				return;
			}
			if (index == 0)              //if first element
			{
				push_front(newElem);
				return;
			}
			if (index == size)          // if tail element
			{
				push_back(newElem);
				return;
			}
			size_t counter = 0;
			Node* current = head;
			Node * prev = nullptr;
			while (counter != index) {
				prev = current;
				current = current->next;
				counter++;
			}
			current = new Node(newElem, current, prev);
			if (prev != nullptr) {
				prev->next = current;
			}
			else
			{
				head = current;
			}
			size++;
		}
	}

	template <class  T>
	T LinkedList<T>::at(size_t index) const
	{
		if (index >= size) {
			throw std::out_of_range("Index is greater than size of list ");
		}
		else {
			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			return current->data;
		}
	}

	template <class  T>
	void LinkedList<T>::remove(size_t index)
	{
		if (index > size) {
			throw std::out_of_range("Index is greater than size of list, very very bad");
		}
		else {
			if (size == 0)
			{
				return;
			}
			if (index == 0)
			{
				pop_front();
				return;
			}
			if (index == size - 1)
			{
				pop_back();
				return;
			}
			size_t counter = 0;
			Node * current = head;
			while (counter != index) {
				current = current->next;
				counter++;
			}
			current->prev->next = current->next;
			current->next->prev = current->prev;
			delete current;
			size--;
		}
	}

	template <class  T>
	bool LinkedList<T>::equals(LinkedList<T> * list) 
	{
			if (size != list->size)
				return false;
			for (int i = 0; i < size; i++)
			{
				if (at(i) != list->at(i))
					return false;
			}
			return true;
	}

	template <class  T>
	bool LinkedList<T>::isEmpty()
	{
		if (size == 0)
			return true;
		else
			return false;
	}
