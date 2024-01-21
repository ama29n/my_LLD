package driver;

import java.util.*;

public class DriverManager {
	public static DriverManager driverManagerInstance;
	
	private Map<String, Driver> driversMap = new TreeMap<>();
	
	private DriverManager() {
		
	}
	
	public static DriverManager getDriverManagerInstance() {
		if(driverManagerInstance == null) {
			synchronized(DriverManager.class) {
				if(driverManagerInstance == null) {
					driverManagerInstance = new DriverManager();
				}
			}
		}
		return driverManagerInstance;
	}
	
	public Driver getDriver(String driverName) {
		Driver driver = driversMap.get(driverName);
		return driver;
	}
	
	public void addDriver(String driverName, Driver driver) {
		driversMap.put(driverName, driver);
	}
}
