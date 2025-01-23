conversions = ["inches", "yards", "miles", "millimeters", "centimeters", "meters", "kilometers"]
factors = [12, 1 / 3, 1 / 5280, 304.8, 30.48, 0.3048, 0.0003048]

feet=float(input("enter feet: "))

print("---Choose conversion option---")            #To print the options for conversion
for i,unit in enumerate(conversions,start=1):
    print(f"{i}. Covert to {unit}")

choice=int(input("Enter your choice(No. that corresponds to desired unit): "))   #Reading choice

ans=feet*factors[choice-1]                                                       #Calculation
print(f"{feet} feet is {ans} {conversions[choice-1]}")