"""
the session object ceratain parameters over multiple requests
"""
#persisted one cookie
import requests

resp = requests.session()

resp.get('https://httpbin.org/cookies/set/sessioncookie/123456789')

response = resp.get('https://httpbin.org/cookies')

print(response.text)