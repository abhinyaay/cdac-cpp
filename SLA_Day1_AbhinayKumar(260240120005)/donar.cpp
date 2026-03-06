#include <iostream>
using namespace std;

class DONOR
{
private:
    int donorNo, age;
    string name, address, sex, bloodGroup;

public:
    void getData()
    {
        cout << "Enter Donor Number: ";
        cin >> donorNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Address: ";
        cin >> address;

        cout << "Enter Sex (Male/Female): ";
        cin >> sex;

        cout << "Enter Blood Group: ";
        cin >> bloodGroup;
    }

    void display()
    {
        cout << donorNo << "  " << name << "  " << address << endl;
    }

    int getAge()
    {
        return age;
    }

    string getSex()
    {
        return sex;
    }

    string getBloodGroup()
    {
        return bloodGroup;
    }
};

int main()
{
    int n, choice;
    cout << "Enter number of donors: ";
    cin >> n;

    DONOR d[50];

    for(int i=0;i<n;i++)
    {
        cout << "\nEnter details of donor " << i+1 << endl;
        d[i].getData();
    }

    do
    {
        cout << "\nMENU\n";
        cout << "1. Donors with blood group O+\n";
        cout << "2. Donors age between 18 and 25\n";
        cout << "3. Female donors with blood group A (21-24)\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                for(int i=0;i<n;i++)
                {
                    if(d[i].getBloodGroup()=="O+")
                        d[i].display();
                }
                break;

            case 2:
                for(int i=0;i<n;i++)
                {
                    if(d[i].getAge()>=18 && d[i].getAge()<=25)
                        d[i].display();
                }
                break;

            case 3:
                for(int i=0;i<n;i++)
                {
                    if(d[i].getSex()=="Female" &&
                       d[i].getBloodGroup()=="A" &&
                       d[i].getAge()>=21 && d[i].getAge()<=24)
                        d[i].display();
                }
                break;
        }

    }while(choice!=4);

    return 0;
}