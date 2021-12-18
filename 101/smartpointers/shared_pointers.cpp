// enableShared.cpp

#include <iostream>
#include <memory>


/*

This unique technique, in which a class derives from a class template having itself as a parameter, 
is called CRTP and stands for Curiously Recurring Template Pattern.

With the class std::enable_shared_from_this, you can create objects that return a std::shared_ptr on itself. 
To do so, you must derive the class publicly from std::enable_shared_from_this. 
So the class support the method shared_from_this to return std::shared_ptr to
*/

class ShareMe: public std::enable_shared_from_this<ShareMe>{
public:
  std::shared_ptr<ShareMe> getShared(){
    return shared_from_this();
  }
};

int main(){

  std::cout << std::endl;

  std::shared_ptr<ShareMe> shareMe(new ShareMe);
  std::shared_ptr<ShareMe> shareMe1= shareMe->getShared();
  {
    auto shareMe2(shareMe1);
    std::cout << "shareMe.use_count(): "  << shareMe.use_count() << std::endl;
  }
  std::cout << "shareMe.use_count(): "  << shareMe.use_count() << std::endl;
  
  shareMe1.reset();
  
  std::cout << "shareMe.use_count(): "  << shareMe.use_count() << std::endl;

  std::cout << std::endl;

}