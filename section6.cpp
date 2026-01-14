#include <iostream>
#include <vector>
using namespace std;

//Function Prototypes
void menu();
char store_selection();
void add(vector<int>& numbers);
void print(vector<int>& numbers);
void mean(vector<int>& numbers);
void largest(vector<int>& numbers);
void smallest(vector<int>& numbers);

int main(){
    //variables 
    vector <int> numbers;
    char input {};


    do {
       menu();
       input = store_selection(); //save our output to variable 
       switch(input){ //switch uses our cases and variable to pick right function
            case 'A':
                add(numbers); //pass numbers into the function
                break;
            case 'P':
                print(numbers);
                break;
            case 'M':
                mean(numbers);
                break;
            case 'S':
                smallest(numbers);
                break;
            case 'L':
                largest(numbers);
                break;
            case 'Q':
                input = 'Q';


       }
    } while (input != 'Q'); 

    return 0;
}

void menu(){
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display the mean" << endl; 
    cout << "S - Display the smallest numbers" << endl;
    cout << "L - Display the largest numbers" << endl;
    cout << "Q - Quit" << endl;
    cout << "Enter your choice: ";
}


void add(vector<int> &v){ //pass the vector with the address
    int num{};
    cout << "Type a number" << endl;
    cin >> num;
    v.push_back(num);
    cout << num << " added" << endl;
}


void print(vector<int> &v){
    for (auto i: v)
        cout << i <<endl;
}


void mean(vector<int> &v){
    int counter {0};
    int sum {0};
    for (auto i: v){
        sum += i;
        counter++;
    }
    cout << double(sum/counter) << endl;
}

void largest(vector<int> &v){
    int largest {v.at(0)};
    for (auto i: v){
        if (i > largest)
            largest = i;
    }
    cout << "largest is " << largest << endl;
}


void smallest(vector<int> &v){
    int smallest {v.at(0)};
    for (auto i: v){
        if (i < smallest)
            smallest = i;
    }
    cout << "smallest is " << smallest << endl;

}

char store_selection(){
    char selected {};
    cin >> selected;
    return toupper(selected); //changes or char to upper 
}


