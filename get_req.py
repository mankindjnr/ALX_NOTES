"""
GET request is used to request the data from the server. i.e

import requests

#create a response object - i.e resp

resp = requests.get("url")
"""

import requests

#passign parameters
payload = {'key1': 'value1'}

#object with parameters
response = requests.get("https://natashanice.com/photosets/get", params = payload)

#print the url with params - you'll get a a query on the url with key value pairs passed in the dictionary above
print(response.url)

#print the object without parameters
resp = requests.get("https://natashanice.com/photosets/get")

#gives you the text for that website
print(resp.text)

#to print the headers
print(res.headers)

#get the content in json format/bject
print(res.json())