#ifndef BOOK_H
#define BOOK_H
#include <iostream>
#include <string>
using namespace std;


class Book {

protected:
    string ISBN;
    string title;
    int year;
    float price;
    bool forSale;


public:
    bool getSaleStatus() {return forSale;}
    int getYear() {return year;}
    string getTitle() {return title;}
    float getPrice() {return price;}
    virtual int buy(int) {return 0;} //Returns 0 if ShippingService Needed, Returns 1 if MailService Needed, Returns -1 if none needed
    virtual void display(){};
    virtual ~Book(){};
};



#endif //BOOK_H
