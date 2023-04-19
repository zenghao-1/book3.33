#include <iostream>
using namespace std;

class book
{
private:
	int qu;
	int price;
public:
	book(int x);
	int get_qu()
	{
		return qu;
	}
	int get_price()
	{
		price = 10 * qu;
		return price;
	}
};

int main()
{
	book B[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		cout << B[i].get_qu() <<"    " << B[i].get_price() << endl;
	}
	
}

book::book(int x)
{
	qu = x;
}





