#include<iostream>
using namespace std;

class CRectangle{
    int *width, *height;
    public:
        CRectangle(int, int);
        ~CRectangle();
        int area()
        {
         return *width *  *height;
        }
};

CRectangle:: CRectangle(int a, int b)
{
    width = new int;
    height = new int;

    *width = a;
    *height = b;
}

CRectangle :: ~CRectangle()
{
    delete width;
    delete height;
}

int main(){

CRectangle rect_a(3, 4);
CRectangle rect_b(5, 6);


cout << "Area = " << rect_a.area() << endl;
cout << "Area = " << rect_b.area() << endl;

return 0;
}
