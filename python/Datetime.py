from datetime import datetime 
birthdate = input("Enter your birthdate (YYYY-MM-DD): ")
birthdate_date = datetime.strptime(birthdate,"%y-%m-%d")
current_date= datetime.now()
elapsed_days = (current_date - birth_date).days
print(f"number of days ")
