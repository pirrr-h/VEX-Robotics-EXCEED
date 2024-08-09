#pragma config(Sensor, dgtl7,  touchSensor,         sensorTouch)
#pragma config(Motor,  port2,           rightMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           leftMotor,     tmotorNormal, openLoop)
task main()
{

	while(SensorValue(touchSensor) == 0)
	{
		motor[rightMotor] = 63;
		motor[leftMotor] = 63;
		if(SensorValue(touchSensor) == 1)
		{
			break;
		}
	}
	motor[rightMotor] = -63;
	motor[leftMotor] = -63;
	wait(5);
	stopMotor(rightMotor);
	stopMotor(leftMotor);
}
