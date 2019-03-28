#include "stdafx.h"
#include "CppUnitTest.h"
#include <stdexcept>
#include "../Laba 4.1/LinkedList.h"
#include "../Laba 4.1/LinkedList.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_for_lab_41
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		//int
		TEST_METHOD(Empty_or_not_true)
		{
			LinkedList<int> List;
			Assert::IsTrue(List.isEmpty());
		}
		TEST_METHOD(Empty_or_not_false)
		{
			LinkedList<int> List;
			List.push_front(5);
			Assert::IsFalse(List.isEmpty());
		}
		TEST_METHOD(equals_or_not_push_back)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(equals_or_not_combi_push)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_front(4);
			List2.push_front(3);
			List2.push_front(2);
			List2.push_front(1);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(at_last_item)
		{

			LinkedList<int>List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(3) == 4);
		}
		TEST_METHOD(at_first_item)
		{

			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(0) == 1);
		}
		TEST_METHOD(at_middle_item)
		{

			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(2) == 3);
		}
		TEST_METHOD(get_size_true_EMPTY_list)
		{
			LinkedList<int> List;
			Assert::IsTrue(List.get_size() == 0);
		}
		TEST_METHOD(get_size_true)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);

			Assert::IsTrue(List.get_size() == 3);
		}
		TEST_METHOD(get_size_false)
		{
			LinkedList<int> List;
			List.push_back(0);
			List.push_back(5);
			List.push_front(2
			);
			List.push_front(4);
			Assert::IsFalse(List.get_size() == 1);
		}
		TEST_METHOD(push_front_list_true)
		{
			LinkedList<int> List;
			List.push_front(1);
			List.push_front(2);
			List.push_front(3);
			List.push_front(4);

			Assert::IsTrue(List.at(3) == 1);
		}
		TEST_METHOD(push_front_list_false)
		{
			LinkedList<int> List;
			List.push_front(1);
			List.push_front(2);
			List.push_front(3);
			List.push_front(4);

			Assert::IsFalse(List.at(3) == 4);
		}
		TEST_METHOD(push_back_List_true)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsTrue(List.at(3) == 4);
		}
		TEST_METHOD(push_back_List_false)
		{
			LinkedList<int> List;
			List.push_back(1);
			List.push_back(2);
			List.push_back(3);
			List.push_back(4);

			Assert::IsFalse(List.at(3) == 3);
		}
		TEST_METHOD(equals_or_not_back_false)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);


			LinkedList<int> List2;
			List2.push_back(1);


			Assert::IsFalse(List1.equals(&List2));
		}
		TEST_METHOD(equals_or_not_combine_false)
		{
			LinkedList<int> List1;
			List1.push_front(1);
			List1.push_front(2);
			List1.push_back(3);


			LinkedList<int> List2;
			List2.push_front(1);


			Assert::IsFalse(List1.equals(&List2));
		}
		TEST_METHOD(equals_pop_back)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);

			List1.pop_back();

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(equals_pop_front)
		{
			LinkedList<int> List1;
			List1.push_front(5);
			List1.push_front(1);
			List1.push_front(2);
			List1.push_front(3);


			LinkedList<int> List2;
			List2.push_front(1);
			List2.push_front(2);
			List2.push_front(3);

			List1.pop_front();

			Assert::IsFalse(List1.equals(&List2));
		}
		TEST_METHOD(insert_equals_0_posotion)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;

			List2.push_back(3);
			List2.push_back(4);

			List2.insert(0, 1);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_equals)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(3);
			List1.push_back(4);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			List1.insert(1, 2);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(insert_back_equals)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);

			LinkedList<int> List2;
			List2.push_back(1);
			List2.push_back(2);
			List2.push_back(3);
			List2.push_back(4);

			List1.insert(1, 4);

			Assert::IsFalse(List1.equals(&List2));
		}
		TEST_METHOD(clear_list_not_empty)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.clear();
			Assert::IsTrue(List1.isEmpty());

		}
		TEST_METHOD(clear_list_empty)
		{
			LinkedList<int> List;
			List.clear();
			Assert::IsTrue(List.isEmpty());
		}
		TEST_METHOD(set_in_List_true)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.set(1, 8);
			Assert::IsTrue(List1.at(1) == 8);
		}
		TEST_METHOD(set_in_List_false)
		{
			LinkedList<int> List1;
			List1.push_back(1);
			List1.push_back(2);
			List1.push_back(3);
			List1.set(1, 9);
			Assert::IsFalse(List1.at(1) == 1);
		}
		TEST_METHOD(delete_middle_item)
		{
			LinkedList<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(2);

			Assert::IsTrue(list1.equals(&list2));
		}
		TEST_METHOD(delete_first_item)
		{
			LinkedList<int> list1;
			list1.push_back(5);
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(0);

			Assert::IsTrue(list1.equals(&list2));
		}
		TEST_METHOD(delete_false)
		{
			LinkedList<int> list1;
			list1.push_back(1);
			list1.push_back(2);
			list1.push_back(3);
			list1.push_back(4);

			LinkedList<int> list2;
			list2.push_back(1);
			list2.push_back(2);
			list2.push_back(4);

			list1.remove(1);

			Assert::IsFalse(list1.equals(&list2));
		}
		TEST_METHOD(clear_list)
		{
			LinkedList<int> List1;
			List1.push_back(4);
			List1.push_back(2);
			List1.push_back(3);
			List1.clear();
			List1.push_back(6);
			Assert::IsFalse(List1.isEmpty());

		}
		TEST_METHOD(insert_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.insert(1, 5);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than list size", error.what());
			}


		}
		TEST_METHOD(delete_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.remove(5);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than size of list, very very bad", error.what());
			}


		}
		TEST_METHOD(set_huge_index_iskl)
		{
			LinkedList<int> list;
			list.push_back(3);
			list.push_back(4);
			char error;
			try
			{
				list.set(5, 1);
			}
			catch (const std::out_of_range& error)
			{

				Assert::AreEqual("Index is greater than list size", error.what());
			}


		}

		//char
		TEST_METHOD(Empty_or_not_true_char)
		{
			LinkedList<char> List;
			Assert::IsTrue(List.isEmpty());
		}
		TEST_METHOD(Empty_or_not_false_char)
		{
			LinkedList<char> List;
			List.push_front('a');
			Assert::IsFalse(List.isEmpty());
		}
	    TEST_METHOD(at_first_item_char)
		{

			LinkedList<char> List;
			List.push_back('a');
			List.push_back('c');
			List.push_back('v');
			List.push_back('f');

			Assert::IsTrue(List.at(0) == 'a');
		}
		TEST_METHOD(at_middle_item_char)
		{

			LinkedList<char> List;
			List.push_back('a');
			List.push_back('c');
			List.push_back('v');
			List.push_back('f');

			Assert::IsTrue(List.at(2) == 'v');
		}
		TEST_METHOD(get_size_true_EMPTY_list_char)
		{
			LinkedList<char> List3;
			Assert::IsTrue(List3.get_size() == 0);
		}
		TEST_METHOD(get_size_true_char)
		{
			LinkedList<char> List3;
			List3.push_back('a');
			List3.push_back('c');
			List3.push_back('v');

			Assert::IsTrue(List3.get_size() == 3);
		}
		TEST_METHOD(push_back_List_true_char)
		{
			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('c');
			List2.push_back('v');

			Assert::IsTrue(List2.at(2) == 'v');
		}
		TEST_METHOD(equals_or_not_back_false_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('c');
			List1.push_back('v');


			LinkedList<char> List2;
			List2.push_back('a');
			


			Assert::IsFalse(List1.equals(&List2));
		}
		TEST_METHOD(equals_pop_back_char)
		{
			LinkedList<char> List3;
			List3.push_back('a');
			List3.push_back('c');
			List3.push_back('v');
			List3.push_back('x');
			
			LinkedList<char> List4;
			List4.push_back('a');
			List4.push_back('c');
			List4.push_back('v');

			List3.pop_back();

			Assert::IsTrue(List4.equals(&List3));
		}
	    TEST_METHOD(clear_list_empty_char)
		{
			LinkedList<char> List3;
			List3.clear();
			Assert::IsTrue(List3.isEmpty());
		}
		TEST_METHOD(set_in_List_true_char)
		{
			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('c');
			List2.push_back('v');
			List2.set(1, 's');
			Assert::IsTrue(List2.at(1) == 's');
		}
		TEST_METHOD(delete_middle_item_char)
		{
			LinkedList<char> List1;
			List1.push_back('a');
			List1.push_back('c');
			List1.push_back('v');
			List1.push_back('z');
			

			LinkedList<char> List2;
			List2.push_back('a');
			List2.push_back('c');
			List2.push_back('v');

			List1.remove(3);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(delete_first_item_char)
		{
			LinkedList<char> List3;
			List3.push_back('v');
			List3.push_back('a');
			List3.push_back('c');
			List3.push_back('v');
			


			LinkedList<char> List4;
			List4.push_back('a');
			List4.push_back('c');
			List4.push_back('v');

			List3.remove(0);

			Assert::IsTrue(List3.equals(&List4));
		}
		TEST_METHOD(clear_list_char)
		{
			LinkedList<char> List1;
			List1.push_back('v');
			List1.push_back('a');
			List1.push_back('c');
			List1.push_back('v');
			List1.clear();
			
			List1.push_back('v');
			Assert::IsFalse(List1.isEmpty());

		}
		
		//double
		TEST_METHOD(Empty_or_not_false_double)
		{
			LinkedList<double> List;
			List.push_front(5.1);
			Assert::IsFalse(List.isEmpty());
		}
		TEST_METHOD(equals_or_not_push_back_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.9);
			List1.push_back(2.9);
			List1.push_back(3.9);
			List1.push_back(4.9);

			LinkedList<double> List2;
			List2.push_back(1.9);
			List2.push_back(2.9);
			List2.push_back(3.9);
			List2.push_back(4.9);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(equals_or_not_combine_push_double)
		{
			LinkedList<double> List1;
			List1.push_back(1.9);
			List1.push_back(2.9);
			List1.push_back(3.9);
			List1.push_back(4.9);

			LinkedList<double> List2;
			List2.push_front(4.9);
			List2.push_front(3.9);
			List2.push_front(2.9);
			List2.push_front(1.9);

			Assert::IsTrue(List1.equals(&List2));
		}
		TEST_METHOD(at_last_item_double)
		{

			LinkedList<double>List;
			List.push_back(1.9);
			List.push_back(2.9);
			List.push_back(3.9);
			List.push_back(4.9);

			Assert::IsTrue(List.at(3) == 4.9);
		}
			
	};
}