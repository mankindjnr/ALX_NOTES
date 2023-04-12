"""
POST request is used to submit the data to be processes to the server

import requests
payload = {key1:value1, ke2:value2}
resp = requests.post('url', data = payload)  - the resp object
"""

import requests

payload = {'key1': 'value1'}
resp =requests.post("https://natashanice.com/photosets/post", data = payload)

print(resp.text)