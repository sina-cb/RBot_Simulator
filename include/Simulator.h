#ifndef SIMULATOR_H
#define SIMULATOR_H

#include "Pose.h"
#include "Robot.h"
#include "Types.h"
#include <vector>
using namespace std;

class Robot;

class Simulator
{
private:

    // Each cell length in the environment is 1 and
    // the boundaries are defined by max_x and max_y
    int max_x;  // Upper bound for the X axis
    int max_y;  // Upper bound for the Y axis

    vector<Robot> robots;               // This keeps track of the robots added to the environment
    vector<Pose> current_pose;          // This keeps track of the robot poses in the environment

public:
    // Constructors
    /**
     * @brief Simulator Default constructor
     */
    Simulator();

    /**
     * @brief Simulator Constructor to initialize the boundaries of the simulator while creating the object
     * @param max_x Upper bound for the X axis
     * @param max_y Upper bound for the Y axis
     */
    Simulator(int max_x, int max_y);

    // Public methods
    /**
     * @brief move_robot When a robot wants to move, it will call this method so that the simulator can move it
     * @param r The robot who calls this method sends in the "this" pointer so that the simulator knows which robot to move
     * @return Whether moving the robot was a success or a failure
     */
    bool move_robot(Robot r);

    /**
     * @brief turn_robot When a robot wants to turn, it will call this method so that the simulator can turn it
     * @param r The robot who calls this method sends in the "this" pointer so that the simulator knows which robot to move
     * @param direction The direction in which the robot wants to move
     * @return Whether turning the robot was a success or a failure
     */
    bool turn_robot(Robot r, Turn_Direction direction);

    /**
     * @brief insert_robot Adds a new robot to our simulator's environment
     * @param r The new robot that needs to be added
     * @param p Initial pose of the new robot
     * @return Whether inserting the robot was a success or a failure
     */
    bool insert_robot(Robot r, Pose p);

    /**
     * @brief remove_robot Removes a robot in the environment using the pointer to the robot object
     * @param r The pointer to the robot we want to remove in the simulation
     * @return Whether removing the robot was a success or a failure
     */
    bool remove_robot(Robot r);

    /**
     * @brief remove_robot Removes a robot in a given position in the simulator's environment
     * @param p The pose that we need to evacuate of any robots
     * @return Whether removing the robot was a success or a failure
     */
    bool remove_robot(Pose p);
};

#endif // SIMULATOR_H
