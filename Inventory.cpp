#include "Inventory.h"

void Inventory::addBook(string ISBN, shared_ptr<Book> book) {
    if(Books.find(ISBN) != Books.end()) {
        cout<<"ISBN already Exists!"<<endl;
        return;
    }
    Books[ISBN] = book;
}

void Inventory::removeBook(string ISBN) {
    if(Books.find(ISBN) == Books.end()) {
        cout<<"Book with the following ISBN does not exist."<<endl;
        return;
    }
    Books.erase(ISBN);
}

void Inventory::removeOutdatedBooks(int yearsPassed) {
    time_t now = time(0);              // Get current time
    tm* localTime = localtime(&now); // Convert to local time
    int currentYear = localTime->tm_year + 1900;

    auto it = Books.begin();
    while(it != Books.end()) {
        if (currentYear - yearsPassed >= it->second->getYear()) {
            it = Books.erase(it);
        }
        else {
            it++;
        }
    }
}

float Inventory::purchaseBook(string ISBN, int quantity, string address, string email) {
    switch(Books[ISBN]->buy(quantity)) {
        case -1: return 0.0;
        case 0: {
            Shipping.shipBook(address, quantity, Books[ISBN]->getTitle());
            return quantity * Books[ISBN]->getPrice();
        }
        case 1: {
            Mail.sendEBook(email,quantity,Books[ISBN]->getTitle());
            return quantity * Books[ISBN]->getPrice();
        }
    }
    return 0.0;
}

void Inventory::display() {
    cout << "------- Current Inventory -------"<<endl;
    if (Books.empty()) {
        cout << "No books available."<<endl;
        return;
    }

    for (auto& i : Books) {
        i.second->display();
    }
}

Inventory::~Inventory() {
    Books.clear();
}
