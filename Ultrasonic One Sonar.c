#pragma config(Sensor, dgtl2,  rightSonar,     sensorSONAR_inch)
#pragma config(Sensor, dgtl6,  frontSonar,     sensorSONAR_inch)
#pragma config(Motor,  port2,           leftMotor,     tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port9,           rightMotor,    tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void backUp(float time)
{
	motor[rightMotor] = -65.4;
	motor[leftMotor] = -63;
	wait1Msec(time);
}

void rotate(float time, int t)  //t = left or right, 1 is TURN right, 2 is TURN left
{
	switch (t)
	{
		case 1:
			motor[rightMotor] = -127;		  // Motor on port2 is run at full (-127) power reverse
			motor[leftMotor]  = 127;
			wait1Msec(time);
		case 2:
			motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
			motor[leftMotor]  = -127;
			wait1Msec(time);
	}
}

task main()
{
	while(true)
	{
/*		int frontValue;
		int rightValue;
*/
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
}
/*		if (frontValue < 7)
			{
				stopBoth();
				backUp(300);
				rotate(750, 2);
			}
		else if ((frontValue < 7) && (rightValue > 12))
			{
				stopBoth();
				backUp(300);
				rotate(750, 1);
			}
	}
}
*/
