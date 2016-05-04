#include "Robot.h"

Robot::Robot()
{

}

Robot::Robot(Simulator s, Pose p){

    // Initialize the robot


    // Now add the robot to the simulator at the given pose
    s.insert_robot(*this, p);
}
