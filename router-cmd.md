# Router's communication protocol

## Vest Configuration

### game name
```C
void set_game_name(uint8_t index, char c);
char get_game_name(uint8_t index, char c);
```

### game mode
```C
void set_game_mode(uint8_t mode);
uint8_t get_game_mode(uint8_t mode);
```

### sound set type
```C
void set_sound_set_type(uint8_t sound_set_type);
uint8_t get_sound_set_type(uint8_t sound_set_type);
```

### enable sound
```C
void set_enable_sound(uint8_t state);
uint8_t get_enable_sound(uint8_t state);
```

### enable vest light
```C
void set_enable_vest_light(uint8_t state);
uint8_t get_enable_vest_light(uint8_t state);
```

### enable immorality
```C
void set_enable_immorality(uint8_t state);
uint8_t get_enable_immorality(uint8_t state);
```

### batch shots count
```C
void set_batch_shots_count(uint8_t batch_shots_count);
uint8_t get_batch_shots_count(uint8_t batch_shots_count);
```
