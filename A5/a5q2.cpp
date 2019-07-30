//============================================================================
// Name        : a5q2.cpp
// Author      : Yinsheng Dong
// Student Number :11148648
// NSID: yid164
// Lecture Section: CCPT 111 02
// TUT Section: T12
//============================================================================

#include <iostream>
#include <math.h>

using namespace std;


void integers(int N);
void integers(int N){
	int a=1;
	int b=1;
	while(b<N){
		cout<<""<<b<<" + ";
		b=b+1;
		a=a+b;
	}
	if(b==N){
		cout<<""<<N<<" = "<<a<<endl;
	}
}

void powers(int N);
void powers(int N){
	int a=0;
	int b=0;
	while(b<(N-1)){
		int c=pow(2,b);
		cout<<""<<c<<" + ";
		b=b+1;
		a=a+c;
	}
	if(b==(N-1)){
		cout<<""<<pow(2,b)<<" = "<<(a+(pow(2,b)))<<" "<<endl;
	}
}


void inverse(int N);
void inverse(int N){
	float a=0;
	int b=0;
	while(b<(N-1)){
		float c=pow(0.5,b);
		cout<<""<<c<<" + ";
		b=b+1;
		a=a+c;
	}
	if(b==(N-1)){
		cout<<""<<pow(0.5,b)<<" = "<<(a+(pow(0.5,b)))<<" "<<endl;
	}
}


void product(int N);
void product(int N){
	int a=1;
	int b=1;
	while(b<N){
		cout<<""<<b<<" * ";
		b=b+1;
		a=b*a;
	}
	if (b==N){
		cout<<""<<N<<" = "<<a<<endl;
	}
}




int main() {
	int N;
	cout<<"Input N:";
	cin>>N;
	integers(N);
	powers(N);
	inverse(N);
	product(N);

	return 0;
}
