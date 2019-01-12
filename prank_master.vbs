' Developer: Minhas Kamal
' Shows an unending sequence of annoying messages.

DO UNTIL a
	WScript.Sleep(29999)
	x=MsgBox("There was a problem detected in your system. Do you want to mount propagation?", 2+16, "Error Notice!!!")
	WScript.Sleep(999)
	y=MsgBox("This may harm the BIOS of your computer. Are you sure?", 3+48, "Warning!")
	WScript.Sleep(7999)
	z=MsgBox("The process completed.             ", 0+64, "Message")
LOOP
