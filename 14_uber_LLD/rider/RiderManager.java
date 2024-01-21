package rider;

import java.util.*;

public class RiderManager {
public static RiderManager riderManagerInstance;
	
	private Map<String, Rider> ridersMap = new TreeMap<>();
	
	private RiderManager() {
		
	}
	
	public static RiderManager getRiderManagerInstance() {
		if(riderManagerInstance == null) {
			synchronized(RiderManager.class) {
				if(riderManagerInstance == null) {
					riderManagerInstance = new RiderManager();
				}
			}
		}
		return riderManagerInstance;
	}
	
	public Rider getRider(String riderName) {
		Rider rider = ridersMap.get(riderName);
		return rider;
	}
	
	public void addRider(String riderName, Rider rider) {
		ridersMap.put(riderName, rider);
	}
}
