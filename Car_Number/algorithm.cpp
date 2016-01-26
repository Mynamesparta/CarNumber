#include "algorithm.h"
#include "iostream"
using namespace std;

Algorithm::Algorithm()
{
}

void Algorithm::addNumber(vector<Point> vec)
{
    Numbers_of_Car.push_back(vec);
}


vector<vector<Point> >& Algorithm::FindNumber_of_Car(Image& image)
{
    Numbers_of_Car.clear();
    vector<Point> vec;
    push(vec,Point(0,0));
    push(vec,Point(100,100));
    push(vec,Point(100,200));
    push(vec,Point(200,200));
    push(vec,Point(300,100));
    addNumber(vec);
    return Numbers_of_Car;
}

string Algorithm::getDecryption(vector<Point> car_number)
{
    string result="Hello World. I have some interesting idei, squreil must ...";
    return result;
}
vector<string> &Algorithm::getDecryptions(vector<vector<Point> > vec)
{
    result.clear();
    for(int i=0;i<vec.size();i++)
    {
        push(result,getDecryption(vec[i]));
    }
    return result;
}
