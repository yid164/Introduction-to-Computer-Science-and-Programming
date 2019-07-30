//============================================================================
// Name        : a2q3.cpp
// Author      : Yinsheng Dong
// Student Number     :11148648
// NSID  : yid164
// Lecture Section: CCTP 111 02
// Lab Section: T12
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int people, coins,separation,donation;
	cout<< "how many people are in your group";
	cin>> people;
	cout<< "how many gold coins did you find?";
	cin>>coins;
	separation=coins/people;
	cout<<"coins for each member"<< separation<<endl;
	donation=coins-(people*separation);
	cout<<"coins donated to charity"<<donation<< endl;
	return 0;
}
