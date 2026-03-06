#include "mobilephone.h"

int main()
{
    MobilePhone m[100];
    int count = 0;
    int choice;
    string model;

    do
    {
        cout << "\n--- Mobile Store Menu ---\n";
        cout << "1. Add Mobile\n";
        cout << "2. Display Mobiles\n";
        cout << "3. Find Quantity of Particular Mobile\n";
        cout << "4. Check Model Availability\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                m[count].accept();
                count++;
                break;

            case 2:
                for(int i=0;i<count;i++)
                    m[i].display();
                break;

            case 3:
                cout << "Enter Model No: ";
                cin >> model;
                for(int i=0;i<count;i++)
                {
                    if(m[i].getModel()==model)
                        cout << "Quantity: " << m[i].getQuantity() << endl;
                }
                break;

            case 4:
                cout << "Enter Model No: ";
                cin >> model;

                for(int i=0;i<count;i++)
                {
                    if(m[i].searchModel(model))
                    {
                        cout << "Model Available\n";
                        break;
                    }
                }
                break;
        }

    }while(choice!=5);

    return 0;
}