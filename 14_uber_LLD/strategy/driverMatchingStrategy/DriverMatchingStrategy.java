package strategy.driverMatchingStrategy;

import driver.Driver;
import trip.TripMetaData;

public interface DriverMatchingStrategy {
	public Driver matchDriver(TripMetaData metadata);
	public String getStrategyName();
}
