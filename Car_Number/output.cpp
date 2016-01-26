#include "output.h"

Output::Output()
{
}

void Output::WriteResult(string name, vector<string> vec)
{
    string result;
    for(int i=0;i<vec.size();i++)
    {
        result+=vec[i];
        if(i!=vec.size()-1)
        {
            result+=",";
        }
    }
    cout<<name<<":"<<result<<"\n";
}
