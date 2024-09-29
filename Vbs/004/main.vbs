const title = "Love Test"
const yourname = "Wang Bingbing"
const question = "Who is your favorite person? Please enter his or her name in the box below."
const info = "You are lying! Don't run away, tell the truth."
const scend = "You've spoken your heart out, so confess to him or her."
dim youranswer
do
youranswer = inputbox(question, title)
if youranswer <> yourname then msgbox info, vbinformation+vbokonly, title
loop until youranswer = yourname
msgbox scend, vbinformation+vbokonly, title
