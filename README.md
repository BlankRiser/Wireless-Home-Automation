

# Wireless Home Automation



## Installing NodeMCU library

* Go to File > Preferences. In the "Additional Boards Manager URLs" field, [copy](http://arduino.esp8266.com/stable/package_esp8266com_index.json)

  ```pseudocode
  http://arduino.esp8266.com/stable/package_esp8266com_index.json
  ```

   click OK.

* Go to  Tools > Board > Board Manager. Type "esp8266" in the search field. The entry "esp8266 by ESP8266 Community" should appear. Click that entry and install it.

* Use the site below for [pin](https://www.electronicwings.com/nodemcu/nodemcu-gpio-with-arduino-ide) diagram.

  ```pse
  https://www.electronicwings.com/nodemcu/nodemcu-gpio-with-arduino-ide
  ```
  
  
  
  

## Installing Blynk library

* Get the latest [library zip](https://github.com/blynkkk/blynk-library/releases) file from the given link

  ```ps
  https://github.com/blynkkk/blynk-library/releases
  ```

* Extract the zip file to 'libraries' folder where Arduino is installed, usually here:

  ```pseu
  C:\Program Files (x86)\Arduino\libraries
  ```



## Circuit diagram

![circuit](C:\Users\rscho\OneDrive\Desktop\IoT\Images\circuit.PNG)



## Configuring [Blynk]([http://blynk.cc](http://blynk.cc/)) App

* Install Blynk from app store and create an account. An auth code will be generated, that'll be sent to your mail id.

* Open Blynk > + New Project 

* Assign a name to your project and select the microcontroller. I've used ESP8266(Wi-Fi) for the project.

* Swipe right, and add buttons with [pin configurations](https://imgur.com/a/9gRnp6f) as per the circuit.

  ## Code

  From the given source code, change SSID, password to your WIFI Name and password. Auth will be provided by you to your email.

  ```c++
  char auth[] = "your_auth";
  char ssid[] = "WiFi nAME";
  char pass[] = "WiFi Passowrd";
  ```

  

  

