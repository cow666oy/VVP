#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    double L = sqrt((x2-x1)*(x2-x1)+ (y2-y1)*(y2-y1));
    cout << L;
}
