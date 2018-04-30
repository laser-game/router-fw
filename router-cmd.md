# Router's communication protocol

## Vest Configuration

### game name
```cpp
void set_game_name_char(uint8_t index, char c);
char get_game_name_char(uint8_t index);
void set_game_name_string(string name);
string get_game_name_string(void);
```

### game sate
```cpp
void set_game_state(uint8_t state);
```

### time
```cpp
void set_game_time(uint8_t h, uint8_t m, uint8_t s);
```

### game mode
```cpp
void set_game_mode(uint8_t mode);
uint8_t get_game_mode(void);
```

### sound set type
```cpp
void set_sound_set_type(uint8_t sound_set_type);
uint8_t get_sound_set_type(void);
```

### enable sound
```cpp
void set_enable_sound(uint8_t state);
uint8_t get_enable_sound(void);
```

### enable vest light
```cpp
void set_enable_vest_light(uint8_t state);
uint8_t get_enable_vest_light(void);
```

### enable immorality
```cpp
void set_enable_immorality(uint8_t state);
uint8_t get_enable_immorality(void);
```

### batch shots count
```cpp
void set_batch_shots_count(uint8_t batch_shots_count);
uint8_t get_batch_shots_count(void);
```

### vest name
```cpp
void set_vest_name_char(uint8_t vest, uint8_t index, char c);
char get_vest_name_char(uint8_t vest, uint8_t index);
void set_vest_name_string(uint8_t vest, string name);
string get_vest_name_string(uint8_t vest);
```

### shots counter
```cpp
void set_vest_shots_count(uint8_t vest, uint16_t batch_shots_count);
uint16_t get_vest_shots_count(uint8_t vest);
```

### battery
```cpp
uint8_t get_vest_battery_state(uint8_t vest, uint8_t index);
uint8_t set_vest_battery_level(uint8_t vest, string name);
```

### color
```cpp
void set_vest_color(uint8_t vest, rgb_t rgb);
rgb_t get_vest_color(uint8_t vest);
```

### events
```cpp
void set_vest_event_hit_me(uint8_t vest, uint8_t who);
uint8_t get_vest_event_hit_me(uint8_t vest);
void get_vest_events_new(uint8_t vest);
```


## RF packet

![demo](/img/lgrf_packet.svg)
