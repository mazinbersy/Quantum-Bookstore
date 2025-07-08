#include <iostream>
#include <memory>
#include "Inventory.h"
#include "PaperBook.h"
#include "EBook.h"
#include "DemoBook.h"

using namespace std;

int main() {
    Inventory store;

    // Add books
    store.addBook("B1", make_shared<PaperBook>("B1", "Paper Book", 2014, 2014, 120.0, 10));
    store.addBook("B2", make_shared<EBook>("B2", "E-Book", 2021, 2021, 80.0, true, "pdf"));
    store.addBook("B3", make_shared<DemoBook>("B3", "Demo Book", 2000, 2000, 0.0, false));

    cout << endl << "Showing all books..." << endl;
    store.display();

    cout << endl << "Buying Paper Book (2 copies)..." << endl;
    float paid = store.purchaseBook("B1", 2, "123 Street", "buyer@gmail.com");
    if (paid >= 0)
        cout << "Paid: " << paid << " EGP" << endl;

    cout << endl << "Buying E-Book..." << endl;
    paid = store.purchaseBook("B2", 1, "", "reader@gmail.com");
    if (paid >= 0)
        cout << "Paid: " << paid << " EGP" << endl;

    cout << endl << "Trying to buy Demo Book..." << endl;
    store.purchaseBook("B3", 1, "456 Road", "demo@gmail.com");

    cout << endl << "Removing books older than 10 years..." << endl;
    store.removeOutdatedBooks(10);

    cout << endl << "Remaining books..." << endl;
    store.display();

    return 0;
}
