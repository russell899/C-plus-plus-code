// difference between size and capacity of vector
#include <iostream>
#include <vector>

using namespace std; //bring the names from the std namespace into the current scope.

int main()
{
    vector<int> v1(5,10);
    vector<int> v2;
    cout << v1.size() << endl; //how many elements in the vector, not the size
    cout << v1.capacity() << endl; //dynamic value

    //difference between size and capacity,for the size everytime we push_back an element, the size will increase by 1.
    //for the capacity, it will reserve more space than current size.
    for(auto i = 0; i < 5; ++i)
    {
        v2.push_back(i);
        cout << "size: " << v2.size() << ", capacity: " << v2.capacity() << endl;
    }

    return 0;
}