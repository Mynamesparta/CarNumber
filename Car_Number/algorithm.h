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
    bool inline the_same(RGB& a, RGB& b){
        static float red=a.red-b.red,green=a.green-b.green,blue=a.blue-b.blue; return (red*red+green*green+blue*blue<World_of_Const::contrast_radius?true:false);}

};


#endif // ALGORITHM_H
