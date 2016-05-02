#ifndef POSE_H
#define POSE_H

enum Orientation { WEST, NORTH, EAST, SOUTH };
enum Turn_Direction { LEFT = -1, RIGHT = +1 };

class Pose
{    
public:
    int x;
    int y;
    int o;

    Pose();
    Pose(int x, int y, int o);
};

#endif // POSE_H
