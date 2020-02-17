#include <iostream>
#include <clocale>

//����������� �������� ����
int sign_cos(double x, double y, double z)
{
	double res;
	res = (y * y + z * z - x * x) / (2 * y * z);
	if (res < 0)
		return -1; //���� �����
	else if (res == 0)
		return 0; //���� ������
	else
		return 1; //���� ������
}

//�������� �� ������������� ������������
int check(double x, double y, double z)
{
	if ((x < y + z) && (y < x + z) && (z < x + y))
		return 1;
	else
	{
		std::cout << std::endl << "������ ������������ �� ����������!" << std::endl;
		return 0;
	}
}

//����� ���������� � ������������
void print(int x, int y, int z)
{
	std::cout << "����������� ";
	if ((x < 0) || (y < 0) || (z < 0))
		std::cout << "������������";
	else  if (!x || !y || !z)
		std::cout << "�������������";
	else 
		std::cout << "�������������";
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_CTYPE, "rus"); //���������� ���������
	double a, b, c; // ������� ������������
	int aa, bb, cc; // ���� �������������� �������

	//���� ������ ������������
	do
	{
		std::cout << "������� ������� ������������: ";
		std::cin >> a >> b >> c;
	} while (!check(a, b, c));

	//����������� �������� ����
	aa = sign_cos(a, b, c);
	bb = sign_cos(b, a, c);
	cc = sign_cos(c, a, b);

	//����� ���������� � ������������
	print(aa, bb, cc);

	return 0;
}