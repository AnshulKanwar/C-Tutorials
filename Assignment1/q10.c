#include <stdio.h>
#include <math.h>

struct Point {
    int x,y;
};

int main() {
    const float PI = 3.14;
    struct Point p1 = {2,2};    
    struct Point p2 = {5,6};    

    float radius = sqrt(pow(p1.x-p2.x, 2) + pow(p1.y-p2.y, 2)) / 2.0;
    float area = PI * pow(radius, 2);
    float perimeter = 2 * PI * radius;

    printf("Area of circle is %f\n", area);
    printf("Perimeter of circle is %f\n", perimeter);
    return 0;
}
