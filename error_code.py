#!/usr/bin/python
"""
Write a Python script that takes in a URL, 
sends a request to the URL and displays the body of the response.
If the HTTP status code is greater than or equal to 400, print:
Error code: followed by the value of the HTTP status
"""
import sys
import requests

if __name__ == "__main__":
    #takes in url
    url = sys.argv[1]

    #send request to the URL
    response = requests(url)

    code_status = response.ok

    if code_status == True:
        print(response.text)
    else:
        print("Error code {}".format(response.status_code))