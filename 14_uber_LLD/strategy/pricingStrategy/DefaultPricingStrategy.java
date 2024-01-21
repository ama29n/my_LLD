package strategy.pricingStrategy;

import trip.TripMetaData;

public class DefaultPricingStrategy implements PricingStrategy {
	@Override
	public double calculatePrice(TripMetaData metadata) {
		return 200;
	}
	@Override
	public String getStrategyName() {
		return "Default Pricing Strategy";
	}
}
