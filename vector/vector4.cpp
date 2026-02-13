#include <iostream>
#include <vector>
#include <algorithm> 
#include <numeric> // for accumulate

using namespace std;

int main()
{
    vector<int> data = {5,2,8,1,9,3};

    //sort the vector in ascending order
    sort(data.begin(), data.end());
    for(auto i = data.begin(); i != data.end(); ++i) //i++ will appear prelinmary copy
    {
        cout << *i << " ";
    }

    //search
    auto k = find(data.begin(), data.end(),3);
    if(k != data.end()) //data.end(),one past the last element
    {
        cout << "\nFound:"<< *k << endl;
    }

    //dedeuplication
    vector<int> duplicates = {1,2,2,3,4,4,5};
    sort(duplicates.begin(), duplicates.end());
    auto last = unique(duplicates.begin(), duplicates.end());

    for (auto it = duplicates.begin(); it != last; ++it) //only output effective elements
    {
        cout << *it << " ";
    }

    for (auto it = last; it != duplicates.end(); ++it) //show the nail
    {
        cout << *it << " ";
    }

    //verification
    cout << endl;
    cout << "before earse: " << duplicates.size() << endl;
    duplicates.erase(last, duplicates.end()); //remove the "removed" elements
    cout << "after earse: " << duplicates.size() << endl;
    for(auto i = duplicates.begin(); i != duplicates.end(); ++i)    
    {
        cout << *i << " ";
    }


    //auto sum
    int sum = accumulate(data.begin(), data.end(), 0); //initial value is 0
    cout << "\nSum: " << sum << endl;

}
