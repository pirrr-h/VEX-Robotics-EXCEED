
#pragma config(Sensor, dgtl7,  touchSensor,         sensorTouch)
#pragma config(Sensor, dgtl6,  touchSensora,         sensorTouch)
#pragma config(Motor,  port2,           leftMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port9,           rightMotor,     tmotorNormal, openLoop)
task main()
{
	while((SensorValue(touchSensor) == 0) && (SensorValue(touchSensora) == 0))
	{
		motor[rightMotor] = 70;
		motor[leftMotor] = 63;
	}
	if(SensorValue(touchSensor)==1); //in3 should be left, im also making the assumption that port2 is right, if im wrong just switch the variables
		{
			turnVar=1;
		}
		if(SensorValue(touchSensora)==1); //in3 should be left, im also making the assumption that port2 is left, if im wrong just switch the variables
		{
			turnVar=2;
		}
		switch (turnVar)
		{
		case 1:
			wait1Msec(100);
			motor[rightMotor] = -95;
			motor[leftMotor] = -95;
			wait1Msec(100);
			motor[rightMotor] = 35; //adjustment
			wait1Msec(100);
			stopMotor(rightMotor);
			break;

		case 2:
			stopMotor(rightMotor);
			stopMotor(leftMotor);
			wait1Msec(100);
			motor[rightMotor] = -95;
			motor[leftMotor] = -95;
			wait1Msec(100);
			motor[leftMotor] = 35; //adjustment
			wait1Msec(100);
			stopMotor(leftMotor);
			break;
		}
}
