#include <iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int v[100], n, nr;
void search(int i, int j)
{
	int m = (i + j) / 2;
	if (nr == v[m])
		cout << "found, index=" << m;
	else
		if (i < j)
			if (nr < v[m])
				search(i, m);
			else search(m + 1, j);
		else cout << "404 not found.";
}

int main()
{
	cout << "n="; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "v[" << i << "]="; cin >> v[i];
	}
	cout << "nr="; cin >> nr;
	search(0, n);
	getchar();
	return 0;
}