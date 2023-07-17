//Program to Count the number of objects using the Static member function
//For explanation of this program go to Efficient Learning world my youtube channel.
#include <iostream>
using namespace std;
class test {
	static int objectCount;
public:
	test()
	{
	objectCount = objectCount+1;
	}
	~test()
	{
	--objectCount;
	}
	static void printObjCount()
	{
		cout << "Total Created Objects :" << objectCount<< "\n";
	}
};
int test::objectCount=0;
int main()
{
	test t1;
	test::printObjCount();
    test t2;
	test::printObjCount();
	test t3;
    test::printObjCount();
	return 0;
}
