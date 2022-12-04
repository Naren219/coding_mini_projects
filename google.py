from selenium import webdriver
from selenium.webdriver.chrome.options import Options
from selenium.webdriver.chrome.service import Service
import time

# Create the webdriver object. Here the
# chromedriver is present in the driver
# folder of the root directory.
# driver = webdriver.Chrome(service=Service('/usr/local/bin/chromedriver'), options=Options())
# driver = webdriver.Chrome(executable_path='chromedriver')
driver = webdriver.Chrome(options=Options())

# get https://www.geeksforgeeks.org/
driver.get("https://docs.google.com/forms/d/1n1xVDhPGWgMar8Gy4jrngBzDIt5_USWvu0hxAnOR9tE/viewform?edit_requested=true&pli=1")

# Maximize the window and let code stall
# for 10s to properly maximise the window.
driver.maximize_window()
time.sleep(10)

# Obtain button by link text and click.
button = driver.find_element("xpath", "//div[@name = 'Request edit access’] ")
button.click()
