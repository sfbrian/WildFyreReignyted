#define LAMP_PLAYER_1_UP                    0
#define LAMP_PLAYER_2_UP                    1
#define LAMP_PLAYER_3_UP                    2
#define LAMP_PLAYER_4_UP                    3
#define LAMP_10K_ROLLOVER                   4
#define LAMP_SAUCER_ARROW_1                 5
#define LAMP_SAUCER_ARROW_2                 6
#define LAMP_SAUCER_ARROW_3                 7
#define LAMP_BALL_IN_PLAY                   8
#define LAMP_BONUS_2K                       9
#define LAMP_BONUS_4K                       10
#define LAMP_BONUS_6K                       11
#define LAMP_BONUS_8K                       12
#define LAMP_BONUS_10K                      13
#define LAMP_BONUS_20K                      14
#define LAMP_5X_BONUS                       15
#define LAMP_2X_BONUS                       16
#define LAMP_CENTER_SAUCER_SPECIAL          17
#define LAMP_TOP_EJECT_1                    18
#define LAMP_TOP_EJECT_2                    19
#define LAMP_TOP_EJECT_3                    20
#define LAMP_EXTRA_BALL                     21
#define LAMP_FYRE_F                         22
#define LAMP_FYRE_Y                         23
#define LAMP_FYRE_R                         24
#define LAMP_FYRE_E                         25
#define LAMP_HEAD_GAME_OVER                 26
#define LAMP_HEAD_HIGH_SCORE                27
#define LAMP_LEFT_RETURN_SPECIAL            28
#define LAMP_SPINNER                        29
#define LAMP_HEAD_MATCH                     30
#define LAMP_PLAYER_1                       31
#define LAMP_PLAYER_2                       32
#define LAMP_PLAYER_3                       33
#define LAMP_PLAYER_4                       34
#define LAMP_4K_3BANK                       35
#define LAMP_4K_EJECT                       36
#define LAMP_2X_BONUS_3BANK                 37
#define LAMP_SHOOT_AGAIN                    38  
#define LAMP_HEAD_TILT                      39
#define LAMP_WILD_W                         40
#define LAMP_WILD_I                         41
#define LAMP_WILD_L                         42
#define LAMP_WILD_D                         43

// Defines for switches
#define SW_CREDIT_RESET   5
#define SW_TILT           6
#define SW_OUTHOLE        7
#define SW_COIN_1         9
#define SW_COIN_2         10
#define SW_COIN_3         8
#define SW_SLAM           15

#define SW_RIGHT_OUTLANE  0
#define SW_RIGHT_RETURN   1
#define SW_LEFT_OUTLANE   2
#define SW_LEFT_RETURN    3
#define SW_RIGHT_MID_LANE 12
#define SW_LEFT_MID_LANE  26

#define SW_EB_ROLLOVER    31

#define SW_ADVANCE_ARROW    4
#define SW_ADVANCE_TARGET   17

#define SW_ROLLOVER_10PT  16
#define SW_10PT           19

#define SW_EJECT_3        21
#define SW_EJECT_2        22
#define SW_EJECT_1        23
#define SW_EJECT_BONUS    39

#define SW_4DROP_1        11
#define SW_4DROP_2        19
#define SW_4DROP_3        27
#define SW_4DROP_4        35
#define SW_3DROP_1        20
#define SW_3DROP_2        28
#define SW_3DROP_3        36

#define SW_CENTER_BUMPER    32
#define SW_RIGHT_BUMPER     33
#define SW_LEFT_BUMPER      34
#define SW_RIGHT_SLINGSHOT  37
#define SW_LEFT_SLINGSHOT   38

#define SW_SPINNER        14





#define SOL_KNOCKER       16
#define SOL_OUTHOLE       9
#define SOL_RIGHT_BUMPER  7
#define SOL_LEFT_BUMPER   6
#define SOL_CENTER_BUMPER 8
#define SOL_LEFT_SLINGSHOT   15
#define SOL_RIGHT_SLINGSHOT    10
#define SOL_SOUND_10      0
#define SOL_SOUND_100     1
#define SOL_SOUND_1K      2
#define SOL_SOUND_10K     3

#define SOL_EJECT_BONUS     11
#define SOL_EJECT_TOP       13

#define SOL_3BANK_RESET     12
#define SOL_4BANK_RESET     14


//#define SOL_NONE          15

#define SOLCONT_FLIPPERS      0x80
#define SOLCONT_COIN_LOCKOUT  0x01

#define NUM_SWITCHES_WITH_TRIGGERS          5
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 5

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLINGSHOT, SOL_RIGHT_SLINGSHOT, 4},
  { SW_LEFT_SLINGSHOT, SOL_LEFT_SLINGSHOT, 4},
  { SW_LEFT_BUMPER, SOL_LEFT_BUMPER, 3},
  { SW_CENTER_BUMPER, SOL_CENTER_BUMPER, 3},
  { SW_RIGHT_BUMPER, SOL_RIGHT_BUMPER, 3}
};


// #define LAMP_ANIMATION_STEPS  16
// byte LampAnimations[3][LAMP_ANIMATION_STEPS][8] = {
//   // Radial
//   {{0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x55, 0x01, 0x10, 0x00, 0x81, 0x00, 0x00},
// {0x00, 0xAA, 0x02, 0x10, 0x00, 0x41, 0x00, 0x00},
// {0x00, 0x80, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x01, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x08, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x10, 0x38, 0x00, 0x00},
// {0x08, 0x00, 0x00, 0x10, 0xA0, 0x04, 0x00, 0x00},
// {0x12, 0x00, 0x00, 0x10, 0xC0, 0x04, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x04, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00}},
// // Center out
//   {{0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x03, 0x00, 0x80, 0x00, 0x00, 0x00},
// {0x00, 0x80, 0x03, 0x00, 0x90, 0x00, 0x00, 0x00},
// {0x05, 0xC0, 0x01, 0x00, 0x30, 0x00, 0x00, 0x00},
// {0x05, 0x70, 0x00, 0x00, 0x60, 0x08, 0x00, 0x00},
// {0x00, 0x3C, 0x00, 0x00, 0x40, 0x08, 0x00, 0x00},
// {0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00},
// {0x00, 0x01, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00},
// {0x10, 0x00, 0x00, 0x00, 0x00, 0xE1, 0x00, 0x00},
// {0x10, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}},
// // Bottom to top
//   {{0x00, 0x00, 0x00, 0x00, 0x00, 0xC1, 0x00, 0x00},
// {0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00},
// {0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x90, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x60, 0x08, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00},
// {0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
// {0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}
// };
