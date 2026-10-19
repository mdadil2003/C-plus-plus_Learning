// 5. Define two classes Point and Line. Use a friend function to check whether a point lies on a given line.

#include<iostream>
using namespace std;

class Line;
class Point {
    private:
        int x;
        int y;
    public:
        friend bool check(Point,Line);
};
class Line {
    private:
        int a;
        int b;
        int c;
    public:
        friend bool check(Point,Line);
};
bool check(Point p,Line l) {
    cout<<"Enter coordinates of point:";
    cin>>p.x>>p.y;
    cout<<"Enter coefficients a, b and c of line (ax+by+c=0):";
    cin>>l.a>>l.b>>l.c;
    if(l.a*p.x+l.b*p.y+l.c==0)
        return true;
    else
        return false;
}
int main() {
    Point p;
    Line l;
    bool b=check(p,l);
    if(b)
        cout<<"Point lies on the line"<<endl;
    else
        cout<<"Point does not lie on the line"<<endl;
    return 0;
}
