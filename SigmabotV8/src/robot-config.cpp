#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor FrontLeft = motor(PORT12, ratio6_1, true);
motor MiddleLeft = motor(PORT13, ratio6_1, true);
motor BackLeft = motor(PORT14, ratio6_1, true);
motor FrontRight = motor(PORT17, ratio6_1, false);
motor MiddleRight = motor(PORT20, ratio6_1, false);
motor BackRight = motor(PORT16, ratio6_1, false);
motor conveyerMotor = motor(PORT2, ratio18_1, true);
inertial Inertial3 = inertial(PORT3);
digital_out pistonclamp = digital_out(Brain.ThreeWirePort.H);
controller Controller1 = controller(primary);
motor firstStageMotor = motor(PORT18, ratio6_1, false);
motor_group intake = motor_group(firstStageMotor, conveyerMotor);
// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}