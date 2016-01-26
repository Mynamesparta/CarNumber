#ifndef ALGORITHM_H
#define ALGORITHM_H
#include <vector>
#include <string>
#include "World_of_Struct.h"
#include Direction_of_ImageH
using namespace std;
class Algorithm
{
public:
    Algorithm();
    vector<vector<Point> >& FindNumber_of_Car(Image& image);
    string getDecryption(vector<Point> car_number);
    vector<string>& getDecryptions(vector< vector<Point> > vec);
    vector< vector<Point> > Numbers_of_Car;
    vector<string> result;
private:
    void inline addNumber(vector<Point> vec);
    template <typename T>
    void inline push(vector<T>& vec,T& p){vec.push_back(p);}
    template <typename T>
    void inline push(vector<T>& vec,T p){vec.push_back(p);}

};


#endif // ALGORITHM_H
