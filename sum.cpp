#include <iostream>
#include <memory>

using namespace std;

int numbers(int begin, int end){
	int sum = 0;
	
	for(int i = begin; i <= end; i++) sum += i;
	
	return sum;
}

int main()
{
	int begin= 0, end = 10;
	
	cout << "sum of numbers from " << begin << " to " << end << " is " << numbers(begin, end);
	
	return 0;
}
