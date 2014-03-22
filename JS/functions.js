/*

    Jquery required
    
*/



function getUrlParameter( key ){  
		key = key.replace(/[\[]/,"\\\[").replace(/[\]]/,"\\\]");  
		var regexExpression = "[\\?&]"+key+"=([^&#]*)";  
		var regex = new RegExp( regexExpression );  
		var results = regex.exec( window.location.href );  
		if( results == null )    return "";  
			else    return unescape(results[1]).replace(/<script.*>.*<\/script>/g, "");
}


/* Count number of divs with same class in a page*/
function countClass(className){
	return $('.'+className).length;
}

/* If there are n divs with same class, then on-click of i-th such class, display 'i' value */
function i_th_div_class(className){
	var  count = $('.'+className).length;
	for(var i=0;i<count;i++){ 
		divClick(i,className);
	}
}
function divClick(i,className){
 	$('.'+className+':eq('+i+')').click(function(){
		alert(i);
	}); 
 }



/* Set/Unset Cookies */
function createCookie(name, value, days) {
    if (days) {
        var date = new Date();
        date.setTime(date.getTime() + (days * 24 * 60 * 60 * 1000));
        var expires = "; expires=" + date.toGMTString();
    } else var expires = "";
    document.cookie = escape(name) + "=" + escape(value) + expires + "; path=/";
}

function readCookie(name) {
    var nameEQ = escape(name) + "=";
    var ca = document.cookie.split(';');
    for (var i = 0; i < ca.length; i++) {
        var c = ca[i];
        while (c.charAt(0) == ' ') c = c.substring(1, c.length);
        if (c.indexOf(nameEQ) == 0) return unescape(c.substring(nameEQ.length, c.length));
    }
    return null;
}

function eraseCookie(name) {
    createCookie(name, "", -1);
}

/* fetch JSON */

//Start: Sample JSON enclosed in callback
myCallback({
	"student": [{
		"name": "ram",
		"age": "10",
		"gender": "male"
		},
		{"name": "raj",
		"age": "12",
		"gender": "male"
		},
		{"name": "sita",
		"age": "10",
		"gender": "female"
		}
	],
	"commonDetails":{
		"school":"Little angels school",
		"grade":"4"
	}
})
//End
//Fetching and parsing of above JSON is shown in below. 

var students = [];
var commonDetails = {};

function getJSON() {
	$.jsonp({
		url : 'https://example.com/service',
		data : {
			'callback' : 'myCallback', // URL Parameters
			'id' : '420'
		},
		async : false,
		callback : "myCallback",
		success : function (json) {
			$.each(json.student, function (key, val) {
				var student = {};
				student['name'] = val.name;
				student['age'] = val.age;
				student['gender'] = val.gender;
			});

			commonDetails['school'] = json.commonDetails.school;
			commonDetails['grade'] = json.commonDetails.grade;
		},
		error : function (err) {	
			alert("Service not available.");
		}

	});
}


/* convert JSON object to string and vise versa */

jsonString = JSON.stringify(jsonObject);
jsonObject = JSON.parse(jsonString);

/* JSON class is not supported by old browsers like IE7, to over come it you can include json2 javascript library (https://raw.github.com/douglascrockford/JSON-js/master/json.js) in the page */
