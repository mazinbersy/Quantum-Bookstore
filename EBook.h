#ifndef EBOOK_H
#define EBOOK_H
#include "Book.h"


class EBook : public Book {

private:
    string filetype;

public:
    EBook(string ISBN,string title,int year,int published,float price,bool forSale, string filetype);
    string getFiletype();
    int buy(int quantity) override;
    void display() override;
    ~EBook();
};



#endif //EBOOK_H
