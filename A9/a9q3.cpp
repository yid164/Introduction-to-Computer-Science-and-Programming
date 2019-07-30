//============================================================================
// Name: a9q3
// Author      : Yinsheng Dong
// Student Number :11148648
// NSID: yid164
// Lecture Section: CCPT 111 02
// TUT Section: T12
//============================================================================

#include <iostream>
using namespace std;

///////////////////////////////////////////////////////////////
// You shouldn't need to change the following.
///////////////////////////////////////////////////////////////

struct Date {
	int day;
	int month;
	int year;
};

void printDate(Date d)
{
	string monthnames[12] = {"January", "February", "March", "April", "May", "June",
							"July", "August", "September", "October", "November", "December"};
	cout << monthnames[d.month-1] << " " << d.day << " " << d.year;
}

void printDateArray(Date d[], int size)
{
	for (int i = 0; i < size; i = i + 1)
	{
		printDate(d[i]);
		cout << endl;
	}
}

//////////////////////////////////////////////////////////////////
// Your work will be below this line
//////////////////////////////////////////////////////////////////

// Returns true if d1 and d2 represent the same date, and false otherwise
bool equal(Date d1, Date d2)
{
	// TODO: write this function
	if(d1.day==d2.day && d1.month==d2.month && d1.year==d2.year){
		return true;
	}
	return false;
}

// Returns true if the date d1 is before d2, and false otherwise
bool before(Date d1, Date d2)
{
	// TODO: write this function
	if(d1.year<d2.year){
		return true;
	}
	if(d1.year==d2.year){
		if(d1.month<d2.month){
			return true;
		}
		else if(d1.month==d2.month){
			if(d1.day<d2.day){
				return true;
			}
		}
	}
	return false;
}

// sorts in ascending order the array of Dates d with the given size
void sort(Date d[], int size)
{
	// TODO: complete this function with the sorting algorithm of your choice
	Date o;
	for(int a=0; a<size; a++){
		for(int i= a+1; i<size; ++i){
			if(before(d[i],d[a])==true){
				o=d[a];
				d[a]=d[i];
				d[i]= o;
			}
		}
	}
}

// returns true if the target Date exists in darray and false otherwise
// linear search is used to search the array
bool linearSearch(Date target, Date darray[], int size)
{
	// TODO: complete this function
	for(int i=0; i< size; ++i){
		if(darray[i].day==target.day && darray[i].month==target.month && darray[i].year==target.year){
			return true;
		}
	}
	return false;
}


// returns true if the target Date exists in darray and false otherwise
// darray is assumed to be sorted in ascending order
// binary search is used to search the array
bool binarySearch(Date target, Date darray[], int size)
{
	// TODO: complete this function.  You are allowed to change the function header
	// if you prefer to implement the recursive version of binary search
	int a=0;
	int b=size-1;
	int c;
	while(a<=b){
		c=(a+b)/2;
		if(equal(darray[c],target)==true){
			return true;
		}
		else if(before(target,darray[c])==true){
			b=c-1;
		}
		else{
			a=c+1;
		}
	}
	return false;
}


int main() {

	// A basic array of Dates for quick testing.  You can modify and expand this to
	// make your tests more rigorous
	int size = 5;
	Date dateArray[5] = {{2,12,2015},{4,10,1999},{5,5,1993},{7,11,2008},{7,12,2009}};
	printDateArray(dateArray, size);
	sort(dateArray, size);
	cout<<endl;
	cout<<"After sorting"<<endl;
	printDateArray(dateArray,size);
	cout<<endl;
	Date d={2,12,2015};
	if(linearSearch(d,dateArray,size)==true){
		cout<<"Date is found"<<endl;
	}
	else{
		cout<<"Date is not found"<<endl;
		}
	cout<<endl;
	if(binarySearch(d,dateArray,size)==true){
		cout<<"Date is present"<<endl;
	}
	else{
		cout<<"Date is not present"<<endl;
	}


	return 0;
}
