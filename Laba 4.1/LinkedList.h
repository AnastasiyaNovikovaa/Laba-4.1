#pragma once
#include <stdexcept>
#include "Iterator.h"

using namespace std;
template <class  T>
	
class LinkedList {
	public:	
		class Node
		{
		public:
			friend LinkedList<T>;

			Node(T data, Node * next = nullptr, Node * prev = nullptr) {
				this->data = data;
				this->next = next;
				this->prev = prev;
			};

			~Node()
			{
				next = nullptr;
				delete next;
				prev = nullptr;
				delete prev;
			};

			T data;
			Node* next;
			Node* prev;
		};

		
		Node * head;
		Node * tail;
		class ListIterator : public Iterator<T>
		{
		public:
			ListIterator(Node* head)
			{
				current = head;
			};

		private:
			T next() override;
			bool has_next() override;
			Node* current;
		};
		
		Iterator<T>* create_list_iterator() const;
		
		


		/*friend std::ostream& operator<<(std::ostream& os, const LinkedList<T>& linked_list) {
			if (linked_list.size == 0)
				return os << "[nullptr]";
			auto * list = linked_list.create_list_iterator();
			os << "[nullptr] <- ";
			while (list->has_next()) {
				os << "[" << list->next() << "] <- ";
			}
			os << "[nullptr]" << std::endl;
			return os;
		};*/


	
public:
		LinkedList();
		~LinkedList();
		void push_back(T newElem);             // push in back of list
		void push_front(T newElem);           // push in front of list
		void insert(size_t index, T newElem); // adding element 
		T at(size_t index) const;
		void remove(size_t index);            // delete element 
		size_t get_size() const;
		void pop_back();                       // delete last element
		void pop_front();                      // delete first element 
		void print_to_console();              
		void clear();                         // delete all list
		void set(size_t index, T newElem) const; 
		bool equals(LinkedList<T> * list);
		void add_first(T newElem);             // adding first element
		void reset_list();
		size_t size;
		bool isEmpty();
		void swap(Node*, Node*);
		void sortPart(int fromIndex, int toIndex, bool(*comp)(T, T));
		void sort(bool (*comp)(T, T));
		
		friend std::ostream& operator<<(std::ostream& Out, const LinkedList<T>& list) {
		
			auto current = list.head;
			while (current != NULL) {
				Out << current->data << " ";
				current = current->next;

			}
			return Out;
		}
	};
