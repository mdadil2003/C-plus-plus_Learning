// 3. Write a program with a class Complex that represents complex numbers. Initialize objects using a constructor and add two complex numbers.

class Complex2
{
private:
    int real;
    int imag;

public:
    Complex2(int r, int i);
    Complex2 add(Complex2 c);
    void display();
};

