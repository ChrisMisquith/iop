import pandas as pd

# Example data
asking_prices = pd.Series([15000, 18000, 12000, 22000, 17000])
fair_prices = pd.Series([16000, 17500, 12500, 21000, 18000])

good_deals = asking_prices < fair_prices
good_deal_indices = good_deals[good_deals].index.tolist()

print("Indices of good deals:", good_deal_indices)
