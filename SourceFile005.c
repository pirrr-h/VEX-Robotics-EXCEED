#pragma config(Sensor, dgtl7,  touchSensor,         sensorTouch)
#pragma config(Sensor, dgtl6,  touchSensora,         sensorTouch)
#pragma config(Motor,  port2,           leftMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           rightMotor,     tmotorNormal, openLoop)
task main()
{

	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
	wait1Msec(500);
	motor[rightMotor] = -65.4;
	motor[leftMotor] = -63;
	wait(0.3);
	motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
	motor[leftMotor]  = -127;			// Motor on port3 is run at full (127) power forward
	wait1Msec(738);

	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
	wait1Msec(500);
	motor[rightMotor] = -65.4;
	motor[leftMotor] = -63;
	wait(0.3);
	motor[rightMotor] = 127;		  // Motor on port2 is run at full (-127) power reverse
	motor[leftMotor]  = -127;			// Motor on port3 is run at full (127) power forward
	wait1Msec(738);

	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
	motor[rightMotor] = -65.4;
	motor[leftMotor] = -63;
	wait(0.3);
	motor[rightMotor] = -127;		  // Motor on port2 is run at full (-127) power reverse
	motor[leftMotor]  = 127;			// Motor on port3 is run at full (127) power forward
	wait1Msec(738);

	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
	wait1Msec(500);
	motor[rightMotor] = -65.4;
	motor[leftMotor] = -63;
	wait(0.3);
	motor[rightMotor] = -127;		  // Motor on port2 is run at full (-127) power reverse
	motor[leftMotor]  = 127;			// Motor on port3 is run at full (127) power forward
	wait1Msec(738);

	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 65.4;
		motor[leftMotor] = 63;
	}
}
