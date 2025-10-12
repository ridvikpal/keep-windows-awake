import pyautogui

import time

pyautogui.FAILSAFE = True

screen = pyautogui.size()

while True:
    time.sleep(5)
    pyautogui.click(int(screen.width/2), 5)
    print(f"Screen has been clicked at ({int(screen.width/2)}, {5})")
