#include <iostream>

using namespace std;

// ประกาศตัวแปร
void mySwap(int &, int &);

int main()
{
	// ประกาศตัวแปร
    int x, y;
	cin >> x >> y;
    // โชว์ตัวก่อนสลับร่าง
	cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x, y);
    // หลังสลับร่าง
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";

	return 0;
}

// กระบวนการสลับร่าง
void mySwap(int &x, int &y)
{
	int swap = x;
	x = y;
	y = swap;
}