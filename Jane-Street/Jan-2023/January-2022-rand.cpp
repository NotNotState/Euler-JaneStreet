// Code for the Jane Street monthly puzzle - January 2022

#include <iostream>
#include <utility>
#include <stack>
#include <vector>
#include <array>
using namespace std;

int get_number_of_squares(int a, int b, int c, int d, int iterations)
{
    int e = abs(a - b);
    int f = abs(b - c);
    int g = abs(c - d);
    int h = abs(d - a);

    std::cout << "e: " << e << " f: " << f << " g: " << g << " h: " << h << "\n"; 

    if (e == 0 && f == 0 && g == 0 && h == 0)
        return iterations + 1;
    else 
        return get_number_of_squares(e, f, g, h, iterations + 1);
}

int main()
{   
    int iterations = 0;
    while (iterations < 22) {
    //int a = rand() % 10000001, b = rand() % 10000001, c = rand() % 10000001, d = rand() % 10000001;
    
    int CONST_A = 7286422, CONST_B = 8681694, CONST_C = 0, CONST_D = 4719812;
    int a = CONST_A, b = CONST_B, c = CONST_C, d = CONST_D;
    std::cout << "a: " << a << " b: " << b << " c: " << c << " d: " << d << "\n";
    iterations = get_number_of_squares(a, b, c, d, 1);

    std::cout << iterations << "\n";
    }
    return 0;
}