import urllib.request
import xml.dom.minidom

ALEXA_URL = 'http://data.alexa.com/data?cli=10&dat=snbamz&url='

def rank(site):
	url = ALEXA_URL + site
	dom = xml.dom.minidom.parse(urllib.request.urlopen(url))
	return dom.getElementsByTagName("REACH")[0].getAttribute("RANK"),dom.getElementsByTagName("CLAIMED")[0].getAttribute("DATE")

print(rank('shivajivarma.com'))
