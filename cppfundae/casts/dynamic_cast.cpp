/*
 * Key Features:
 *      1. dynamic_cast converts - pointer/referece to a class --> (to-a) pointer /reference in the same inheritance heirachy
 *      2. It can only be used with polymorphic classes
 *      3. With this, we can cast up, down and across the inheritance hierarchy
 *      4. It's mostly used when converting from a derived class to a base class - but can also work the other way
 *      5. Dynamic_cast is performed during run-time
 */


class Account {
public:
    virtual ~Account() = default;
};

class BankAccount: virtual public Account{};
class WireAccount: virtual public Account{};
class CheckingAccount: public BankAccount, public WireAccount;
class SavingAccount: public BankAccount, public WireAccount;

int main()
{
    Account * a = nullptr;
    BankAccount * b = nullptr;
    WireAccount * w = nullptr;
    SavingAccount * s = nullptr;

    CheckingAccount c;
    a = dynamic_cast<Account*> (&c); // Upcast
    a = &c; //Upcast

    b = dynamic_cast<BankAccount*>(a);                      // downcast
    w = dynamic_cast<WireAccount*>(b);                      // crosscast
    s = dynamic_cast<SavingAccount*>(a);                    // downcast



}
