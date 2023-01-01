/*
Copyright 2022 0xCB - Conor Burns (Conor-Burns)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include "1337.h"

led_config_t g_led_config = {{// Key Matrix to LED Index
                              {3, 1, NO_LED},
                              {8, 6, 4},
                              {11, 10, 9}},
                             {// LED Index to Physical Position
                              {0, 0},
                              {112, 0},
                              {0, 32},
                              {112, 32},
                              {224, 32},
                              {0, 64},
                              {112, 64},
                              {224, 64},

                              {56, 16},
                              {168, 16},
                              {56, 48},
                              {168, 48}},
                             {// LED Index to Flag
                              2, 4, 2, 4, 4, 2, 4, 2, 4, 4, 4, 4}};
