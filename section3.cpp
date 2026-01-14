#include <iostream>
#include <vector>

using namespace std;


int main(){


    vector<int> vector1;
    vector<int> vector2;


    vector1.push_back(10);
    vector1.push_back(20);

    cout << "vector1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) <<endl;
    cout << "vector1 contains" << vector1.size() << "elements" << endl;

    vector2.push_back(100);
    vector2.push_back(200);

    cout << "vector2" << endl;
    cout << vector2.at(0) << endl;
    cout << vector2.at(1) <<endl;
    cout << "vector1 contains" << vector2.size() << "elements" << endl;
    
    vector <vector<int>> vector_2d; //how to make a 2d vector

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector2d" << endl;
    cout << vector_2d.at(0).at(0) << endl;
    cout << vector_2d.at(1).at(0) <<endl;

    vector1.at(0) = 1000; //this doesn't change vector2d becasue it's already taken a copy basically not updated

    cout << "vector1" << endl;
    cout << vector1.at(0) << endl;
    cout << vector1.at(1) <<endl;
    cout << "vector1 contains" << vector1.size() << "elements" << endl;





    return 0;
}