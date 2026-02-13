// vector - 动态数组功能，能够在运行时自动调整大小
// 无需手动管理大小，访问效率高

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
    vector<vector<int>> matrix(3,vector<int>(4,0));

    return 0;
}