import requests

# getting an image by passing its url
r = requests.get('https://img1.wsimg.com/isteam/ip/b898f1ad-0582-481f-adb3-a39680bd9150/Instagramstory.jpg/:/cr=t:0%25,l:0%25,w:100%25,h:100%25/rs=w:370,cg:true')

#printing the image in btes form
#print(r.content)

#download the mage to our machine
#wb option - open in write bytes mode
#this will save this image in this directory as our python module
with open('tommy.png', 'wb') as f:
    f.write(r.content)

# to check if the output was correct - 200
print(r.status_code)

#return true if it is less than 400 - if you get any server or client error then this
# returns false - else its true - server and client errors are the most important
print(r.ok)

#more useful content
#print(r.header)
