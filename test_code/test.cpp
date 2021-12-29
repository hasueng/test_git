#include <iostream>

using namespace std;

template <typename T>
T ADD(T num1, T num2)
{
	return num1+num2;
}

class Point 
{
	private:
		int xpos, ypos;
	public:
		Point(int x=0, int y=0) : xpos(x), ypos(y)
	{}
		void showPosition() const
		{
			cout<<'['<<xpos<<", "<<ypos<<']'<<endl;
		}
};

int main(void){
	cout<< ADD<int>(15, 20)<<endl;
	cout<< ADD<double>(2.9, 3.7)<<endl;
<<<<<<< HEAD
	cout<<"o/main branch is here"<<endl;
=======
	Point p(1, 3);
	p.showPosition();
>>>>>>> branch_test
	return 0;
}
