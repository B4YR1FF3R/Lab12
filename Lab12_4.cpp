#include <iostream>

using namespace std;

// ประกาศตัวแปร
template <typename T>
void mySwap(T &, T &);

int main()
{
	// ประกาศตัวแปร
    int x, y;
	string a, b;
	char p, q;

	// รับค่า
    cin >> x >> y >> a >> b >> p >> q;

	// สลับตัว x , y
    // โชว์ตัวก่อนสลับ
    cout << "Before swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";
	mySwap(x, y);
    // หลังสลับ
	cout << "After swapping:\n";
	cout << "x = " << x << ", y = " << y << "\n";

	// สลับตัว a , b
    // โชว์ตัวก่อนสลับ
    cout << "Before swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";
	mySwap(a, b);
    // หลังสลับ
	cout << "After swapping:\n";
	cout << "a = " << a << ", b = " << b << "\n";

	// สลับตัว p , q
    // โชว์ตัวก่อนสลับ
    cout << "Before swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";
	mySwap(p, q);
    // หลังสลับ
	cout << "After swapping:\n";
	cout << "p = " << p << ", q = " << q << "\n";

	return 0;
}

// กระบวนการสลับตัว
template <typename T>
void mySwap(T &x, T &y)
{
	T swap = x;
	x = y;
	y = swap;
}