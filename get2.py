import requests

#authentication cchek
r = requests.get('https://httpbin.org/basic-auth/tommy/king', auth=('tommy', 'king'))

#wrong auth
w = requests.get('https://httpbin.org/basic-auth/tommy/king', auth=('tommmy', 'king'))

#timeout check to avoid a forever wait - delay
#try it out at https://httpbin.org/delay/3
t = requests.get('https://httpbin.org/delay/1', timeout = 3)

print(r.text)

#reponse in the auth id given correct credentials - 200 - correct
print(r)

#response in auth id given incorrect credentails - 401 - incorrect authentication
print(w)

#timout check - if the loading takes less than the specified timeout, its a success
print(t)