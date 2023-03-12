#include <bits/stdc++.h>
using namespace std;

int main()
{
	int thuesuat;
	float luong, sothue, luongrong = 0;
	cin >> luong;
	if (luong > 15)
	{
		sothue = luong *0.3;
		thuesuat = 30;
	}
	else if (luong >= 7)
	{
		sothue = luong *0.2;
		thuesuat = 20;
	}
	else
	{
		sothue = luong *0.1;
		thuesuat = 10;
	}

	luongrong = luong - sothue;
	cout << "So thue " << sothue << endl;
	cout << "Tien luong thu nhap thuc su " << luongrong << endl;
	return 0;
}