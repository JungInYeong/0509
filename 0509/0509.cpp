// �ǽ� 1. ����ü ����غ���

#include <iostream>
using namespace std;

struct Rectangle
{
	double width, height, result;
};

int main()
{
	Rectangle Rec;

	cout << "����, ���� ���̸� �Է��ϼ��� : ";
	cin >> Rec.width >> Rec.height;

	Rec.result = Rec.width * Rec.height;

	cout << "���̴� : " << Rec.result << endl;
	
	return 0;
}