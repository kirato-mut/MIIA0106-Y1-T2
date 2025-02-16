def read_config(file_path):
    config = {}
    with open(file_path, 'r') as file:
        for line in file:
            key, value = line.strip().split('=')
            config[key] = value
    return config

def display_config(config):
    print("[Robot Configuration]")
    print(f"Speed: {config['speed']} m/s")
    print(f"Max Distance: {config['max_distance']} cm")
    print(f"Mode: {config['mode'].capitalize()}")

if __name__ == "__main__":
    config = read_config('config.txt')
    display_config(config)
