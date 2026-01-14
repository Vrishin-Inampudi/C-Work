#include <iostream>
#include <vector>

using namespace std;

const int dollars = 100;
const int quarter = 25;
const int dime = 10;
const int nickle = 5;
const int penny = 1;




int main(){

    int change{0};

    cout << "Enter your change: ";
    cin >> change;

    int num_dollars = change / dollars;
    change %= dollars; //gets remainders 
    cout << "Dollars: " << num_dollars << endl;

    int num_quarters = change / quarter;
    change %= quarter;
    cout << "Quarters: " << num_quarters << endl;

    int num_dimes = change / dime;
    change %= dime;
    cout << "Dimes: " << num_dimes << endl;

    int num_nickels = change / nickle;
    change %= nickle;
    cout << "Nickels: " << num_nickels << endl;

    int num_pennies = change;
    cout << "Pennies: " << num_pennies << endl;
    return 0;
}