#include <bits/stdc++.h>
#include <thread>
using namespace std;

void print(int n, const std::string &str)  
{  
    std::cout << "Printing integer: " << n << std::endl;  
    std::cout << "Printing string: " << str << std::endl;  
} 


int main() 
{
  vector<string> s = {
      "Educative.blog",
      "Educative",
      "courses",
      "are great"
  };
  
  vector<thread> threads;

  for (int i = 0; i < s.size(); i++) 
    threads.push_back(thread(print, i, s[i]));
 
  for (auto &th : threads) 
    th.join();
  
  return 0;
}
