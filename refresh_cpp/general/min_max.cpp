/*
 *  To find minimum and maximum in different ways
 */
#include "../../headers.h"

int main()
{
    int a = 3;
    int b = 4;

    // This is the classic way to find min and max element b/w 2 elements
    int resultMax = max(a, b);
    int resultMin = min(a, b);

    // Now methods to find across ranges
    vector<int> temp {1, 2, 3, 4, 5};

    // To find out the minimum element
    vector<int>::iterator it = min_element(temp.begin(), temp.end());
    cout << "The minimum element is: " << temp[it-temp.begin()] << endl;

    // To find the maximum element
    vector<int>::iterator it2 = max_element(temp.begin(),temp.end());
    cout << "The maximum element is: " << *it2 << endl;

    // Want both min and max element at the same time
    pair< vector<int>::iterator, vector<int>::iterator > p = minmax_element(temp.begin(), temp.end());
    int smallest = *p.first;
    int largest = *p.second;
    return 0;
}