#!/usr/bin/python3                                                                                                                                   
#python script that takes in url                                                                                                                     
import sys
import requests

if __name__ == "__main__":
    url = sys.argv[1] #takes in a url
    email = sys.argv[2] #takes an email address
    payload = {'email': email} #setting parameters
    response = requests.post(url, payload) #sends a POST request to the passed url together with the paramters

    print(response.text) #display body of the response

