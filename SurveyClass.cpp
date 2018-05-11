#include "SurveyClass.h"
#include <map>

SurveyClass::SurveyClass() {
    members=new LinkedList();

}
SurveyClass::SurveyClass(const SurveyClass &other) {
    if (other.members)
    {

        this->members=new LinkedList(*other.members);

    }

}
SurveyClass& SurveyClass::operator=(const SurveyClass &list) {
    if (list.members)
    {
        if(this->members)
            delete this->members;
        this->members=list.members;
    }

}
void SurveyClass::addMember(const Member &newMember) {
    this->members->pushTail(newMember);
    this->members->length++;

}
float SurveyClass::calculateAverageAge() {
    if(members!=NULL){  // I checked if members is null or not
    if(members->length==0)//if members is empty I returned zero
        return 0;
    else {
        Node* current; // I created a new node to search in members
        float sum; // This is the sum of ages
        current=members->head; //current is now at the beginning of the members

        while (current!=members->tail) // while current in the scope of members
        {
            sum+=current->data.age; // I calculated the sum
            current=current->next;
        }
        sum+=current->data.age; // I added the tail
        return sum/members->length; // At the end I calculated the average
    }}else return 0;

}
string SurveyClass::findMostFavouriteColor() {

    string fav; // favorite color string
    if(members!=NULL){ // I checked if members is null or not
    if(members->length==0) //if members is empty I returned no color
        return "no color";
    else {
        Node* current; // I created a new node to search in members
        map<string,int> f; // f is the map for color-number of color
        map<string,int>::iterator it;
        current=members->head;
        string c;
        while (current!=members->tail)
        {
            c=(current->data.color); // I keep current color with c
            if(f.count(c)==0) // if color is new I mapped it to 1
                f[c]=1;
            else  f[c]=++(f.at(c)); //if color is already seen I increased the number

            current=current->next;
        }
        c=(current->data.color); // current is now at tail. I do the same things
        if(f.count(c)==0)
            f[c]=1;
        else   f[c]=++(f.at(c));
        int max=0;

        for(it=f.begin(); it!=f.end(); it++) // I calculated the max number
        {
            if(it->second>max) {
                fav = it->first;
                max=it->second;
            }
        }

        return fav; //returns favorite color
    }
    }else return "no fav";

    }

SurveyClass::~SurveyClass() {
    if(members)
    delete members;

}