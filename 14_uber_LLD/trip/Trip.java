package trip;


import driver.Driver;
import location.Location;
import rider.Rider;
import strategy.driverMatchingStrategy.DriverMatchingStrategy;
import strategy.pricingStrategy.PricingStrategy;

public class Trip {
	private Rider rider;
	private Driver driver;
	private Location source;
	private Location destination;
	private Integer tripId;
	private double tripPrice;
	private boolean tripStatus;
	private PricingStrategy pricingStrategy;
	private DriverMatchingStrategy driverMatchingStrategy;
	
	public Trip() {
		
	}
	
	public Trip(Rider _rider, Driver _driver, Location _sl, Location _dl, double _tripPrice, PricingStrategy _ps, DriverMatchingStrategy _ds) {
		this.rider = _rider;
		this.driver = _driver;
		this.source = _sl;
		this.destination = _dl;
		this.tripPrice = _tripPrice;
		this.pricingStrategy = _ps;
		this.driverMatchingStrategy = _ds;
		this.tripStatus = true;
		this.tripId = 121;
	}
	
	public int getTripId() {
		return this.tripId;
	}
	
	public void displayTripDetails() {
		System.out.println("Trip ID: " + this.tripId);
		System.out.println("Rider Name: " + this.rider.getRiderName());
		System.out.println("DriverName: " + this.driver.getDriverName());
		System.out.println("Source: " + this.source.getLocationName());
		System.out.println("Destination: " + this.destination.getLocationName());
		System.out.println("Total Fare: " + this.tripPrice);
		System.out.println("Pricing Strategy: " + this.pricingStrategy.getStrategyName());
		System.out.println("Driver Matching Strategy: " + this.driverMatchingStrategy.getStrategyName());
		System.out.println("Trip Status: " + this.tripStatus);
	}
}
