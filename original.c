
task main()
{
	while(true)
	{
		if(SensorValue(in3)==1)
		{
			startMotor(port9,95);
			startMotor(port2,-95);
			wait(2);
		}
		stopMotor(port2);
		stopMotor(port9);

		if(SensorValue(in2)==1)
		{
			startMotor(port9,-95);
			startMotor(port2,95);
			wait(2);
		}
		stopMotor(port2);
		stopMotor(port9);

	}

}
