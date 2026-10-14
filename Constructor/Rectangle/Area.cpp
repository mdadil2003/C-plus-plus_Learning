#include"rect.cpp"
int main()
{ int p,q;
    std::cout<<"enter length and breadth: "<<endl;
    cin>>p>>q;
    Rectangle s(p,q);
    s.area();
}
