# Mart-App

This repository contains a simple Mart application written in C. The application allows users to select items from three categories: Clothes, Edibles, and Electronics, and calculates the total bill based on the selected items.

# Usage

To use the application:

Clone the repository:
git clone https://github.com/Jawad-Nasir/Mart-App.git

Compile the code:
gcc martapp.c -o martpp

Run the executable:
./martapp

# Features

1. Users can select items from three categories: Clothes, Edibles, and Electronics.
2. Each category displays a list of items with their ID, name, price, quantity, and availability.
3. Users can add items to their cart and view the total bill.
4. The application ensures that users cannot select items that are out of stock or enter invalid input.

# Structure

The code is structured into the following main components:

1. 'main.c': Contains the main logic of the shopping cart application.
2. 'display_items()': Function to display items in each category.
3. 'clothing()', 'edibles()', 'electronics()': Functions to handle user selection for each category.
4. struct shop: Defines the structure for each item in the shop, including ID, name, price, quantity, and availability.

# Contributing

Contributions to this project are welcome! If you'd like to contribute, please follow these steps:

1. Fork the repository
2. Create a new branch (git checkout -b feature-name)
3. Make your changes
4. Commit your changes (git commit -am 'Add new feature')
5. Push to the branch (git push origin feature-name)
6. Create a new Pull Request
