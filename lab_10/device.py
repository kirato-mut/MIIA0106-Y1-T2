class Device:
    def __init__(self, name):
        self.name = name  
        self.is_on = False  

    def turn_on(self):
        self.is_on = True
        print(f"{self.name} is now ON.")

    def turn_off(self):
        self.is_on = False
        print(f"{self.name} is now OFF.")

    def status(self):
        state = "ON" if self.is_on else "OFF"
        print(f"{self.name} is currently {state}.")

class Server(Device):
    def __init__(self, name, cpu=1, ram=2, storage=64):
        super().__init__(name)
        self.cpu = cpu
        self.ram = ram
        self.storage = storage

    def set_cpu(self, core):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust CPU core.")
            return
        if 1 <= core <= 16:
            self.cpu = core
            print(f"{self.name}'s CPU core is set to {self.cpu}.")
        else:
            print("Invalid CPU core! Please use a value between 1 and 16.")

    def set_ram(self, gb):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust RAM.")
            return
        if 2 <= gb <= 64:
            self.ram = gb
            print(f"{self.name}'s RAM is set to {self.ram}GB.")
        else:
            print("Invalid RAM size! Please use a value between 2 and 64.")

    def set_storage(self, gb):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust storage.")
            return
        if 64 <= gb <= 1024:
            self.storage = gb
            print(f"{self.name}'s storage is set to {self.storage}GB.")
        else:
            print("Invalid storage size! Please use a value between 64 and 1024.")

    def get_spec(self):
        print(f"{self.name}'s current spec: CPU core = {self.cpu}, RAM = {self.ram}GB, Storage = {self.storage}GB.")

class AirPurifier(Device):
    def __init__(self, name, fan_speed=1, air_score=0):
        super().__init__(name)
        self.fan_speed = fan_speed
        self.air_score = air_score

    def set_fan_speed(self, speed):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust fan speed.")
            return
        if 1 <= speed <= 5:
            self.fan_speed = speed
            print(f"{self.name}'s fan speed is set to level {self.fan_speed}.")
        else:
            print("Invalid fan speed! Please use a value between 1 and 5.")

    def set_air_score(self, score):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust air score.")
            return
        if 0 <= score <= 300:
            self.air_score = score
            print(f"{self.name}'s air score is set to {self.air_score}.")
        else:
            print("Invalid air score! Please use a value between 0 and 300.")

    def get_air_score(self):
        print(f"{self.name}'s current air score: {self.air_score}.")

class Speaker(Device):
    def __init__(self, name, volume=0, rgb_light_level=0):
        super().__init__(name)
        self.volume = volume
        self.rgb_light_level = rgb_light_level

    def set_volume(self, level):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust volume.")
            return
        if 0 <= level <= 100:
            self.volume = level
            print(f"{self.name}'s volume is set to {self.volume}.")
        else:
            print("Invalid volume level! Please use a value between 0 and 100.")

    def set_rgb_light_level(self, level):
        if not self.is_on:
            print(f"{self.name} is OFF. Turn it ON to adjust RGB light level.")
            return
        if 0 <= level <= 3:
            self.rgb_light_level = level
            print(f"{self.name}'s RGB light level is set to {self.rgb_light_level}.")
        else:
            print("Invalid RGB light level! Please use a value between 0 and 3.")

    def get_config(self):
        print(f"{self.name}'s current configuration: Volume = {self.volume}, RGB light level = {self.rgb_light_level}.")


def main():

    web_server = Server("Web Server")
    air_purifier = AirPurifier("Air Purifier")
    music_speaker = Speaker("Music Speaker")

    print("\n[Server Control]\n")
    print("| before turn on")
    web_server.status()
    web_server.set_cpu(8)
    web_server.set_ram(16)
    web_server.set_storage(256)
    web_server.get_spec()
    print("| after turn on")
    web_server.turn_on()
    web_server.status()
    web_server.set_cpu(8)
    web_server.set_ram(16)
    web_server.set_storage(256)
    web_server.get_spec()
    print("| re-adjuste all properties")
    web_server.set_cpu(16)
    web_server.set_ram(32)
    web_server.set_storage(512)
    web_server.get_spec()
    web_server.turn_off()
    web_server.status()

    print("\n[Air Purifier Control]\n")
    print("| before turn on")
    air_purifier.status()
    air_purifier.set_fan_speed(3)
    air_purifier.set_air_score(150)
    air_purifier.get_air_score()
    print("| after turn on")
    air_purifier.turn_on()
    air_purifier.status()
    air_purifier.set_fan_speed(3)
    air_purifier.set_air_score(150)
    air_purifier.get_air_score()
    print("| re-adjuste all properties")
    air_purifier.set_fan_speed(5)
    air_purifier.set_air_score(300)
    air_purifier.get_air_score()
    air_purifier.turn_off()
    air_purifier.status()

    print("\n[Speaker Control]\n")
    print("| before turn on")
    music_speaker.status()
    music_speaker.set_volume(50)
    music_speaker.set_rgb_light_level(2)
    music_speaker.get_config()
    print("| after turn on")
    music_speaker.turn_on()
    music_speaker.status()
    music_speaker.set_volume(50)
    music_speaker.set_rgb_light_level(2)
    music_speaker.get_config()
    print("| re-adjuste all properties")
    music_speaker.set_volume(100)
    music_speaker.set_rgb_light_level(3)
    music_speaker.get_config()



if __name__ == "__main__":
    main()