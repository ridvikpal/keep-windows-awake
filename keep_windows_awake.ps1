Write-Host "Keeping windows awake by simulating F15 key press (Press Ctrl-C to stop)..."

$wsh = New-Object -ComObject WScript.Shell
while (1) {
  $wsh.SendKeys('+{F15}') # simulate pressing F15
  Start-Sleep -seconds 59
}
