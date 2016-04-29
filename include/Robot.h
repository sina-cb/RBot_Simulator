#ifndef ROBOT_H
#define ROBOT_H

class Robot
{
private:
    int battery;

public:

    void move_f();
    void turn_l();
    void turn_r();

    Robot();
};

#endif // ROBOT_H
