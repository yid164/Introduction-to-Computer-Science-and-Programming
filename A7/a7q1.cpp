//============================================================================
// Name        : a7q1.cpp
// Author      : Yinsheng Dong
// Student Number :11148648
// NSID: yid164
// Lecture Section: CCPT 111 02
// TUT Section: T12
//============================================================================

#include <iostream>
using namespace std;

void row (int N){
	char a='*';
	char b='+';
	if(N>0){
		N=N-1;
		cout<<a;
		row(N);
		cout<<endl<<b;
		return;
	}
	else{
		return;
	}
}

int main() {
	int N;
	cout<<"N=";
	cin>>N;
	row(N);
	return 0;
}
