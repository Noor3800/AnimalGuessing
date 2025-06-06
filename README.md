**🦁🐯 GUESS THE ANIMAL - C++ TERMINAL GAME 🎮  **
🤖❓ Can a bot guess the animal you're thinking of? Help it learn and evolve!

Welcome to **Guess the Animal**, a smart and interactive C++ game powered by a learning AI that gets smarter every time you play!  
Teach the bot about new animals using yes/no questions, and watch it grow into the ultimate zoologist! 🧠🦍

---

## 🎮 GAME MODES

### 🧍 SINGLE PLAYER MODE
- Think of an animal silently in your mind.
- The bot will ask you yes/no questions to guess it.
- If it fails, you teach it the correct animal and a new question.
- The bot learns and gets smarter every time!

---

## 🌳 HOW IT WORKS

### 🪵 Binary Tree of Intelligence
- Each node is either a **question** or an **animal**.
- Left ➡️ ❌ "No"  
  Right ➡️ ✅ "Yes"

When the bot guesses wrong:
- It adds a new **question node** above the wrong animal.
- The tree updates and improves.

### 🧠 Example:
    Does it fly?
      /     \
   Cat     Eagle


---

## 📜 HOW TO PLAY

1. 🐾 Run the game.
2. 🤫 Think of an animal.
3. 💬 Answer `Y` or `N` to the bot’s questions.
4. ❌ If it fails, teach it:
   - What was your animal?
   - What yes/no question would help guess it?

🔁 **Play again** to see how much it learned!

---

## 💾 FEATURES

- 🎯 Interactive guessing with a thinking AI  
- 🌳 Binary Tree learning system  
- 🧠 Remembers and improves with each failure  
- 🔁 Infinite replayability  
- ⌛ Terminal-based & lightweight  

---

## 🛠️ TECH BEHIND THE SCENES

- **Language**: C++  
- **Core Logic**: Binary Tree  
- **Learning**: Real-time node update  
- **Memory**: Runtime only (no file saving yet)

---

## 🧠 FUN FACT

This bot starts with **zero knowledge**.  
Every time you beat it, you help it **learn** — making **YOU** part of the AI training team! 💡🐒

---

## 🚀 COMPILE & RUN

```bash
g++ animalGame.cpp -o guessAnimal
./guessAnimal
```

**⚠️ NOTES**

Answers must be Y or N (case doesn’t matter)

Don’t type animal names unless asked

Want more features? Add file saving, GUI, or even speech! 🎨💻
