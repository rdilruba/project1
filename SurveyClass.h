#ifndef PROJECT1_SURVEYCLASS_H
#define PROJECT1_SURVEYCLASS_H

#include "LinkedList.h"
#include <string>
using namespace std;

class SurveyClass {
public:
    SurveyClass();
    SurveyClass(const SurveyClass &other);
    SurveyClass& operator=(const SurveyClass& list);
    ~SurveyClass();

    // Adds a new Member object to the linked list
    void addMember(const Member& newMember);
    // Calculates and returns the average age for the members of the class.
    // The average age can have up to two decimal points.
    float calculateAverageAge();
    // Finds the most favourite color and returns its name.
    // The most favourite color is the color
    // which is liked by the highest number of members.
    string findMostFavouriteColor();

    LinkedList* members = NULL;
};


#endif //PROJECT1_SURVEYCLASS_H
