#include <iostream>
using namespace std;

int main() {
    string name;
    double price;
    int quantity;
    char category;
    bool inStock;
    double value;


    // ── INPUT ──────────────────────────
    cout << "Enter Name     : "; cin >> name;
    cout << "Enter Price    : "; cin >> price;
    cout << "Enter Quantity : "; cin >> quantity;
    cout << "Enter Category (E/F/C) : "; cin >> category;
    cout << "Is In Stock? Yes(1) or No(0) : "; cin >> inStock;

    // ── PROCESS ────────────────────────
    value = price * quantity;

    // ── OUTPUT ─────────────────────────
    cout << "\n===== PRODUCT INVENTORY =====" << endl;
    cout << "Name     : " << name     << endl;
    cout << "Price    : " << price    << endl;
    cout << "Quantity : " << quantity << endl;

    if (category == 'E' || category == 'F' || category == 'C') {
        cout << "Category : " << category << endl;
    } else {
        cout << "Category : Invalid!" << endl;
    }

    cout << "In Stock : " << (inStock ? "Yes" : "No") << endl;
    cout << "Value    : $" << value   << endl;
    cout << "=============================" << endl;





    return 0;
}