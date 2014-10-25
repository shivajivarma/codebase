import urllib
from xml.dom import minidom

url = "data.xml"
dom = minidom.parse(urllib.urlopen(url))
 
# dom.getElementsByTagName returns NodeList
stocks = dom.getElementsByTagName("stock")
for stock in stocks:
        exchange = stock.getAttribute("exchange")
        name = stock.getElementsByTagName("name")[0]
        symbol = stock.getElementsByTagName("symbol")[0]
        price = stock.getElementsByTagName("price")[0]
        print("exchange:%s, name:%s, symbol:%s, price:%s" %
              (exchange, name.firstChild.data, symbol.firstChild.data, price.firstChild.data))
