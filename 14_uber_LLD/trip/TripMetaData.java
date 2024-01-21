package trip;

import location.Location;
import rating.Rating;

public class TripMetaData {
	private Rating riderRating;
	private Location sourceLocation;
	private Location destinationLocation;
	
	public TripMetaData() {
		
	}
	
	public TripMetaData(Rating _riderRating, Location _sl, Location _dl) {
		this.riderRating = _riderRating;
		this.sourceLocation = _sl;
		this.destinationLocation = _dl;
	}
	
	public Rating getRiderRating() {
		return this.riderRating;
	}
	
	public Location getSourceLocation() {
		return this.sourceLocation;
	}
	
	public Location getDestinationLocation() {
		return this.destinationLocation;
	}
}
