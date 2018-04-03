#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <cstring>

class Person {
private:
    static const int SIZE = 128;
    // const int SIZE = 128; // error format
    std::string lname;
    char fname[SIZE];

public:
    Person()
    {
        this->lname = "";
        this->fname[0] = '\0';
    }
    Person(std::string lname, const char *fname = "Wang")
    {
        std::cout << "lname, " << lname << " this->lname " << this->lname << std::endl;
        this->lname = lname;
        strncpy(this->fname, fname, sizeof(this->fname));
    }
    void show()
    {
        std::cout << this->lname << " " << this->fname << std::endl;
    }
};

int main()
{
    Person wk;
    //Person wk(); // error
    Person kv("Kevin");
    Person t("Kai", "Wong");
    Person *pwk = new Person(); // this ok ?

    wk.show();
    kv.show();
    t.show();
    pwk->show();

    delete pwk;
    pwk = nullptr;

    return 0;
}