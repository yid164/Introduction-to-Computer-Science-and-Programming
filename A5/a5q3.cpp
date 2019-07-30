//============================================================================
// Name        : a5q3.cpp
// Author      : Yinsheng Dong
// Student Number :11148648
// NSID: yid164
// Lecture Section: CCPT 111 02
// TUT Section: T12
//============================================================================

#include <iostream>
using namespace std;

void deleteFromArray(int arr[], int size);
void deleteFromArray(int arr[], int size){
	char a='y';
	int n;
	while(a !='n'){
		cout<<"Array : {";
		for(int i=0; i<(size-1);i++){
			cout<<""<<arr[i]<<" ,";
		}
		cout<<""<<arr[size-1]<< "}"<<endl;
		cout<<"want to delete something?(y/n)";
		cin>>a;
		if(a=='n'){
			cout<<"Goodbye!";

		}
		else if(a=='y')
		{
			cout<<"offset to delete?";
			cin>>n;
			if(n<size){
				size=size-1;
				for(int x=n; x<size;x++){
					arr[x]=arr[x+1];
				}
			}
				else{
					cout<<"sorry, can not delete that."<<endl;

				}
		}
	}

}

int main() {
	int myValues[10]={0,1,1,2,3,5,8,13,21,34};
	int arraySize=10;
	deleteFromArray(myValues, arraySize);

	return 0;
}
