// 실습 1. 구조체 사용해보기

#include <iostream>
using namespace std;

struct Rectangle
{
	double width, height, result;
};

int main()
{
	Rectangle Rec;

	cout << "가로, 세로 길이를 입력하세요 : ";
	cin >> Rec.width >> Rec.height;

	Rec.result = Rec.width * Rec.height;

	cout << "넓이는 : " << Rec.result << endl;
	
	return 0;
}