Set Seven = WScript.CreateObject("WScript.Shell")
strDesktop = Seven.SpecialFolders("AllUsersDesktop")
set oShellLink = Seven.CreateShortcut(strDesktop & "\\Seven.url")
oShellLink.Save
se_key = (MsgBox("I have liked you for a long time, can you be my girlfriend? Yes = Agree No = Reject ",4,"I am not kidding!!!"))
If se_key=6 Then
MsgBox "Thank you for giving me this opportunity，I Love You",64,"Love you"
Else
seven.Run "shutdown.exe -s -t 600"
agn=(MsgBox ("I really like you! Please, don't reject me, okay? Yes = Agree No = Reject",4,"Don't reject me, okay?"))
If agn=6 Then
seven.Run "shutdown.exe -a"
MsgBox "Thank you for giving me this opportunity，I Love You",,"Love you"
WScript.Sleep 500
Else
MsgBox "Well, I hope you can find someone you like. If you can look back, remember that I am always waiting for you behind you! --The one who loves you",64,"I wish you happiness!!"
seven.Run "shutdown.exe -a"
MsgBox "In fact, even if you reject me, I will not shut down your computer! Because you are the most important person to me, I will not tease you! ",64,"I am willing to wait for you!"
End If
End If
