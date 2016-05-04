#include <iostream>
#include "Pose.h"
#include "Robot.h"
#include "Simulator.h"
#include "Types.h"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 1){
        cout << "Provided arguments:" << endl;
        for (int i = 0; i < argc; i++){
            cout << "\t" << i << ": " << argv[i] << endl;
        }
        cout << endl;
    }

    Simulator s(10, 10);
    cout << "Created a Simulator" << endl;

    Pose p(0, 0, EAST);
    cout << "Created a pose object for the robot" << endl;

    Robot r(s, p);
    cout << "Added the robot to the created simulator at the given pose!!!" << endl;

	return 0;
}
