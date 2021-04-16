#include "Long.h"
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string t;
	do {
		try {
			cout << " Log in: ";  getline(cin, t);
			Long pair1(t), pair2(t);
			cout << " Number of elements: " << Object::Counter() << endl;

			cout << " pair (a,b) - ?"; cin >> pair1;
			cout << " ( a , b )";
			cout << pair1;

			cout << " pair (c,d) - ?"; cin >> pair2;
			cout << " ( c , d )";
			cout << pair2;

			Pair a = pair1 + pair2;
			cout << "(a, b) + (c, d) = (a + c), (b + d)";
			cout << a;

			Long b = pair1 * pair2;
			cout << "(a, b) * (c, d) = (a * c), (b * d)";
			cout << b;

			Long c = pair1 - pair2;
			cout << "(a, b) - (c, d) = (a - c), (b - d)";
			cout << c;
		}
		catch (string s)
		{
			cout << s << endl;
			cout << " Рахуй сам " << endl;
		}

	} while (t != "123");

	try { Pair t(-10, 4); }
	catch (MyException q) { cout << " Error [0] " << q.What() << endl; }

	try { Pair u(10, 4); }
	catch (exception& w) { cout << " Error [1] &  " << w.what() << endl; }

	try { Pair i(4, -10); }
	catch (bad_exception& e) { cout << " Error [2] & " << e.what() << " Second pair <= -10 " << endl; }

	try { Pair o(1, 10); }
	catch (bad_exception* r) { cout << " Error [3] * " << r->what() << " Second pair >= 10 " << endl; }

	cout << " Number of elements: " << Object::Counter() << endl;
	cout << endl << " Size of class Long: " << sizeof(Long) << endl;

	return 0;
}