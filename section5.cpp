#include <iostream>
#include <vector>
using namespace std;

int main() {
    bool exit_program{ false };
    char choice{};
    vector<int> numbers{};

    do {

        cout << "\nP - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display the mean" << endl;
        cout << "S - Display the smallest numbers" << endl;
        cout << "L - Display the largest numbers" << endl;
        cout << "Q - Quit" << endl;
        cout << "Enter your choice: ";

        cin >> choice;

        if (choice == 'p' || choice == 'P') {
            if (numbers.empty())
                cout << "[] - List is Empty" << endl;
            else {
                cout << "[ ";
                for (auto i : numbers)
                    cout << i << " ";
                cout << "]" << endl;
            }
        }
        else if (choice == 'a' || choice == 'A') {
            int input{};
            cout << "What would you like to add? ";
            cin >> input;
            numbers.push_back(input);
            cout << input << " added to list" << endl;
        }
        else if (choice == 'm' || choice == 'M') { 
            if (numbers.empty()) {
                cout << "Unable to calculate mean - no data" << endl;
            }
            else {
                double total{ 0 };
                for (auto i : numbers)
                    total += i;
                cout << "The mean is: " << total / numbers.size() << endl;
            }
        }
        else if (choice == 's' || choice == 'S') {
            if (numbers.empty()) {
                cout << "List is empty" << endl;
            }
            else {
                int smallest = numbers[0];
                for (int i : numbers) {
                    if (i < smallest)
                        smallest = i;
                }
                cout << "Smallest number is: " << smallest << endl;
            }
        }
        else if (choice == 'L' || choice == 'l'){
            int largest = numbers[0];
            for (int i : numbers){
                if (i > largest)
                    largest = i;
            }
        cout << "Largest is " << largest << endl;
        }
    
        else if (choice == 'q' || choice == 'Q'){
            cout << "Goodbye!" << endl;
            exit_program = true; 
        }
        else {
            cout << "Unknown selection, please try again." << endl;
        }

    } while (!exit_program); 

    return 0;
}