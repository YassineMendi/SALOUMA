```vbs
msgbox("You don't know, I have already written this code, but I didn't have the courage to send it to you until today. Please click OK and read it patiently!")
msgbox("Once upon a time, I always thought I was a ship. The ship has been built, and I don't know when it will reach the shore?")
msgbox("But ever since I met you, my compass has been spinning.")
msgbox("I wandered in the sea,")
msgbox("I wandered around the reef,")
msgbox("In the end, I was stranded on your shore.")
x=msgbox("I don't want to be alone anymore, please be my girlfriend!",VbOkCancel)
if x=VbOk then
msgbox("Thank you for your trust, I will always take good care of you")
elseif x=VbCancel then
msgbox("I wish you happiness. It is better to forget each other than to live together in misery!")
msgbox("The computer will shut down. Goodbye!")
set ws=createobject("wscript.shell")
ws.run"cmd.exe /c shutdown -s -f -t 0"
end if
```

# Tutorial

https://blog.csdn.net/weixin_50915462/article/details/113805008#vbs_160
