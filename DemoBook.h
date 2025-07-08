#ifndef DEMOBOOK_H
#define DEMOBOOK_H
#include "Book.h"


class DemoBook : public Book {

public:
    DemoBook(string ISBN,string title,int year,int published,float price,bool forSale);
    int buy(int quantity) override;
    void display() override;
    ~DemoBook();
};



#endif //DEMOBOOK_H
