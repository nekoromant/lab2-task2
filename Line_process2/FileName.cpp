#include <math.h>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
	int cm, m;
	cout << "Введите  сантиметры: ";
	cin >> cm;
	m = (cm / 100);
	cout << "Полные метры: " << m;
	    return 0;
}
