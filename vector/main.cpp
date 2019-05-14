#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for(auto i=1; i<=5; i++)
    {
        v.push_back(i);
    }

    for(auto i=v.begin(); i!=v.end(); i++)
    {
        //v.insert(i,8);
        cout << *i << " ";
    }
    cout << endl;

    v.insert(v.begin(),8);

    for(auto i=v.cbegin(); i!=v.cend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for(auto i=v.rbegin(); i!=v.rend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    for(auto i=v.crbegin(); i!=v.crend(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << endl << "Reference operator [v]: v[2] = " << v[2] << endl;
    cout << "at: v.at(3) = " << v.at(3) << endl;
    cout << "v.front() = " << v.front() << endl;
    cout << "v.back() = " << v.back() << endl;
    int *pos = v.data();
    cout << "v.data() = " << *pos << endl;


    cout << endl << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;

    v.resize(4);
    cout << "After Resize:" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.shrink_to_fit();
    cout << endl << "After shrinking" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;

    v.reserve(3);
    cout << endl << "Reserving 5 units" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;

    v.clear();
    cout << endl << "After clearing: " << endl;
    if(v.empty()==false)
    {
        cout << "vector is not empty" << endl;
    }
    else
    {
        cout << "vector is empty" << endl;
    }
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;

    v.shrink_to_fit();
    cout << endl << "After shrinking" << endl;
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    cout << "Max size: " << v.max_size() << endl;

    v.assign(5,10);
    cout << endl << "v.assign(5,10): " << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "v.pop_back(): " << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.erase(v.begin());
    cout << endl << "v.erase(v.begin()):" << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.emplace(v.begin(), 5);
    cout << endl << "v.emplace(v.begin(), 5): " << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.emplace_back(20);
    cout << endl << "v.emplace_back(20):" << endl;
    for(auto i=v.begin(); i!=v.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);
    cout << endl << "v2 contents:" << endl;
    for(auto i=v2.begin(); i!=v2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    v.swap(v2);
    cout << endl << "v contents after swap:" << endl;
    for(unsigned long long int i=0; i<v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << endl << "v2 contents after swap:" << endl;
    for(unsigned long long int i=0; i<v2.size(); i++)
    {
        cout << v2[i] << " ";
    }
    cout << endl;

    cout << endl << "Size of v: " << v.size() << endl;
    cout << "Capacity of v: " << v.capacity() << endl;
    cout << "Size of v2: " << v2.size() << endl;
    cout << "Capacity of v2: " << v2.capacity() << endl;

    return 0;

}
