#include "../../headers.h"

int main()
{
    string s1("12345");
    string::iterator it = s1.begin();
    string s2 = s1;
    *it = '0';
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << s1.capacity() << endl;
    cout << s1.size() << endl;

    string str("Hello World");
    string tag("$tag$");
    str.insert(8, tag + ' ');
    debug(str);

    return 0;
}