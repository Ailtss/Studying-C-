#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[])
{
	shared_ptr<int> pointer1 = make_shared<int>(10);

	cout << (*pointer1) << endl;
	return 0;
}