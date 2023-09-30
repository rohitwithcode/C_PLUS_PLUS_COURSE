#include <iostream> 
#include <cmath> 
 
using namespace std; 
 
int main() 
{ 
    double x1, y1, x2, y2, distance; 
 
    cout << "Enter the x and y coordinates of the first point: "; 
    cin >> x1 >> y1; 
 
    cout << "Enter the x and y coordinates of the second point: "; 
    cin >> x2 >> y2; 
 
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)); 
 
    cout << "The distance between (" << x1 << ", " << y1 << ") and (" << x2 << ", " << y2 << ") is " << distance << endl; 
 
    return 0; 
} 
