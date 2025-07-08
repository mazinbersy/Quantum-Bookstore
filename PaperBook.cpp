#include "PaperBook.h"

PaperBook::PaperBook(string ISBN, string title, int year, int published, float price, int stock) {
    this->ISBN = ISBN;
    this->title = title;
    this->year = year;
    this -> price = price;
    forSale = true;
    this ->stock = stock;
}

int PaperBook::buy(int quantity) {
    if(quantity > stock) {
        cout<<"ERROR: Quantity requested is not Available."<<endl;
        return -1;
    }
    stock -= quantity;
    return 0;
}

void PaperBook::display() {
    cout << "Paper Book - ISBN: " << ISBN
         << ", Title: " << title
         << ", Year: " << year
         << ", Price: " << price
         << ", Stock: " << stock << endl;
}

void PaperBook::restock(int x) {
    stock +=x;
}

int PaperBook::getStock() {
    return stock;
}

PaperBook::~PaperBook() {}
