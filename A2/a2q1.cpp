//============================================================================
// Name        : a2q1.cpp
// Author      : Yinsheng Dong
// Student Number     :11148648
// NSID  : yid164
// Lecture Section: CCTP 111 02
// Lab Section: T12
//============================================================================

#include <iostream>
using namespace std;

int main() {
	double cost, tip, total; int percentage;
	cout << "Enter the cost of your meal";
	cin >> cost;
	cout << "What percentage of tip would you like to leave?";
	cin >> percentage;
	tip=0.01*cost*percentage;
	cout<<"The value of your tip is"<<tip<<endl;
	total=cost+tip;
	cout << "your total cost will be"<<total<<endl;
	return 0;
}
