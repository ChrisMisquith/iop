import pandas as pd
import itertools

concerts = pd.DataFrame({
    'artist': ['A', 'B', 'A', 'C', 'B', 'A'],
    'venue': ['X', 'Y', 'X', 'Z', 'Y', 'Y'],
    'date': pd.to_datetime([
        '2023-01-05', '2023-01-20', '2023-02-10',
        '2023-02-15', '2023-03-01', '2023-03-01'
    ])
})

artists = pd.Series(['A', 'B', 'C'])
venues = pd.Series(['X', 'Y', 'Z'])

concerts['year_month'] = concerts['date'].dt.to_period('M')
counts = concerts.groupby(['year_month', 'artist', 'venue']).size()

ym_unique = concerts['year_month'].unique()
cross_prod = list(itertools.product(ym_unique, artists, venues))

counts = counts.reindex(
    pd.MultiIndex.from_tuples(cross_prod, names=['year_month', 'artist', 'venue']),
    fill_value=0
)

result = counts.unstack(['artist', 'venue']).sort_index()

print(result)

