# 📘 Quantum Bookstore

A simple object-oriented C++ console application simulating a digital bookstore.  
The system supports multiple book types, purchasing logic, inventory management, and interaction with mock services.

---

## ✨ Features

- 📚 **Inventory of Books**
  - Paper books with stock count and shipping
  - EBooks with filetype and email delivery
  - Demo books (not for sale, showcase only)

- 🛒 **Purchase Flow**
  - Purchase by ISBN and quantity
  - Paper books are shipped to an address
  - EBooks are sent via email
  - Demo books cannot be purchased

- 🧹 **Maintenance**
  - Remove outdated books older than a specified number of years

---

## 🧱 Object-Oriented Design

- **Base Class**: `Book` (abstract class)
- **Derived Classes**:
  - `PaperBook`
  - `EBook`
  - `DemoBook`

- **Manager Class**: `Inventory`
- **Helper Services**:
  - `MailService` – mock email sender
  - `ShippingService` – mock shipping handler

---

## 🧪 Sample Program Used (`main.cpp`)

```cpp
int main() {
    Inventory store;

    // Add books
    store.addBook("B1", make_shared<PaperBook>("B1", "Paper Book", 2014, 2014, 120.0, 10));
    store.addBook("B2", make_shared<EBook>("B2", "E-Book", 2021, 2021, 80.0, true, "pdf"));
    store.addBook("B3", make_shared<DemoBook>("B3", "Demo Book", 2000, 2000, 0.0, false));

    cout << endl << "Showing all books..." << endl;
    store.display();

    cout << endl << "Buying Paper Book (2 copies)..." << endl;
    float paid = store.purchaseBook("B1", 2, "123 Street", "buyer@gmail.com");
    if (paid >= 0)
        cout << "Paid: " << paid << " EGP" << endl;

    cout << endl << "Buying E-Book..." << endl;
    paid = store.purchaseBook("B2", 1, "", "reader@gmail.com");
    if (paid >= 0)
        cout << "Paid: " << paid << " EGP" << endl;

    cout << endl << "Trying to buy Demo Book..." << endl;
    store.purchaseBook("B3", 1, "456 Road", "demo@gmail.com");

    cout << endl << "Removing books older than 10 years..." << endl;
    store.removeOutdatedBooks(10);

    cout << endl << "Remaining books..." << endl;
    store.display();

    return 0;
}

```
---
## Output of Sample Program
![image](https://github.com/user-attachments/assets/263552dd-d47a-4a49-a89c-fe58e1d31172)
