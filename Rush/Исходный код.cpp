#include <iostream>
using namespace std;

void rush(int, int);

int main()
{
	int heigth, width;
	cout << "heigth = ";
	cin >> heigth;
	cout << "width = ";
	cin >> width;

    rush(heigth, width);
	system("pause");
    return 0;
}

void rush(int h, int w)
{
    if (h == 1 && w == 1)
    {
    	cout << "O" << endl;
    	return;
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            int sum = i + j;
            if (i % ((w == 1 ? 2 : w) - 1) == 0 && j % ((h == 1 ? 2 : h) - 1) == 0)
                cout << "O";
            else if (i % ((w == 1 ? 2 : w) - 1) == 0)
                cout << '-';
            else if (j % ((h == 1 ? 2 : h) - 1) == 0)
                cout << '|';
            else 
                cout << ' ';
        }
        cout << endl;
    }
}
