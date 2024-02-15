dic={"one":"google","two":"apple","three":"accenture","four":"HCL",}
z=dic
print(z)
print(dic)
del z["four"]
print(z)
print(dic)
dic1={"one":"google","two":"apple","three":"accenture","four":"HCL","five":"TCS"}
c=dic1.copy()
print(c)
print(dic)
del c["four"]
print(c)
print(dic1)