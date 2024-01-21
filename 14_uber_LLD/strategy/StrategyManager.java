package strategy;

import strategy.driverMatchingStrategy.DriverMatchingStrategy;
import strategy.driverMatchingStrategy.LeastTimeBasedDriverMatchingStrategy;
import strategy.pricingStrategy.DefaultPricingStrategy;
import strategy.pricingStrategy.PricingStrategy;
import trip.TripMetaData;

public class StrategyManager {
	public static StrategyManager strategyManagerInstance;
	
	private StrategyManager() {
		
	}
	
	public static StrategyManager getStrategyManagerInstance() {
		if(strategyManagerInstance == null) {
			synchronized(StrategyManager.class) {
				if(strategyManagerInstance == null) {
					strategyManagerInstance = new StrategyManager();
				}
			}
		}
		return strategyManagerInstance;
	}
	
	public PricingStrategy determinePricingStrategy(TripMetaData metadata) {
		return new DefaultPricingStrategy();
	}
	
	public DriverMatchingStrategy determineDriverMatchingStrategy(TripMetaData metadata) {
		return new LeastTimeBasedDriverMatchingStrategy();
	}
}
