#include <iostream>
#include <sstream>
#include <algorithm>
#include <fstream>
#include <iterator>
#include "SurveyClass.h"
using namespace std;

template <class Container>
void split1(const string& str, Container& cont)
{
    istringstream iss(str);
    copy(istream_iterator<string>(iss),
              istream_iterator<string>(),
              back_inserter(cont));
}

int main(int argc, char* argv[]) {
    // below reads the input file
    // in your next projects, you will implement that part as well
    if (argc != 3) {
        cout << "Run the code with the following command: ./project1 [input_file] [output_file]" << endl;
        return 1;
    }

    cout << "input file: " << argv[1] << endl;
    cout << "output file: " << argv[2] << endl;

    /*
    ifstream infile(argv[1]);
    string line;
    vector<string> input;
    // process first line
    getline(infile, line);
    int N = stoi(line);
    cout << "number of input lines: " << N << endl;

    SurveyClass mySurveyClass;
    for (int i=0; i<N; i++) {
        getline(infile, line);
        cout << "line: " << line << endl;

        vector<string> words;
        split1(line,words);
        Member newMember(words[0],stoi(words[1]),words[2]);

        mySurveyClass.addMember(newMember);
    }

    cout << "input file has been read" << endl;

    float avgAge = mySurveyClass.calculateAverageAge();
    string mostFavColor = mySurveyClass.findMostFavouriteColor();

    // here, perform the output operation. in other words,
    // print your results into the file named <argv[2]>
    ofstream myfile(argv[2]);
    myfile.open (argv[2]);
    myfile << avgAge;
    myfile << endl;
    myfile << mostFavColor;
    myfile.close();

    cout << "avgAge " << avgAge << endl;
    cout << "mostFavColor " << mostFavColor << endl;
    */

    return 0;
}