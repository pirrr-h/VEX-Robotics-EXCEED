// program with two bumpers to detect and hopefully make it across a walled track, two bumpers on both sides near the front of the wheels
//when one is pressed, the robot will backtrack and make a minor adjustment and rotate to the OPPOSITE side
// im writing this before playing around with #pragma/library stuff since we're not in person yet
#pragma config(Sensor, dgtl7,  rightSensor,         sensorTouch)
#pragma config(Sensor, dgtl8,	 leftSensor,         sensorTouch)
#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           leftMotor,     tmotorNormal, openLoop)
task main()
{
	int turnVar=0;
	wait1Msec(200);

	while(true)
	{
		if(SensorValue(rightSensor)==1; //in3 should be left, im also making the assumption that port2 is right, if im wrong just switch the variables
		{
			turnVar=1;

		}
		if(SensorValue(leftSensor)==1; //in3 should be left, im also making the assumption that port2 is left, if im wrong just switch the variables
		{
			turnVar=2;
		}

		switch (turnVar)
		{
		case 1:
			stopMotor(rightMotor);
			stopMotor(leftMotor);
			wait1Msec(100);
			Motor[rightMotor] = -95;
			Motor[leftMotor] = -95;
			wait1Msec(100);
			Motor[rightMotor] = 35; //adjustment
			wait1Msec(100);
			stopMotor(rightMotor);
			break;

		case 2:
			stopMotor(rightMotor);
			stopMotor(leftMotor);
			wait1Msec(100);
			Motor[rightMotor] = -95;
			Motor[leftMotor] = -95;
			wait1Msec(100);
			Motor[leftMotor] = 35; //adjustment
			wait1Msec(100);
			stopMotor(leftMotor);
			break;

		default:
			Motor[rightMotor] = 95;
			Motor[leftMotor] = 95;
		}
	}


}
