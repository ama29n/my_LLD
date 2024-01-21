package rider;

import rating.Rating;

public class Rider {
	private String name;
	private Rating rating;
	
	public Rider() {
		
	}
	
	public Rider(String _name, Rating _rating) {
		this.name = _name;
		this.rating = _rating;
	}
	
	public String getRiderName() {
		return this.name;
	}
	
	public Rating getRiderRating() {
		return this.rating;
	}
}
