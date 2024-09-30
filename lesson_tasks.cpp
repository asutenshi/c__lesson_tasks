#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;


void task_first();
void task_second();
void task_third();
void task_forth();
void task_fifth();
void task_sixth();

void main()
{
	/* Выберите функцию для использования */
	task_fifth();
}

void task_first()
{
	float g, m, s;
	cout << "Enter the angle value (angle minutes seconds): ";
	cin >> g >> m >> s;
	float angle = g + m * g / abs(g) / 60 + s * g / abs(g) / 3600;
	float answer = angle / 180 * M_PI;
	cout << "Radian value: " << answer;
}

/*test data:
* 22 -> 180 30 25.737
* 45 -> 58 18 36.281
* -92 -> -231 12 42.175
*/
void task_second()
{
	float r, alpha, angle, minutes, seconds;
	cout << "Enter the radian value: ";
	cin >> r;
	alpha = r * 180.0 / M_PI;
	angle = (int)(alpha) % 360;
	minutes = (int)(alpha * 60) % 60 * abs(angle) / angle;
	seconds = (int)(alpha * 3600) % 60 * abs(angle) / angle;
	cout << "Angle: " << " " << angle << " " << minutes << " " << seconds;
}

void task_third()
{
	float k, p, s, answer;
	cout << "Enter the capital, the percentage of profit and the amount of accumulation (number percent number): ";
	cin >> k >> p >> s;
	answer = log(s / k) / log(p / 100.0 + 1.0);
	cout << "You will accumulate the required amount for " << (int)(answer + 0.5) << " months";
}

void task_forth()
{
	float a, b, c;
	cout << "Enter a, b, c ratios (a b c):";
	cin >> a >> b >> c;
	float x0, y0;
	x0 = -b / 2 / a;
	y0 = a * x0 * x0 + b * x0 + c;
	cout << "y0 = " << y0;
}

void task_fifth()
{
	float h, m, s;
	cout << "Enter time (hh mm ss): ";
	cin >> h >> m >> s;
	float time = s + m * 60 + h * 3600;
	cout << "Rounded time: " << (int)(time / 3600.0 + 0.5) << ":" << (int)(time / 60.0 + 0.5) % 60 << " or " << (int)(time / 3600.0 + 0.5) << " hours";
	/*23 59 59*/
}

void task_sixth()
{
	double r, a;
	cout << "Enter the radius of the circle and the side of triangle (r a): ";
	cin >> r >> a;
	double a_the_described_triangle = 6 * r / sqrt(3);
	double count_of_triangles_in_base_of_triangle = (int)((a - a_the_described_triangle * 2) / 2 / r + 2 + 0.5);
	float answer = (1 + count_of_triangles_in_base_of_triangle) / 2 * count_of_triangles_in_base_of_triangle;
	cout << "You will be able to cut: " << answer << " circles";
}