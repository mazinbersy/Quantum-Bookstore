#ifndef MAILSERVICE_H
#define MAILSERVICE_H

class MailService {

public:
    void sendEBook(string email, int quantity, string title) {
        cout << "[MailService] Sending " << quantity
            << " copy/copies of \"" << title << "\" to email: " << email << endl;
    }
};


#endif //MAILSERVICE_H
