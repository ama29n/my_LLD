package rating;

import java.util.*;

public class Rating {
	
	private List<Integer> ratings;
	
	public Rating() {
		this.ratings = new ArrayList<>();
	}
	
	public void addRating(int rating) {
		this.ratings.add(rating);
	}
	
	public int getRating() {
		if(ratings.size() == 0) {
			return 0;
		}
		int n = ratings.size();
		int sum = 0;
		for(int it : ratings) {
			sum += it;
		}
		return sum / n;
	}
}
