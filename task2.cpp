#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int num = 0, sum = 0;

	cout << "Input a number: ";
	cin >> num;

	//in this case the output looks like -1+2-3+4...+n = sum, but other ways of outputing are also acceptable
	for(int i = 1; i <= num; i++)
	{
		const int CURRENT_NUMBER = pow(-1,i)*i;
		sum += CURRENT_NUMBER;
		if(CURRENT_NUMBER > 0) cout << "+";
		cout << CURRENT_NUMBER;
	}

	cout << " = " << sum << endl;
	return 0;
}