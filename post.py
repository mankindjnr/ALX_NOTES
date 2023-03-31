import requests

#on http bin website the auth part allows us to see a little bit of functionallity
# if you run https://httpbin.org/basic-auth/tommy/king it will pop a login page wher
#only the dta passed below, name and password yield login
payload = {'username': 'tommy', 'password': 'king'}

#Post data to some url - we are http bin to test this methods
r = requests.post('https://httpbin.org/post', data=payload)

#you get JSON reponse here
print(r.text)

#using a json
#you are passing the json output to a pythin dictionary and you can query it similarly to other dict
r_dict = r.json()

#here you are requesting data passed to that url that passed or labelled form
#the output here is the name and password we passed earlier
print(r_dict['form'])


