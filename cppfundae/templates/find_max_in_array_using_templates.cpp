#include "../../headers.h"

template<class Item>
Item array_max(Item data[], size_t n)
{
    size_t i;
    for(i=1; i<n; i++)
    {
        if (data[0] < data[i])
        {
            data[0] = data[i];
        }
    }
    return data[0];
}

int main()
{
    return 0;
}