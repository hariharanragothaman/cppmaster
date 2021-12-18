#include <bits/stdc++.h>
#include <thread>
using namespace std;

void print(int n, const std::string &str)  
{  
    std::cout << "Printing integer: " << n << std::endl;  
    std::cout << "Printing string: " << str << std::endl;  
} 

// int main() 
// {
//     std::thread t1(print, 10, "Educative.blog");
//     t1.join();
// 	return 0;
// }

int main() 
{
  std::vector<std::string> s = {
      "Educative.blog",
      "Educative",
      "courses",
      "are great"
  };
  std::vector<std::thread> threads;
 
  for (int i = 0; i < s.size(); i++) {
    threads.push_back(std::thread(print, i, s[i]));
  }
 
  for (auto &th : threads) {
    th.join();
  }
  return 0;
}
