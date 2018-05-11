#ifndef PROJECT1_MEMBER_H
#define PROJECT1_MEMBER_H

#include <iostream>
#include <string>
using namespace std;

class Member {
public:
    string name;
    int age;
    string color;

    Member();
    Member(string _name, int _age, string _color);
    Member(const Member& _other);
    Member& operator=(const Member& _other);
    ~Member();
};


#endif //PROJECT1_MEMBER_H
