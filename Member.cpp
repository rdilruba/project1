#include "Member.h"

Member::Member(){
}

Member::Member(string _name, int _age, string _color){
    name = _name;
    age = _age;
    color = _color;
}

Member::Member(const Member& other){
    name = other.name;
    age = other.age;
    color = other.color;
}

Member& Member::operator=(const Member& other){
    name = other.name;
    age = other.age;
    color = other.color;
    return *this;
}

Member::~Member(){
}
