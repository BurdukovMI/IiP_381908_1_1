#include <clocale>
#include <iostream>

using namespace std;

void triangle(int ta, int tb, int tc) // ������� ��� ����������� ���� ������������
{
	if (ta > tb + tc)
		cout << "����������� �� ����������";
	else
		if ((ta * ta) == (tb * tb + tc * tc))
			cout << "������������� �����������";
		else
			if ((ta * ta) > (tb * tb + tc * tc))
				cout << "������������ �����������";
			else
				cout << "������������� �����������";
}

int main()
{
	setlocale(LC_CTYPE, "Russian");

	int a, b, c; // ������� ������������

	cout << "������� �������� ������ ����������� � ������� ��������: ";
	cin >> a >> b >> c;

	triangle(a, b, c);

	return 0;
}