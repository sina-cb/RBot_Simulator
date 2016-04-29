#include "Pose.h"
#include "Robot.h"
#include <vector>

using namespace std;

#ifndef SIMULATOR_H
#define SIMULATOR_H
class Simulator
{
private:
    vector<Robot> robots;
    vector<Pose> current_position;
    int max_x;
    int max_y;
    
public:
    Simulator();
    bool move_robot(Robot r);
    bool turn_robot(Robot r, int direction);
    void insert_robot(Robot r, Pose p);
    void remove_robot(Robot r);
    void remove_robot(Pose p);

};

#endif // SIMULATOR_H
