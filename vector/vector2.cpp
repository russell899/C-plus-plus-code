// container properties and initialization
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //多种初始化方式
    vector<int> vec1;                   //null vector
    vector<int> vec2(5,10);             //5 elements, and each one is ten
    vector<int> vec3 = {1,2,3,4,5};     //list initialization
    vector<int> vec4(vec3);             //copy construct

    //two deminsion vector construct
    vector<vector<int>> matrix(3,vector<int>(4,0)); //create 3 row and 4 column, and each element is 0;

    //container properties
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        cout << *it << endl; //dereference it because v.begin() is the position of the first element, not the value itself;
    }
    
    cout << v[1] << endl;


    //output sample
    cout << vec2.size() << endl;
    cout << matrix[0][0] << endl;

    return 0;
}