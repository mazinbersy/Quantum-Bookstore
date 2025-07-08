#include "EBook.h"

EBook::EBook(string ISBN, string title, int year, int published, float price, bool forSale, string filetype) {
    this->ISBN = ISBN;
    this->title = title;
    this->year = year;
    this -> price = price;
    forSale = true;
    this ->filetype = filetype;
}

string EBook::getFiletype() {
    return filetype;
}


int EBook::buy(int quantity) {
    return 1;
}

void EBook::display() {
    cout << "EBook - ISBN: " << ISBN
       << ", Title: " << title
       << ", Year: " << year
       << ", Price: " << price
       << ", FileType: " << filetype << endl;
}


EBook::~EBook() {
}
