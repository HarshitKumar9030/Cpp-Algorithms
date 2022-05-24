//String Class

#include <iostream>
#include <bits/stdc++.h>
//or//
#include <string>
using namespace std;

int main()
{
	// 	//declaring the String
	string s1;

	//initializing the string
	s1 = "Apple";		//using assignment Operator
	string s2("Mango"); //by string Method
	string s3;
	s3 = s3 += "Grapes"; //using + operator
	string s4(100, 'a');

	//Printing the string
	cout << s1 << endl;
	cout << s2[0] << " " << s2[1] << " " << endl; //using []
	cout << s3.at(0) << endl;					  //using at() operator
	cout << s4 << endl;

	//iterating the string using iterator
	string::iterator it;
	for (it = s2.begin(); it != s2.end(); it++)
		cout << *it;
	cout << endl;

	//reversing the string using reverse_iterator, rbegin() and rend()
	string::reverse_iterator itr;
	for (itr = s3.rbegin(); itr != s3.rend(); itr++)
		cout << *itr;
	cout << endl;

	//capacity
	cout << "Using size() method length of " << s3 << " is " << s3.size() << endl;	   //finding the size of the string using size Method
	cout << "Using length() method length of " << s3 << " is " << s3.length() << endl; //length of the string using length()
	cout << "Maximum Size of the string " << s3 << " is: " << s3.max_size() << endl;
	cout << "Resize the string " << s3 << " using resize() " << endl;
	s3.resize(6);
	cout << "After resize the size of the s3 " << s3.length() << endl;
	cout << "Before erasing s3 string size is: " << s3.size() << endl;
	s3.clear();
	cout << "After erasing the size of s3 is: " << s3.size() << endl;

	//Modifiers
	string s5;
	//+ operator
	s5 += "Praveen";
	cout << s5 << endl;
	s5.append(" Kumar"); //use of aapend
	cout << s5 << endl;
	//push_back
	s5.push_back(' ');
	s5.push_back('S');
	cout << s5 << endl;
	//insert--> str.insert(position,string/character,upto the size)
	s5.insert(s5.length(), "rivas");
	cout << s5 << endl;

	//erasing the character
	//str.erase(pos) or str.erase(start-pos,end-pos)
	s5.erase(s5.length() - 6, s5.length() + 6);
	cout << s5 << endl;

	//replace the string
	//
	cout << endl
		 << "replace " << endl
		 << endl;
	s5.replace(8, 5, "Srivas");
	cout << s5 << endl;
	//replacing the  character
	s5.replace(8, 1, "$");
	cout << s5 << endl;

	//swaping
	string t1, t2;
	t1 = "C++";
	t2 = "Python";
	cout << t1 << " is Faster then " << t2 << endl;
	t1.swap(t2);
	cout << "after swap" << endl;
	cout << t1 << " is Faster then " << t2 << endl;

	//popback: it will popup the last character
	string ss = "NIT Karnataka";
	cout << ss << endl;
	ss.pop_back();
	cout << ss << endl;

	//string operation
	//find
	string str = "Praveen kumar is in NIT Karnataka";
	//finding "is" in the str
	if (str.find("is") != string::npos)
		cout << "Yes at index: " << str.find("is") << endl;
	else
		cout << "No available" << endl;

	//find_first_of usage
	cout << str << endl;
	size_t f = str.find_first_of("aeiou");
	while (f != string::npos)
	{
		str[f] = '#';
		f = str.find_first_of("aeiou", f + 1);
	}
	cout << str << endl;

	//compare function
	string t1, t2;
	t1 = "Python3";
	t2 = "Python";
	if (t1.compare(t2) == 0)
		cout << "Both strings are equal" << endl;
	else if (t1.compare(t2) > 0)
		cout << t1 << " is greater then " << t2 << endl;
	else
		cout << t2 << " is greater then " << t1 << endl;

	if (t2.compare(0, 5, t1, 0, 5) == 0)
		cout << t2 << " part of both the strings are same" << endl;

	//substr
	string str1 = "Praveen kumar";
	string ss = str1.substr(8, 5);
	cout << ss + " Viswas" << endl;

	return 0;
}
