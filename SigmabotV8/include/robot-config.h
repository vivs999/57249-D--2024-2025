using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor FrontLeft;
extern motor MiddleLeft;
extern motor BackLeft;
extern motor FrontRight;
extern motor MiddleRight;
extern motor BackRight;
extern motor conveyerMotor;
extern inertial Inertial3;
extern digital_out pistonclamp;
extern controller Controller1;
extern motor firstStageMotor;
extern motor_group intake;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );