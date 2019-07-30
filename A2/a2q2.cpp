//============================================================================
// Name        : a2q2.cpp
// Author      : Yinsheng Dong
// Student Number     :11148648
// NSID  : yid164
// Lecture Section: CCTP 111 02
// Lab Section: T12
//============================================================================
#include <iostream>
using namespace std;

int main() {

	float baseMark = 75.0;  // base mark on assignment
	float bonusMark = 2.5;  // bonus marks earned on assignment
	float maxMarks = 100.0; // maximum base mark on assignment

	float finalGradeWeight = 5.0;   // Value of the assignment as a precentage of final grade.

	float finalMarkContribution = (baseMark + bonusMark) / maxMarks * finalGradeWeight;

	cout << "The contribution to your final grade is: " << finalMarkContribution << endl;

	return 0;
}
