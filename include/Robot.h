#ifndef ROBOT_H
#define ROBOT_H

#include "Simulator.h"
#include "Types.h"

class Simulator;

class Robot
{
private:
    /**
     * @brief battery Battery level of the robot
     */
    int battery;

public:
    // Constructors
    /**
     * @brief Robot Default constructor
     */
    Robot();

    /**
     * @brief Robot This constructor creates the robot object and automatically adds it to the provided simulator
     * @param s The simulator that we want to insert the robot into
     * @param p Initial pose of the robot in the simulator
     */
    Robot(Simulator s, Pose p);

    // Public methods

    /**
     * @brief move It move the robot by 1 step
     */
    void move();

    /**
     * @brief turn It turns the robot in the given direction
     * @param direction The direction in which the robot wants to turn
     */
    void turn(Turn_Direction direction);

    /**
     * @brief check_battery Used to check the battery level of the robot
     * @return returns the current battery level
     */
    int check_battery();

    /**
     * @brief charge Recharges the robot for a given amount of time. The internal properties of the robot will
     * determine the charging rate
     * @param time The amount of time which the robot is plugged in
     */
    void charge(double time);

    /**
     * @brief discharge Discharges the internal battery of the robot. The internal properties of the robot will
     * determine the discharging rate
     * @param time The amount of time which the robot is performing some action
     */
    void discharge(double time);
};

#endif // ROBOT_H
