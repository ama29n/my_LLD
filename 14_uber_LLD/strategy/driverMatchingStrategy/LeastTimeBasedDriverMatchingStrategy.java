package strategy.driverMatchingStrategy;

import driver.Driver;
import driver.DriverManager;
import trip.TripMetaData;

public class LeastTimeBasedDriverMatchingStrategy implements DriverMatchingStrategy {
	@Override
	public Driver matchDriver(TripMetaData metadata) {
		DriverManager driverManagerInstance = DriverManager.getDriverManagerInstance();
		return driverManagerInstance.getDriver("Aakash");
	}
	@Override
	public String getStrategyName() {
		return "Least Time Based Driver Matching Strategy";
	}
}
