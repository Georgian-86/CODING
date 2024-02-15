# import re
# pattern= r"apple"
# text="I love apple apple and oranges."
# match=re.search(pattern,text)
# if match:
#     print("Match found at",match.group())
# else:
#     print("No match")
    
# pattern=r"apple"
# text="apples are delicious"
# match= re.match(pattern, text)
# if match:
#     print("Match found at",match.group())
# else:
#     print("No match")                                
    
# pattern=r"\d+"
# text="there are 123 apples and 456 oranges"
# matches=re.findall(pattern,text)
# print("Matches: ",matches)
    
import re

pattern = r"apple|orange"
text = "I love apple apple apple and oranges."
match = re.findall(pattern, text)

# Initialize a dictionary to store the frequency of each fruit
fruit_freq = {'apple': 0, 'orange': 0}

# Count the frequency of each fruit in the match list
for fruit in match:
    fruit_freq[fruit] += 1

print(fruit_freq)