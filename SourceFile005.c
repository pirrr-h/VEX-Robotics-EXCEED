#pragma config(Sensor, dgtl7,  touchSensorleft,         sensorTouch)
#pragma config(Sensor, dgtl6,  touchSensorright,         sensorTouch)
#pragma config(Motor,  port2,           leftMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           rightMotor,     tmotorNormal, openLoop)
task main()
{


	while(true)
	{
		if ((SensorValue(touchSensorright)==1) && (SensorValue(touchSensorleft)==0))
		{
			wait1Msec(500);
			motor[rightMotor] = -65.4;
			motor[leftMotor] = -63;
			wait(0.3);
			motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
			motor[leftMotor]  = -127;			// Motor on port3 is run at full (127) power forward
			wait1Msec(738);
		}
		else if ((SensorValue(touchSensorleft)==1) && (SensorValue(touchSensorright)==0))
		{
			wait1Msec(500);
			motor[rightMotor] = -65.4;
			motor[leftMotor] = -63;
			wait(0.3);
			motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
			motor[leftMotor]  = 127;			// Motor on port3 is run at full (127) power forward
			wait1Msec(738);
		}
		else if ((SensorValue(touchSensorleft)==1) && (SensorValue(touchSensorright)==1))
		{
			wait1Msec(500);
			motor[rightMotor] = -65.4;
			motor[leftMotor] = -63;
			wait(0.3);
			motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
			motor[leftMotor]  = 127;			// Motor on port3 is run at full (127) power forward
			wait1Msec(738);
		}
		else
		{
			motor[rightMotor] = 65.4;
			motor[leftMotor] = 63;
		}
	}
}

			
			

	
