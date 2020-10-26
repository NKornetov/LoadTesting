Action()
{

	web_url("webTours", 
		"URL=http://localhost:1080/webTours", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("header.html", 
		"URL=http://localhost:1080/webTours/header.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webTours/", 
		"Snapshot=t11.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/webTours/", 
		"Snapshot=t12.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("hp_logo.png", 
		"URL=http://localhost:1080/webTours/images/hp_logo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webTours/header.html", 
		"Snapshot=t13.inf", 
		LAST);

	web_url("webtours.png", 
		"URL=http://localhost:1080/webTours/images/webtours.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost:1080/webTours/header.html", 
		"Snapshot=t14.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("home.html", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t15.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=true", 
		"Snapshot=t16.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_url("mer_login.gif", 
		"URL=http://localhost:1080/WebTours/images/mer_login.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t17.inf", 
		LAST);

	web_url("favicon.ico", 
		"URL=http://localhost:1080/favicon.ico", 
		"Resource=1", 
		"Referer=", 
		"Snapshot=t18.inf", 
		LAST);

	web_add_cookie("SRCHUID=V=2&GUID=8C5F62587F254A7E8A1C56951FFF9024&dmnchg=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("AMCV_EA76ADE95776D2EC7F000101%40AdobeOrg=-1303530583%7CMCIDTS%7C18537%7CMCMID%7C11530977872350833320967878111562405636%7CMCAAMLH-1602139106%7C6%7CMCAAMB-1602139106%7C6G1ynYcLPuiQxYZrsz_pkqfLG9yMXBpb2zX5dvJdYQJzPXImdj0y%7CMCOPTOUT-1601541506s%7CNONE%7CMCAID%7CNONE%7CMCSYNCSOP%7C411-18522%7CvVersion%7C3.3.0%7CMCCIDH%7C130606064; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=81c23848e40b4424922bbebf44b4b47f&HASH=81c2&LV=202009&V=4&LU=1599632137593; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=1CD0AB7006366C4F1173A430075D6D25; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("mbox=PC#86b91cee50de4584bbc19fc2597bffca.38_0#1664779109|session#d5e0c8ce5fa645f7b57e5d1456d8e447#1601536166; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("aam_uuid=11992579612299953390993789819350842891; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("__CT_Data=gpv=3&ckp=tld&dm=microsoft.com; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20200914; DOMAIN=iecvlist.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t19.inf", 
		"Mode=HTTP", 
		LAST);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t20.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=userSession", "Value=129906.410935601zzicAzVpAVcftAAQcpDzzAHf", ENDITEM, 
		"Name=username", "Value=NNK", ENDITEM, 
		"Name=password", "Value=NNK", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=login.x", "Value=0", ENDITEM, 
		"Name=login.y", "Value=0", ENDITEM, 
		LAST);

	web_concurrent_start(NULL);

	web_url("login.pl_2", 
		"URL=http://localhost:1080/cgi-bin/login.pl?intro=true", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t21.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_2", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/login.pl", 
		"Snapshot=t22.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("in_home.gif", 
		"URL=http://localhost:1080/WebTours/images/in_home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t23.inf", 
		LAST);

	web_url("signoff.gif", 
		"URL=http://localhost:1080/WebTours/images/signoff.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t24.inf", 
		LAST);

	web_url("itinerary.gif", 
		"URL=http://localhost:1080/WebTours/images/itinerary.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t25.inf", 
		LAST);

	web_url("flights.gif", 
		"URL=http://localhost:1080/WebTours/images/flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t26.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("Search Flights Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t27.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("nav.pl_3", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t28.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("reservations.pl", 
		"URL=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Snapshot=t29.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("home.gif", 
		"URL=http://localhost:1080/WebTours/images/home.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t30.inf", 
		LAST);

	web_url("in_flights.gif", 
		"URL=http://localhost:1080/WebTours/images/in_flights.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t31.inf", 
		LAST);

	web_concurrent_end(NULL);

	/* Request with GET method to URL "http://localhost:1080/WebTours/classes/" failed during recording. Server response : 403*/

	web_url("button_next.gif", 
		"URL=http://localhost:1080/WebTours/images/button_next.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t32.inf", 
		LAST);

	/* Request with GET method to URL "http://localhost:1080/WebTours/classes/" failed during recording. Server response : 403*/

	web_submit_data("reservations.pl_2", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl?page=welcome", 
		"Snapshot=t33.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=depart", "Value=Denver", ENDITEM, 
		"Name=departDate", "Value=10/27/2020", ENDITEM, 
		"Name=arrive", "Value=Paris", ENDITEM, 
		"Name=returnDate", "Value=10/28/2020", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=.cgifields", "Value=roundtrip", ENDITEM, 
		"Name=.cgifields", "Value=seatType", ENDITEM, 
		"Name=.cgifields", "Value=seatPref", ENDITEM, 
		"Name=findFlights.x", "Value=51", ENDITEM, 
		"Name=findFlights.y", "Value=16", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_3", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t34.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=outboundFlight", "Value=042;331;10/27/2020", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=reserveFlights.x", "Value=37", ENDITEM, 
		"Name=reserveFlights.y", "Value=11", ENDITEM, 
		LAST);

	web_submit_data("reservations.pl_4", 
		"Action=http://localhost:1080/cgi-bin/reservations.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t35.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=firstName", "Value=Stiven", ENDITEM, 
		"Name=lastName", "Value=Seagull", ENDITEM, 
		"Name=address1", "Value=Dududu, 2, 3", ENDITEM, 
		"Name=address2", "Value=Karakorum, 127001", ENDITEM, 
		"Name=pass1", "Value=Stiven Seagull", ENDITEM, 
		"Name=creditCard", "Value=3800123412341234", ENDITEM, 
		"Name=expDate", "Value=12/23", ENDITEM, 
		"Name=oldCCOption", "Value=", ENDITEM, 
		"Name=numPassengers", "Value=1", ENDITEM, 
		"Name=seatType", "Value=Coach", ENDITEM, 
		"Name=seatPref", "Value=None", ENDITEM, 
		"Name=outboundFlight", "Value=042;331;10/27/2020", ENDITEM, 
		"Name=advanceDiscount", "Value=0", ENDITEM, 
		"Name=returnFlight", "Value=", ENDITEM, 
		"Name=JSFormSubmit", "Value=off", ENDITEM, 
		"Name=.cgifields", "Value=saveCC", ENDITEM, 
		"Name=buyFlights.x", "Value=47", ENDITEM, 
		"Name=buyFlights.y", "Value=3", ENDITEM, 
		LAST);

	web_url("bookanother.gif", 
		"URL=http://localhost:1080/WebTours/images/bookanother.gif", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost:1080/cgi-bin/reservations.pl", 
		"Snapshot=t36.inf", 
		LAST);

	web_url("SignOff Button", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=flights", 
		"Snapshot=t37.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("home.html_2", 
		"URL=http://localhost:1080/WebTours/home.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t38.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("nav.pl_4", 
		"URL=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/welcome.pl?signOff=1", 
		"Snapshot=t39.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_end(NULL);

	return 0;
}