# Custom printf Implementation in C

Welcome to the Custom `printf` Implementation project! This project is a recoded version of the standard `printf` function in C. The goal of this project is to create a custom implementation of `printf` that serves the same purpose and functionality as the usual `printf` found in the C Standard Library.

## Features

- Supports all standard format specifiers (e.g., `%d`, `%s`, `%c`, `%f`, `%x`, etc.).
- Handles complex formatting options like width, precision, and flags.
- Implements efficient and robust output to the standard output stream.
- Designed to be easily extendable for additional custom format specifiers.

## Usage

To use the custom `printf` function in your C projects, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/custom-printf.git
    ```

2. Include the header file in your C code:
    ```c
    #include "custom_printf.h"
    ```

3. Call the custom `printf` function in your code:
    ```c
    custom_printf("Hello, World! My age is %d and my name is %s.\n", 25, "Alice");
    ```

## Installation

To compile and use the custom `printf`, follow these steps:

1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/custom-printf.git
    ```

2. Navigate to the project directory:
    ```sh
    cd custom-printf
    ```

3. Compile the code:
    ```sh
    gcc -o custom_printf main.c custom_printf.c
    ```

4. Run the executable:
    ```sh
    ./custom_printf
    ```

## Project Structure

- `main.c`: Contains example usage of the custom `printf` function.
- `custom_printf.c`: Contains the implementation of the custom `printf` function.
- `custom_printf.h`: Contains the function prototypes and necessary includes.

## Contributing

Contributions are welcome! If you find any issues or have suggestions for improvements, please open an issue or submit a pull request. 

