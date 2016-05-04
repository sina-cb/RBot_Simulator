#ifndef POSE_H
#define POSE_H

enum Orientation { WEST, NORTH, EAST, SOUTH };

class Pose
{    
private:
    int x;
    int y;
    int o; // Theta

public:
    // Constructors

    /**
     * @brief Pose Default constructor which sets all of the parameters to 0
     */
    Pose();

    /**
     * @brief Pose Constructor with value inputs
     * @param x X parameter
     * @param y Y parameter
     * @param o Theta parameter
     */
    Pose(int x, int y, int o);
};

#endif // POSE_H
