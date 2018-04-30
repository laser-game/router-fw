# Router's communication protocol

## Vest Configuration

### `set_game_name`
```C
uint8_t index; // index position char in name 0-15
char c;        // set char
```

### `get_game_name`
```C
uint8_t index; // index position char in name 0-15
char c;        // set char
```

### `set_game_mode`
```C
uint8_t mode;
```

### `get_game_mode`
```C
uint8_t mode;
```

### `set_sound_set_type`
```C
uint8_t sound_set_type;
```

### `get_sound_set_type`
```C
uint8_t sound_set_type;
```

### `set_enable_sound`
```C
uint8_t state;
```

### `get_enable_sound`
```C
uint8_t state;
```

### `set_enable_vest_light`
```C
uint8_t state;
```

### `get_enable_vest_light`
```C
uint8_t state;
```

### `set_enable_immorality`
```C
uint8_t state;
```

### `get_enable_immorality`
```C
uint8_t state;
```

### `set_batch_shots_count`
```C
uint8_t batch_shots_count;
```

### `get_batch_shots_count`
```C
uint8_t batch_shots_count;
```
