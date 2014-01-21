/*Sample function to set JSON Object as cookie*/
function setJSONCookie(){
cookie = {}
cookie.firstname = "Shivaji";
cookie.lastname = "Varma";
 createCookie('jsoncookie',JSON.stringify(cookie),1);
 alert("Cookie set");
}
/*Sample function to retrieve and reconstruct Object cookie*/
function getJSONCookie(){
    cookie = JSON.parse(readCookie('jsoncookie'));
    alert(JSON.stringify(cookie));
}
 
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
