import urllib
from xml.dom import minidom

ALEXA_URL = 'http://data.alexa.com/data?cli=10&dat=snbamz&url='

def rank(site):
	url = ALEXA_URL + site
	dom = minidom.parse(urllib.urlopen(url))
	return dom.getElementsByTagName("REACH")[0].getAttribute("RANK")

print rank('shivajivarma.com')
