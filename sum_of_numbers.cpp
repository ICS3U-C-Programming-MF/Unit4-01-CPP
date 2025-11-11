// copyright Maximiliano Fairman Nov 11th, 2025
// all rights reserved
// this program asks user to enter a positive number
// and then displays the sum
// of all whole numbers from 0 to that number
#include <iostream>
#include <sstream>
#include <string>

int main() {
    // initialize variables
    int sum_of_numbers = 0;

    // ask user to input a positive number
    std::cout << "Enter a positive number: ";
    std::string user_input;
    std::getline(std::cin, user_input);

    try {
        int positive_number;
        std::stringstream ss(user_input);
        if (!(ss >> positive_number) || !(ss.eof())) {
            throw std::invalid_argument("Invalid input");
        }

        // check if the number is positive
        if (positive_number < 0) {
            std::cout << "Please enter a positive number." << std::endl;
        } else {
            // use a while loop to add up all whole numbers
            int counter = 0;
            while (counter <= positive_number) {
                sum_of_numbers += counter;
                counter += 1;
            }

            // display the sum to the user
            std::cout << "The sum is " << sum_of_numbers << "." << std::endl;
        }
    } catch (const std::invalid_argument&) {
        std::cout << "Please enter a valid positive number." << std::endl;
    }
}
