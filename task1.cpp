#include <iostream>

using namespace std;

int main()
{
	for(char c = 0; c < 127; c++)
	{
		//casting is to be avoided - in this case we are using it to form a simple example
		//and we are casting from a smaller type to a bigger one (range wise).
		//casting an int variable to the char type might cause data loss for example,
		//since the int range goes beyond that of char.
		cout << (int)c << " - " << c << endl;
	}

	return 0;
}