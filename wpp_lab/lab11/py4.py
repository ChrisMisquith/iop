import pandas as pd

df = pd.DataFrame({
    'John': [True, False, True, False, True, False, False, True, False, True],
    'Judy': [True, True, False, False, True, False, True, True, False, False]
})

party_days = df['John'] & df['Judy']
days_til_party = [None] * len(df)
next_party_day = None

for i in reversed(range(len(df))):
    if party_days[i]:
        next_party_day = i
        days_til_party[i] = 0
    elif next_party_day is not None:
        days_til_party[i] = next_party_day - i
    else:
        days_til_party[i] = None

df['days_til_party'] = days_til_party

print(df)
