#include <iostream>
using namespace std;

class Triangle
{
public:
    float length;
    float height;

    Triangle(float l, float h)
    {
        length = l;
        height = h;
    }

    float area()
    {
        return (length * height) / 2.0;
    }
};

float test(float lengt, float hei)
{
    float answer;
    Triangle tri(lengt, hei);
    cout <<"Area: "<< endl;
    answer = tri.area();
    return answer;
}

int main()
{
    return 0;
}