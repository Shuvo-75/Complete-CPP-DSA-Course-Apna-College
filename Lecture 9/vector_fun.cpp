#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> vec;
    
    cout << "size - " << vec.size() << endl;
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);
    vec.push_back(65);
    vec.push_back(75);
    
    cout << "after push_back size - " << vec.size() << endl;

    // vec.pop_back();
    // cout << "after pop_back size - " << vec.size() << endl; 

    for(int val : vec) // for each loop 
    {
        cout << val << endl;
    }

    cout <<"front fun use : " << vec.front() << endl; 
    cout <<"back fun use : " <<  vec.back() << endl; 
    cout <<"at fun use : " <<  vec.at(3) << endl; 
    
    return 0;
}