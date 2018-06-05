#include <iostream>
#include "question2.h"
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	getTogether<int> teste(2, 3);
	getTogether<int> teste4(1, 1);
	//getTogether<float> teste2(2.5, 1.5);
	//getTogether<string> teste3("Ailton", " Gabriel");

	//cout << teste.getResult() << endl;
	//cout << teste2.getResult() << endl;
	//cout << teste3.getResult() << endl;

	//getTogether<int> teste;
	//getTogether<float> teste2;
	//getTogether<string> teste3;

	//cin >> teste3;

	getTogether<int> teste5(teste+teste4);
    
	cout << teste5;
	//cout << teste2;
	//cout << teste3;
	return 0;
}