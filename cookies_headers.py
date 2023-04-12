"""
we can iew the servers headers using a python dictionary and similarly access the
cookies in the server

print(resp.headers)

the resp being the response object you create

you can also get the cookies

print(resp.cookies)

to send your won cookies to the server, we can use the cookies parameter
"""

import requests

#resp = requests.get('https://natashanice.com/photosets/cookies')

#print(resp.cookies)

#to send your own cookies
cookies = dict(key1 = 'value1')
response = requests.get('https://httpbin.org/cookies', cookies = cookies)
print(response.text)

#headders
print(resp.headers)

