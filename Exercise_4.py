
string = input("Enter your text: ")
Sp_chars= ['!','*','+','>','<','¡','¿','?','|','°','#','""','$','%','&','/','()','=','-','{}','^']
for i in Sp_chars :
    string = string.replace(i, '')
wordlist=string.split()
wordfreq=[]
for w in wordlist:
    wordfreq.append(wordlist.count(w))
print(string.lower())
print("List\n" + str(wordlist) + "\n")
print("Frequencies\n" + str(wordfreq) + "\n")