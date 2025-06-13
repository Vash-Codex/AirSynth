# 🎹 Air Piano

A contactless musical instrument that lets you play piano by moving your hand in the air! Using an ultrasonic sensor and Arduino, hand movements are converted into beautiful piano notes with a stunning visual interface.

## ✨ Features

- 🎵 **Real Piano Sounds** - High-quality WAV audio files for authentic piano experience
- 🌈 **Animated Visual Interface** - Modern UI with gradient backgrounds, glowing effects, and smooth animations
- 📏 **Real-time Distance Visualization** - Color-coded distance bar showing sensor readings
- 🎨 **Visual Feedback** - Piano keys light up and animate when notes are played
- ⚡ **Responsive Controls** - Ultra-low latency for real-time musical performance
- 🎹 **Full Chromatic Scale** - All 12 notes (C, C#, D, D#, E, F, F#, G, G#, A, A#, B)

## 🛠️ Hardware Requirements

- **Arduino Uno** (or compatible)
- **HC-SR04 Ultrasonic Sensor**
- **Jumper Wires**
- **Breadboard** (optional)
- **USB Cable** for Arduino connection

### Wiring Diagram
```
HC-SR04    →    Arduino Uno
VCC        →    5V
GND        →    GND
Trig       →    Pin 10
Echo       →    Pin 9
```

## 💻 Software Requirements

- **Python 3.7+**
- **Arduino IDE**
- **Required Python Libraries:**
  ```bash
  pip install pygame pyserial
  ```

## 🎼 Audio Files

Download piano WAV files and organize them as:
```
wav/
├── c1.wav
├── c1s.wav
├── d1.wav
├── d1s.wav
├── e1.wav
├── f1.wav
├── f1s.wav
├── g1.wav
├── g1s.wav
├── a1.wav
├── a1s.wav
└── b1.wav
```

*Note: You can find free piano WAV files online or record your own.*

## 🚀 Installation & Setup

### 1. Clone the Repository
```bash
git clone https://github.com/yourusername/air-piano.git
cd air-piano
```

### 2. Install Python Dependencies
```bash
pip install pygame pyserial
```

### 3. Upload Arduino Code
- Open `air_piano.ino` in Arduino IDE
- Connect your Arduino
- Upload the code to your Arduino

### 4. Configure Serial Port
- Update the COM port in `air_piano.py`:
```python
ser = serial.Serial('COM8', 9600, timeout=1)  # Change COM8 to your port
```

### 5. Update Audio File Path
- Modify the audio file path in `air_piano.py`:
```python
note_sounds[note] = pygame.mixer.Sound(f"your/path/to/wav/{filename}")
```

### 6. Run the Application
```bash
python air_piano.py
```

## 🎮 How to Play

1. **Power On** - Connect Arduino and run the Python application
2. **Position Your Hand** - Hold your hand 5-50cm above the ultrasonic sensor
3. **Play Music** - Move your hand closer or farther to play different notes:
   - **Closer (5cm)** → Higher pitched notes (B, A#, A...)
   - **Farther (50cm)** → Lower pitched notes (...D, C#, C)
4. **Watch the Magic** - Enjoy the visual feedback as keys light up and colors flash!

## 📁 Project Structure

```
air-piano/
├── air_piano.ino          # Arduino sensor code
├── air_piano.py           # Main Python application
├── wav/                   # Piano sound files
│   ├── c1.wav
│   ├── c1s.wav
│   └── ...
├── README.md              # This file
├── requirements.txt       # Python dependencies
└── demo.gif              # Demo animation
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit issues, feature requests, or pull requests.

---

⭐ **Star this project if you found it interesting!** ⭐

*Made with ❤️ and Python*
