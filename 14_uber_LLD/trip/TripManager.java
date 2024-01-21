package trip;

import driver.Driver;
import location.Location;
import rider.Rider;
import strategy.StrategyManager;
import strategy.driverMatchingStrategy.DriverMatchingStrategy;
import strategy.pricingStrategy.PricingStrategy;

import java.util.*;

public class TripManager {
	public static TripManager tripManagerInstance;
	
	private Map<Integer, Trip> tripsInfo = new TreeMap<>();	
	private Map<Integer, TripMetaData> tripsMetaDataInfo = new TreeMap<>();
	
	private TripManager() {
		
	}
	
	public static TripManager getTripManagerInstance() {
		if(tripManagerInstance == null) {
			synchronized(TripManager.class) {
				if(tripManagerInstance == null) {
					tripManagerInstance = new TripManager();
				}
			}
		}
		return tripManagerInstance;
	}
	
	public void createTrip(Rider rider, Location source, Location destination) {
		StrategyManager strategyManagerInstance = StrategyManager.getStrategyManagerInstance();
		
		TripMetaData metadata = new TripMetaData(rider.getRiderRating(), source, destination);
				
		PricingStrategy ps = strategyManagerInstance.determinePricingStrategy(metadata);
		
		DriverMatchingStrategy ds = strategyManagerInstance.determineDriverMatchingStrategy(metadata);
		
		Driver driver = ds.matchDriver(metadata);
		
		double tripPrice = ps.calculatePrice(metadata);
		
		Trip trip = new Trip(rider, driver, source, destination, tripPrice, ps, ds);
		
		tripsInfo.put(trip.getTripId(), trip);
		tripsMetaDataInfo.put(trip.getTripId(), metadata);
	}
	
	public Map<Integer, Trip> getAllTrips() {
		return this.tripsInfo;
	}
}
