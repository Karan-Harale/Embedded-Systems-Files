
#Connect Data Pin DHT11 Sensor in GPIO26 of Raspberry Pi
import Adafruit_DHT
while True:
    humidity, temperature = Adafruit_DHT.read_retry(11, 26)
    print("Humid:{0},Temp:{1}".format(humidity,temperature))
