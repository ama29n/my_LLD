package strategy.pricingStrategy;

import trip.TripMetaData;

public interface PricingStrategy {
	public double calculatePrice(TripMetaData metadata);
	public String getStrategyName();
}
