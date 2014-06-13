/*
Program to fetch value from URL parameter.
Eg: if url is "http://example.com/?name=john&age=22
then getUrlParameter('age') will give you "22".
*/

function getUrlParameter( key ){  
		key = key.replace(/[\[]/,"\\\[").replace(/[\]]/,"\\\]");  
		var regexExpression = "[\\?&]"+key+"=([^&#]*)";  
		var regex = new RegExp( regexExpression );  
		var results = regex.exec( window.location.href );  
		if( results == null )    return "";  
			else    return unescape(results[1]).replace(/<script.*>.*<\/script>/g, "");
}
