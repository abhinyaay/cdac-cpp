#include <iostream>
using namespace std;

class StockItem
{
private:
    int stockLevel;
    float unitPrice;

public:
    // Set values
    void setValues(int s, float p)
    {
        stockLevel = s;
        unitPrice = p;
    }

    // Get stock level
    int getStockLevel()
    {
        return stockLevel;
    }

    // Get unit price
    float getUnitPrice()
    {
        return unitPrice;
    }

    // Receive stock
    void receiveStock(int qty)
    {
        stockLevel += qty;
        cout << "Stock received successfully.\n";
    }

    // Issue stock
    void issueStock(int qty)
    {
        if(qty <= stockLevel)
        {
            stockLevel -= qty;
            cout << "Stock issued successfully.\n";
        }
        else
        {
            cout << "Not enough stock available.\n";
        }
    }
};

int main()
{
    StockItem item;
    int choice, stock, qty;
    float price;

    cout << "Enter Initial Stock Level: ";
    cin >> stock;

    cout << "Enter Unit Price: ";
    cin >> price;

    item.setValues(stock, price);

    do
    {
        cout << "\n---- MENU ----\n";
        cout << "1. Display Stock Details\n";
        cout << "2. Receive Stock\n";
        cout << "3. Issue Stock\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Stock Level: " << item.getStockLevel() << endl;
                cout << "Unit Price: " << item.getUnitPrice() << endl;
                break;

            case 2:
                cout << "Enter quantity to receive: ";
                cin >> qty;
                item.receiveStock(qty);
                break;

            case 3:
                cout << "Enter quantity to issue: ";
                cin >> qty;
                item.issueStock(qty);
                break;

            case 4:
                cout << "Exiting program\n";
                break;

            default:
                cout << "Invalid choice\n";
        }

    } while(choice != 4);

    return 0;
}