**🦁🐯 GUESS THE ANIMAL - C++ TERMINAL GAME 🎮**
🤖❓ Can a bot guess the animal you're thinking of? Help it learn and evolve!

Welcome to Guess the Animal, a smart and interactive C++ game powered by a learning AI that gets smarter every time you play! Teach the bot about new animals using yes/no questions, and watch it grow into the ultimate zoologist! 🧠🦍

**🎮 GAME MODES**

🧍 SINGLE PLAYER MODE

Think of an animal silently in your mind.

The bot will ask you a series of yes/no questions to guess it.

If it fails, you teach it by giving the correct answer and a hint/question.

The game gets smarter with every mistake you correct!

**🌳 HOW IT WORKS**

🪵 Binary Tree of Intelligence

Each node is either a question or an animal.

Left = ❌ "No", Right = ✅ "Yes"

When the bot guesses wrong, it inserts a new question node above the current animal node and updates the tree.

🧠 Example:

 (```)    Does it fly?
           /      \
        Cat       Eagle
 (```)

**📜 HOW TO PLAY**

🐾 Run the game.

🤫 Think of an animal.

💬 Answer Y or N to the bot's questions.

❌ If it fails to guess, teach it:

What was your animal?

What yes/no question would distinguish your animal?

🔁 Play again to see the bot learn new things!

**💾 FEATURES**

🎯 Interactive guessing with a thinking AI
🌳 Binary Tree learning system
🧠 Remembers and improves with each failure
🔁 Infinite replayability with smarter logic each round
⌛ Lightweight and terminal-based

**🛠️ TECH BEHIND THE SCENES**

Language: C++

Core Logic: Binary Tree

Learning: Real-time node replacement/insertion

Memory: Runtime (no file saving in current version — but can be added!)

**🧠 FUN FACT**

This bot starts with zero knowledge. Every time you beat it, you help it learn — making YOU part of the AI training team! 💡🐒

**🚀 COMPILE & RUN**

 (```)
g++ animalGame.cpp -o guessAnimal
./guessAnimal

 (```)
**⚠️ NOTES**

Answers must be Y or N (case-insensitive)

Don't type animal names unless prompted!

Extend it with file saving, GUI, or speech — it's your playground! 🎨💻
