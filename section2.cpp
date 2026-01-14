#include <iostream>

using namespace std;

const int charge_small_room {25};
const int charge_large_room {35};
const double sales_tax {0.06};
const int estimate_days {30};



int main(){
    
    int small_rooms{0};
    int large_rooms{0};
    cout << "Number of small rooms" << endl;
    cin >> small_rooms;
    cout << "Number of large rooms" << endl;
    cin >> large_rooms;
    cout << "Cost of small rooms:" << small_rooms * charge_small_room << endl;
    cout << "Cost of large rooms:" << large_rooms * charge_large_room << endl;
    cout << "Cost: " << (small_rooms * charge_small_room) + (large_rooms * charge_large_room) << endl;
    cout << "Tax is; " << ((small_rooms * charge_small_room) + (large_rooms * charge_large_room)) * 0.06 << endl;
    cout << "Total is: " << (((small_rooms * charge_small_room) + (large_rooms * charge_large_room)) * 0.06) + (small_rooms * charge_small_room) + (large_rooms * charge_large_room)<<endl;






    return 0;
}