#ifndef INVENTORY_H
#define INVENTORY_H
#include "Book.h"
#include <unordered_map>
#include "MailService.h"
#include "ShippingService.h"
#include <ctime>


class Inventory {

private:
    unordered_map<string,shared_ptr<Book>> Books;
    MailService Mail;
    ShippingService Shipping;

public:
    void addBook(string ISBN, shared_ptr<Book>);
    void removeBook(string ISBN);
    void removeOutdatedBooks(int yearsPassed);
    float purchaseBook(string ISBN, int quantity, string address, string email);
    void display();
    ~Inventory();
};



#endif //INVENTORY_H
