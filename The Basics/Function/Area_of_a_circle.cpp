#include <iostream>
using namespace std;

float circle(int radius){
    float area = 3.14*radius*radius;
    return area;
}

int main()
{
    int num;
    cout << "Enter your circle radius : ";
    cin >> num;
    float area = circle(num);
    cout << "Area of your circle is " << area;
}