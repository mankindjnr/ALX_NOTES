import requests

#instead of passing querys to the url directly due to errors - 
# create a dictionary

#get parameters
payload = {'page': 2, 'count': 25}

#make a request with some more arguments - get parametrs
r = requests.get('https://httpbin.org/get', params=payload)

#the output
print(r.text)

#prints the new url with the new parameters that we set
print(r.url)