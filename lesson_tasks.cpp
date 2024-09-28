#include <iostream>
#include <cmath>
using namespace std;

void task_first();
void task_second();
void task_third();


void main()
{
	task_third();
}

void task_first()
{
	float g, m, s;
	const double PI = 3.141592653589793;
	cout << "Enter the angle value (angle minutes seconds): ";
	cin >> g >> m >> s;
	float angle = g + m * g / abs(g) / 60 + s * g / abs(g) / 3600;
	float answer = angle / 180 * PI;
	cout << "Answer: " << answer;
}

void task_second()
{
	float r;
	cout << "Enter the radian value: ";
	cin >> r;
}

void task_third()
{
	float k, p, s, answer;
	cin >> ""
	answer = log(s / k) / log(1.1);
	cout << answer;
}