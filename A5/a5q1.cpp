//============================================================================
// Name        : a5q1.cpp
// Author      : Yinsheng Dong
// Student Number :11148648
// NSID: yid164
// Lecture Section: CCPT 111 02
// TUT Section: T12
//============================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int Small=0;
	int Big=0;
	int Medium=0;
	while(Small+Big+Medium!=100){
		int number=(rand()%100)+1;
		if(number<10){
			Small++;
		}
		if(number>90){
			Big++;
		}
		if((number>=10)&&(number<=90)){
			Medium++;
		}

	}
	cout<<"It's time to make some random numbers!"<<endl;
	cout<<"There were"<<Small<<"small numbers."<<endl;
	cout<<"There were"<<Big<<"big number."<<endl;
	cout<<"There were"<<Medium<<"medium number"<<endl;

	return 0;
}
