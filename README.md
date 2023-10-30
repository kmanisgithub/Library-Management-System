# Library Management System (C++)

- Designed a Library Management System for students, faculty and admins using **Object Oriented Programming** in C++
– Enhanced the registration and login process for students, faculty and admins using C++ data structures
– Implemented the functionalities of book issuing & returning, penalty calculation and database maintenance in library

This is a simple Library Management System implemented in C++. It allows you to manage the books. This readme file will guide you through the project's structure, how to compile and run the program, and the basic functionalities it offers.


## Table of Contents

- [Project Structure](#project-structure)
- [Compilation](#compilation)
- [Usage](#usage)
- [Functionalities](#functionalities)
- [Contributing](#contributing)
- [License](#license)

## Project Structure

The project is organized as follows:

- `main.cpp`: The main program file.
- `Bookdata.h` and `Bookdata.cpp`: Classes to manage books.
- `headers.h` and `Headers.cpp`: Classes to manage library.
- `User_data.h` and `User_data.cpp`: Classes to record user data.
- `README.md`: The readme file you're currently reading.

## Compilation

To compile the Library Management System, you'll need a C++ compiler like g++.

```bash
g++ main.cpp Book.cpp Bookdata.cpp User_data.cpp -o LibraryManagementSystem
```

This command compiles the source files and produces an executable named `LibraryManagementSystem`.

## Usage

Once the program is compiled, you can run it with the following command:

```bash
./LibraryManagementSystem
```

Follow the on-screen prompts to use the system. You can add books, add patrons, perform check-in and check-out operations, and query information about books and patrons.

## Functionalities

The Library Management System provides the following functionalities:

1. **Add Book**: You can add new books to the library by providing details like title, author, ISBN, and genre.

2. **Check Out Book**: Patrons can borrow books. The system allows patrons to check out books, which records the transaction.

3. **Check In Book**: Patrons can return books. The system allows patrons to return books, which records the transaction.

4. **View Book Information**: You can look up book information by providing their ISBN.

5. **List All Books**: Display a list of all books in the library.


## Contributing

Contributions to this project are welcome. If you have any ideas for improvement, bug fixes, or additional features, feel free to fork the repository and create a pull request. Make sure to follow best coding practices and provide clear documentation for your changes.

## License

This Library Management System is open-source and distributed under the [MIT License](LICENSE). You are free to use, modify, and distribute it as per the terms of the license. Please refer to the `LICENSE` file for more details.
