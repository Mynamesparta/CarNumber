#include "controller.h"
Controller::Controller()
{
}
void Controller::Time_to_Find_Answer()
{
    for(int i=0;i<input.input.size();i++)
    {
        Image& image=input.input[i];
        graphic.addImage(image);
        vector<vector<Point> > vec=algo.FindNumber_of_Car(image);
        graphic.addRedInfinitySnake(vec);
        vector<string> result=algo.getDecryptions(vec);
        output.WriteResult(image.getName(),result);
    }


}
