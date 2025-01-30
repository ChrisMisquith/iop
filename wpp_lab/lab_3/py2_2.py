product={}

while True:
    product_name=input("enter name of product(done to finish): ").strip()
    if product_name.lower()=='done':
        break
    try:
        price=float(input(f"enter the price of {product_name}: "))
        product[product_name]=price
    except ValueError:
        print("error, try again")
    
while True:
    print("---you can now print price---")
    search_prod=input("enter the product to display price(done to finish): ").strip()
    if search_prod.lower()=='done':
        break
    if search_prod in product:
        print(f"{search_prod} price is {product[search_prod]:} ")
    else:
        print("product not found")
