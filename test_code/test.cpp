#include <iostream>

using namespace std;

template <typename T>
T ADD(T num1, T num2)
{
	return num1+num2;
}

int main(void){
	cout<< ADD<int>(15, 20)<<endl;
	cout<< ADD<double>(2.9, 3.7)<<endl;
	return 0;
}
