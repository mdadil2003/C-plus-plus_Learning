// 4.	Create a class Matrix and overload the * operator to perform multiplication of two matrices.


#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[10][10];
    int rows, cols;

public:
    void input()
    {
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";

        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    Matrix operator*(Matrix m)
    {
        Matrix temp;

        temp.rows = rows;
        temp.cols = m.cols;

        for(int i = 0; i < temp.rows; i++)
        {
            for(int j = 0; j < temp.cols; j++)
            {
                temp.a[i][j] = 0;

                for(int k = 0; k < cols; k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }

    void display()
    {
        for(int i = 0; i < rows; i++)
        {
            for(int j = 0; j < cols; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    int getRows()
    {
        return rows;
    }

    int getCols()
    {
        return cols;
    }
};

int main()
{
    Matrix m1, m2, m3;

    cout << "Enter first matrix:\n";
    m1.input();

    cout << "\nEnter second matrix:\n";
    m2.input();

    if(m1.getCols() != m2.getRows())
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    m3 = m1 * m2;

    cout << "\nResult of matrix multiplication:\n";
    m3.display();

    return 0;
}
