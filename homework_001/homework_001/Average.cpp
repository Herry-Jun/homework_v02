#include <iostream>
using namespace std;

// 사용자로부터 5개의 숫자를 입력 받아야 한다.
// 입력 받은 숫자들을 배열에 저장할 수 있어야 한다.
// 입력 받은 숫자들의 합계와 평균을 구할 수 있어야 한다.

double calculateTotal(double numbers[5])
{

	double Totalnumbers = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
	return Totalnumbers;
}

double calculateAverage(double numbers[5])
{

	double Average = calculateTotal(numbers) / 5;
	return Average;
}

int main() {

	double numbers[5]{};

	cout << " 루피의 점수를 입력하세요 : ";
	cin >> numbers[0];

	cout << " 나루토의 점수를 입력하세요 : ";
	cin >> numbers[1];

	cout << " 짱구의 점수를 입력하세요 : ";
	cin >> numbers[2];

	cout << " 토토로의 점수를 입력하세요 : ";
	cin >> numbers[3];

	cout << " 하울의 점수를 입력하세요 : ";
	cin >> numbers[4];

	cout << " 합계 : " << calculateTotal(numbers) << "\n";

	cout << " 평균 : " << calculateAverage(numbers) << "\n";

	return 0;
}