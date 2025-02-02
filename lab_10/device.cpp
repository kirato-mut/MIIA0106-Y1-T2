#include <iostream>
#include <string>
using namespace std;

class Device {
protected:
	string name;  
	bool isOn;    

public:
	Device(string deviceName) : name(deviceName), isOn(false) {}

	void turnOn() {
		isOn = true;
		cout << name << " is now ON." << endl;
	}

	void turnOff() {
		isOn = false;
		cout << name << " is now OFF." << endl;
	}

	void status() {
		cout << name << " is currently " << (isOn ? "ON" : "OFF") << "." << endl;
	}
};

class Server : public Device {
private:
    int cpu;
    int ram;
    int storage;

public:
    Server(string deviceName) : Device(deviceName), cpu(1), ram(2), storage(64) {}

    void setCPU(int core) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust CPU core." << endl;
            return;
        }
        if (core >= 1 && core <= 16) {
            cpu = core;
            cout << name << "'s CPU core is set to " << cpu << "." << endl;
        }
        else {
            cout << "Invalid CPU core! Please use a value between 1 and 16." << endl;
        }
    }

    void setRam(int gb) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust RAM." << endl;
            return;
        }
        if (gb >= 2 && gb <= 64) {
            ram = gb;
            cout << name << "'s RAM is set to " << ram << "GB." << endl;
        }
        else {
            cout << "Invalid RAM size! Please use a value between 2 and 64." << endl;
        }
    }

    void setStorage(int gb) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust storage." << endl;
            return;
        }
        if (gb >= 64 && gb <= 1024) {
            storage = gb;
            cout << name << "'s storage is set to " << storage << "GB." << endl;
        }
        else {
            cout << "Invalid storage size! Please use a value between 64 and 1024." << endl;
        }
    }

    void getSpec() {
        cout << name << "'s current spec: CPU core = " << cpu << ", RAM = " << ram << "GB, Storage = " << storage << "GB." << endl;
    }
};


class AirPurifier : public Device {
private:
    int fanSpeed;
    int airScore;

public:
    AirPurifier(string deviceName) : Device(deviceName), fanSpeed(1), airScore(0) {}

    void setFanSpeed(int speed) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust fan speed." << endl;
            return;
        }
        if (speed >= 1 && speed <= 5) {
            fanSpeed = speed;
            cout << name << "'s fan speed is set to level " << fanSpeed << "." << endl;
        }
        else {
            cout << "Invalid fan speed! Please use a value between 1 and 5." << endl;
        }
    }

    void setAirScore(int score) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust air score." << endl;
            return;
        }
        if (score >= 0 && score <= 300) {
            airScore = score;
            cout << name << "'s air score is set to " << airScore << "." << endl;
        }
        else {
            cout << "Invalid air score! Please use a value between 0 and 300." << endl;
        }
    }

    void getAirScore() {
        cout << name << "'s current air score: " << airScore << "." << endl;
    }
};


class Speaker : public Device {
private:
    int volume;
    int rgbLightLevel;

public: 
    Speaker(string deviceName) : Device(deviceName), volume(0), rgbLightLevel(0) {}

    void setVolume(int level) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust volume." << endl;
            return;
        }
        if (level >= 0 && level <= 100) {
            volume = level;
            cout << name << "'s volume is set to " << volume << "." << endl;
        }
        else {
            cout << "Invalid volume level! Please use a value between 0 and 100." << endl;
        }
    }

    void setRGBLightLevel(int level) {
        if (!isOn) {
            cout << name << " is OFF. Turn it ON to adjust RGB light level." << endl;
            return;
        }
        if (level >= 0 && level <= 3) {
            rgbLightLevel = level;
            cout << name << "'s RGB light level is set to " << rgbLightLevel << "." << endl;
        }
        else {
            cout << "Invalid RGB light level! Please use a value between 0 and 3." << endl;
        }
    }

    void getConfig() {
        cout << name << "'s current configuration: Volume = " << volume << ", RGB light level = " << rgbLightLevel << "." << endl;
    }
};

int main() {

    Server webServer("Web Server");
    AirPurifier airPurifier("Air Purifier");
    Speaker musicSpeaker("Music Speaker");

    cout << "\n[Server Control]\n";
    cout << "| before turn on\n";
    webServer.status();
    webServer.setCPU(8);
    webServer.setRam(16);
    webServer.setStorage(256);
    webServer.getSpec();
    cout << "| after turn on\n";
    webServer.turnOn();
    webServer.status();
    webServer.setCPU(8);
    webServer.setRam(16);
    webServer.setStorage(256);
    webServer.getSpec();
    cout << "| re-adjuste all properties\n";
    webServer.setCPU(16);
    webServer.setRam(32);
    webServer.setStorage(512);
    webServer.getSpec();
    webServer.turnOff();
    webServer.status();

    cout << "\n[Air Purifier Control]\n";
    cout << "| before turn on\n";
    airPurifier.status();
    airPurifier.setFanSpeed(3);
    airPurifier.setAirScore(150);
    airPurifier.getAirScore();
    cout << "| after turn on\n";
    airPurifier.turnOn();
    airPurifier.status();
    airPurifier.setFanSpeed(3);
    airPurifier.setAirScore(150);
    airPurifier.getAirScore();
    cout << "| re-adjuste all properties\n";
    airPurifier.setFanSpeed(5);
    airPurifier.setAirScore(300);
    airPurifier.getAirScore();
    airPurifier.turnOff();
    airPurifier.status();

    cout << "\n[Speaker Control]\n";
    cout << "| before turn on\n";
    musicSpeaker.status();
    musicSpeaker.setVolume(50);
    musicSpeaker.setRGBLightLevel(2);
    musicSpeaker.getConfig();
    cout << "| after turn on\n";
    musicSpeaker.turnOn();
    musicSpeaker.status();
    musicSpeaker.setVolume(50);
    musicSpeaker.setRGBLightLevel(2);
    musicSpeaker.getConfig();
    cout << "| re-adjuste all properties\n";
    musicSpeaker.setVolume(100);
    musicSpeaker.setRGBLightLevel(3);
    musicSpeaker.getConfig();
    musicSpeaker.turnOff();
    musicSpeaker.status();

	return 0;
}