cmake_minimum_required(VERSION 3.28)
project(Quantum_Bookstore)

set(CMAKE_CXX_STANDARD 17)

add_executable(Quantum_Bookstore main.cpp
        PaperBook.cpp
        EBook.cpp
        DemoBook.cpp
        ShippingService.h
        MailService.h
        Inventory.cpp)
