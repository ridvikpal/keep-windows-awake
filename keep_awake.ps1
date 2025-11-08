# Keeps the computer awake by simulating F15 keyboard press

$wsh = New-Object -ComObject WScript.Shell

Write-Host "Keeping screen awake..."

while (1) {
  $wsh.SendKeys('+{F15}')
  Start-Sleep -seconds 59
}
