
#include<iostream>
#include<string>
using namespace std;

class Store {
    int id, price;
    string item_name;
    int quantity;

public:
   
    Store() {
        item_name = "none";
        id = 0;
        price = 0;
        quantity = 0;
    }

 
    Store(int i, string n, int p, int q) {
        id = i;
        item_name = n;
        price = p;
        quantity = q;
    }

    void addStock(int amount) {
        quantity += amount;
        cout << "Stock updated. New quantity: " << quantity << endl;
    }

    void sellItem(int amount) {
        if (amount <= quantity) {
            quantity -= amount;
            cout << "Sale successful! Remaining stock: " << quantity << endl;
        } else {
            cout << "Not enough stock available!\n";
        }
    }

    void display() const {
        cout << "\nItem ID: " << id << endl;
        cout << "Name: " << item_name << endl;
        cout << "Price: ₹" << price << endl;
        cout << "Stock: " << quantity << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of items: ";
    cin >> n;

   
    Store* s = new Store[n];

    for (int i = 0; i < n; i++) {
        int id, price, quantity;
        string name;

        cout << "\nEnter details for item " << i + 1 << endl;
        cout << "ID Name Price Quantity: ";
        cin >> id >> name >> price >> quantity;

        s[i] = Store(id, name, price, quantity);
    }

  
    cout << "\n--- Inventory Details ---\n";
    for (int i = 0; i < n; i++) {
        s[i].display();
    }

   
    cout<<"25cs032";
    return 0;
}
