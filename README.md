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

## 🧪 Example Usage (`main.cpp`)

```cpp
Inventory store;

store.addBook("B1", make_shared<PaperBook>("B1", "Paper Book", 2014, 2014, 120.0, 10));
store.addBook("B2", make_shared<EBook>("B2", "E-Book", 2021, 2021, 80.0, true, "pdf"));
store.addBook("B3", make_shared<DemoBook>("B3", "Demo Book", 2000, 2000, 0.0, false));

store.purchaseBook("B1", 2, "123 Street", "buyer@mail.com");
store.purchaseBook("B2", 1, "", "reader@mail.com");
store.purchaseBook("B3", 1, "456 Road", "demo@mail.com");

store.removeOutdatedBooks(10);
store.display();
```

## ✅ Sample Output
```
Showing all books...
Paper Book - B1 - 2014
E-Book - B2 - 2021
Demo Book - B3 - 2000

Buying Paper Book (2 copies)...
Shipping to: 123 Street
Paid: 240 EGP

Buying E-Book...
Email sent to: reader@mail.com
Paid: 80 EGP

Trying to buy Demo Book...
This book is not for sale.

Removing books older than 10 years...
Removing: B3

Remaining books...
Paper Book - B1 - 2014
E-Book - B2 - 2021
