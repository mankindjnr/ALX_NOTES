import requests

# getting that page
r = requests.get('https://tommykingxxx.com/gallery')

# print the response of the webpage - was it a success or not
print(r)

#dir gives us the function and methods we can run through this response object
print(dir(r))

#a more detailed object output of the function i can run through this response object
print(help(r))

#using help, scroll down tits output and on the text part you'll see content is in unicode or something else
#print it in unicode
print(r.text)


