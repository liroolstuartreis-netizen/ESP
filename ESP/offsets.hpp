#pragma once

namespace offsets {
    namespace world {
        constexpr auto world = 0x4263FE8; // Updated for DayZ 1.29
        constexpr auto near_entity_table = 0x1090; // Updated for DayZ 1.29
        constexpr auto near_entity_table_size = 0xF50; // Retained from old, no update found
        constexpr auto far_entity_table = 0xF48; // Updated for DayZ 1.29
        constexpr auto far_entity_table_size = 0x1098; // Retained from old, no update found
        constexpr auto bullet_table = 0xE00; // Retained from old, no update found
        constexpr auto bullet_table_size = 0xE08; // Retained from old, no update found
        constexpr auto local_player = 0x2960; // Confirmed for DayZ 1.29
        constexpr auto camera = 0x1B8; // Confirmed for DayZ 1.29
    }

    namespace camera {
        constexpr auto view_projection = 0xD0; // Retained from old, no update found
        constexpr auto view_matrix = 0x8; // Retained from old, no update found
        constexpr auto view_port_matrix = 0x58; // Retained from old, no update found
    }

    namespace human_type {
        constexpr auto object_name = 0x70; // Retained from old, no update found
        constexpr auto category_name = 0xA8; // Confirmed for DayZ 1.29
    }

    namespace weapon {
        constexpr auto muzzle_count = 0x6E4; // Retained from old, no update found
        constexpr auto weapon_info_size = 0xE0; // Retained from old, no update found
        constexpr auto weapon_index = 0x6D0; // Retained from old, no update found
        constexpr auto weapon_info_table = 0x6D8; // Retained from old, no update found
    }

    namespace magazine {
        constexpr auto magazine_type = 0x180; // Retained from old, no update found
        constexpr auto ammo_count = 0x6DC; // Retained from old, no update found
    }

    namespace human {
        constexpr auto visual_state = 0x1C8; // Updated for DayZ 1.29
        constexpr auto human_type = 0x180; // Updated for DayZ 1.29
        constexpr auto lod_shape = 0x208; // Retained from old, no update found
    }

    namespace anim_class {
        constexpr auto matrix_array = 0xBF0; // Retained from old, no update found
    }

    namespace inventory_item {
        constexpr auto item_inventory = 0x680; // Retained from old, no update found
    }

    namespace dayz_infected {
        constexpr auto skeleton = 0x6A0; // Retained from old, no update found
    }

    namespace dayz_player {
        constexpr auto skeleton = 0x830; // Retained from old, no update found
        constexpr auto network_id = 0x30; // Updated for DayZ 1.29
        constexpr auto inventory = 0x680; // Retained from old, no update found
    }

    namespace visual_state {
        constexpr auto inverse_transform = 0xA4; // Retained from old, no update found
        constexpr auto transform = 0x8; // Retained from old, no update found
    }

    namespace dayz_player_inventory {
        constexpr auto hands = 0x1B0; // Retained from old, no update found
    }

    namespace weapon_inventory {
        constexpr auto magazine_ref = 0x150; // Retained from old, no update found
    }

    namespace ammo_type {
        constexpr auto init_speed = 0x364; // Retained from old, no update found
        constexpr auto air_friction = 0x3B4; // Retained from old, no update found
    }

    namespace skeleton {
        constexpr auto anim_class1 = 0x70; // Retained from old, no update found
        constexpr auto anim_class2 = 0x28; // Retained from old, no update found
    }
}
