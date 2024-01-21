import driver.Driver;
import driver.DriverManager;
import location.Location;
import rating.Rating;
import rider.Rider;
import rider.RiderManager;
import trip.Trip;
import trip.TripManager;
import java.util.*;

public class Main {
	public static void main(String args[]) {
		Rating driver1Rating = new Rating(); driver1Rating.addRating(2); driver1Rating.addRating(4);
		Rating driver2Rating = new Rating(); driver2Rating.addRating(3); driver1Rating.addRating(3);
		Driver driver1 = new Driver("Aakash", driver1Rating);
		Driver driver2 = new Driver("Aadish", driver2Rating);
		
		Rating rider1Rating = new Rating(); rider1Rating.addRating(4); rider1Rating.addRating(5);
		Rider rider1 = new Rider("Aman", rider1Rating);
	
		DriverManager driverManagerInstance = DriverManager.getDriverManagerInstance();
		RiderManager riderManagerInstance = RiderManager.getRiderManagerInstance();
		
		driverManagerInstance.addDriver(driver1.getDriverName(), driver1);
		driverManagerInstance.addDriver(driver2.getDriverName(), driver2);
		
		riderManagerInstance.addRider(rider1.getRiderName(), rider1);
		
		TripManager tripManagerInstance = TripManager.getTripManagerInstance();
		
		Location source = new Location("B 236, DDA Flats Kalkaji, NewDelhi");
		Location destination = new Location("BPIT College");
		
		tripManagerInstance.createTrip(rider1, source, destination);
		
		Map<Integer, Trip> map = tripManagerInstance.getAllTrips();
		
		Trip t = map.get(121);
		
		t.displayTripDetails();
	}
}
