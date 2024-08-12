// program with two bumpers to detect and hopefully make it across a walled track, two bumpers on both sides near the front of the wheels
//when one is pressed, the robot will backtrack and make a minor adjustment and rotate to the OPPOSITE side
// im writing this before playing around with #pragma/library stuff since we're not in person yet
task main()
{
	bMotorReflected[port2] = 1; //reflects one of the motors so we don't have to set one to neg always
	wait1Msec(200);
	while true;
	{
		startMotor[port2] = 95;
		startMotor[port9] = 95;
		if(SensorValue(in3)==1; //in3 should be left, im also making the assumption that port2 is left, if im wrong just switch the variables
		{
			stopMotor[port2];
			stopMotor[port9];
			wait1Msec(100);
			startMotor[port2] = -95;
			startMotor[port9] = -95;
			wait1Msec(100);
			startMotor[port2] = 35; //adjustment
			wait1Msec(100);
			stopMotor(port2];
		}
		if(SensorValue(in2)==1; //in3 should be left, im also making the assumption that port2 is left, if im wrong just switch the variables
		{
			stopMotor[port2];
			stopMotor[port9];
			wait1Msec(100);
			startMotor[port2] = -95;
			startMotor[port9] = -95;
			wait1Msec(100);
			startMotor[port9] = 35; //adjustment
			wait1Msec(100);
			stopMotor(port9];
		}
	}


}
