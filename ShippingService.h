#ifndef SHIPPINGSERVICE_H
#define SHIPPINGSERVICE_H


class ShippingService {

public:
    void shipBook(string address, int quantity, string title) {
        cout << " [ShippingService] Shipping " << quantity << " copy/copies of \"" << title << "\" to " << address << endl;
    }
};



#endif //SHIPPINGSERVICE_H
