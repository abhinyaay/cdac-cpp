#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[10][10], r, c;

public:
    void getData()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter matrix elements:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin >> a[i][j];
            }
        }
    }

    void display()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Addition
    Matrix operator + (Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    // Subtraction
    Matrix operator - (Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = c;

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    // Multiplication
    Matrix operator * (Matrix m)
    {
        Matrix temp;
        temp.r = r;
        temp.c = m.c;

        for(int i=0;i<temp.r;i++)
        {
            for(int j=0;j<temp.c;j++)
            {
                temp.a[i][j] = 0;
                for(int k=0;k<c;k++)
                {
                    temp.a[i][j] += a[i][k] * m.a[k][j];
                }
            }
        }

        return temp;
    }
};

int main()
{
    Matrix m1, m2, result;
    int choice;

    cout << "Enter First Matrix\n";
    m1.getData();

    cout << "Enter Second Matrix\n";
    m2.getData();

    do
    {
        cout << "\n--- Matrix Menu ---\n";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                result = m1 + m2;
                cout << "Addition Result:\n";
                result.display();
                break;

            case 2:
                result = m1 - m2;
                cout << "Subtraction Result:\n";
                result.display();
                break;

            case 3:
                result = m1 * m2;
                cout << "Multiplication Result:\n";
                result.display();
                break;
        }

    }while(choice != 4);

    return 0;
}