#include "DemoBook.h"

DemoBook::DemoBook(string ISBN, string title, int year, int published, float price, bool forSale) {
    this->ISBN = ISBN;
    this->title = title;
    this->year = year;
    this -> price = price;
    forSale = false;
}

int DemoBook::buy(int quantity) {
    cout<<"This Book is Not For Sale!"<<endl;
    return -1;
}

void DemoBook::display() {
    cout << "Showcase Book - ISBN: " << ISBN
         << ", Title: " << title
         << ", Year: " << year
         << " (Not for Sale)" << endl;
}

DemoBook::~DemoBook() {
}
