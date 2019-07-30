foo//============================================================================
// Name        : a2q4.cpp
// Author      : Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section  :CCPT 111 02
// Lab Sction: T12
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string food, letter; int integer; float number;
	cout << "Please give me something you might eat";
	cin >> food;
	cout << "Please give me an integer";
	cin >> integer;
	cout << "Please give me a capital letter";
	cin >> letter;
	cout <<"Please give me a floating point number between 0 and 100";
	cin >> number;
	cout << "Bear is a cute animal who loves to eat"<< " "<<food<<"One day,he ate "<<integer<<food<< "for his lunch! After that, his tummy hurt and he had a fever of"<<number<<"degree. Powerful Bear ";
	cout << "This story was brought to you by the letter"<<letter<<endl;
	return 0;
}
