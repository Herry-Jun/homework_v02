#include <iostream>
using namespace std;

// ����ڷκ��� 5���� ���ڸ� �Է� �޾ƾ� �Ѵ�.
// �Է� ���� ���ڵ��� �迭�� ������ �� �־�� �Ѵ�.
// �Է� ���� ���ڵ��� �հ�� ����� ���� �� �־�� �Ѵ�.

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

	cout << " ������ ������ �Է��ϼ��� : ";
	cin >> numbers[0];

	cout << " �������� ������ �Է��ϼ��� : ";
	cin >> numbers[1];

	cout << " ¯���� ������ �Է��ϼ��� : ";
	cin >> numbers[2];

	cout << " ������� ������ �Է��ϼ��� : ";
	cin >> numbers[3];

	cout << " �Ͽ��� ������ �Է��ϼ��� : ";
	cin >> numbers[4];

	cout << " �հ� : " << calculateTotal(numbers) << "\n";

	cout << " ��� : " << calculateAverage(numbers) << "\n";

	return 0;
}