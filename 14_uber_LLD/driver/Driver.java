package driver;

import rating.Rating;

public class Driver {
	private String name;
	private boolean availability;
	private Rating rating;
	
	public Driver() {
		
	}
	
	public Driver(String _name, Rating _rating) {
		this.name = _name;
		this.rating = _rating;
		this.availability = true;
	}
	
	public void updateAvailability(boolean newAvailability) {
		this.availability = newAvailability;
	}
	
	public String getDriverName() {
		return this.name;
	}
	
	public Rating getDriverRating() {
		return this.rating;
	}
}
