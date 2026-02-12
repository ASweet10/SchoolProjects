import pyautogui # Move & click mouse
import time # Sleep
import keyboard # Detect keyboard input

i = 1
numClicks = 251

while i < numClicks:
    if keyboard.is_pressed("j"):
        print("abort!")
        break
    pyautogui.moveTo(200, 525, duration=2)
    pyautogui.mouseDown()
    pyautogui.mouseUp()
    time.sleep(0.5)
    pyautogui.moveTo(800, 525, duration=1.5)
    pyautogui.mouseDown()
    pyautogui.mouseUp()
    print(i)
    i += 1


print("Thank you for using the auto clicker :)")