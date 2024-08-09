#pragma config(Sensor, dgtl7,  touchSensor,         sensorTouch)
#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           leftMotor,     tmotorNormal, openLoop)

task main()
{
	while(SensorValue(touchSensor) == 0)		// Instructs robot to do nothing while the touch sensor isn't pressed
	{
	}
	wait1Msec(250);                         // Wait just a bit before moving on (to help touch sensor remain consistant
	while(SensorValue(touchSensor) == 1)		// Loop while robot's bumper/touch sensor IS pressed in
	{
		motor[rightMotor] = 63;			          // Motor on port2 is run at half (63) power forward
		motor[leftMotor]  = 63;			          // Motor on port3 is run at half (63) power forward
	}
}
