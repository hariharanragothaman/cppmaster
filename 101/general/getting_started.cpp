#include "../../headers.h"

int main()
{
    cout <<"Hello World\n";

    // This initializes an array in C++ and we print it
    int input [] = {2, 7, 11, 15};
    for(int n = 0; n < 4; n++)
        cout << input[n];
    cout << endl;

    vector<int> vinput = {1, 2, 3, 4};
    // Another traditional way of writing
    for(size_t i = 0; i < vinput.size(); ++i)
    {
        cout << vinput[i] << "\t" << i << "\n";
    }

    std::cout<<"Playing with Hashmaps" << "\n";

    // Put elements into the unordered - hashmap
    unordered_map<int, int> hmap;
    int loc = 0;
    for(auto& elem : vinput)
        hmap[elem] = loc++;

    // print the hashmap
    for (auto& kv : hmap)
        cout<< "Key: " << kv.first << " Value:" << kv.second << "\n";

    // Put the elements into a raw map
    map<int, int> ordered;
    int idx = 0;
    for(auto& elem : vinput)
        ordered[elem] = idx++;

    // Printing the raw map
    for(auto &n : ordered)
        cout << n.first <<":" << n.second << "\n";

}