#ifndef PAPERBOOK_H
#define PAPERBOOK_H
#include "Book.h"


class PaperBook : public Book {

private:
    int stock;

public:
    PaperBook(string ISBN,string title,int year,int published,float price, int stock);
    int buy(int quantity) override;
    void display() override;
    void restock(int x);
    int getStock();
    ~PaperBook();
};



#endif //PAPERBOOK_H
