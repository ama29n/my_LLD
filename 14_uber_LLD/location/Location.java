package location;

public class Location {
	private String locationName;
	
	public Location() {
		this.locationName = "NA";
	}
	
	public Location(String _locationName) {
		this.locationName = _locationName;
	}
	
	public String getLocationName() {
		return this.locationName;
	}
}
