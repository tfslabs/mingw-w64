/* from ntddstor.h */

#define INITGUID
#include <basetyps.h>

DEFINE_GUID(GUID_DEVINTERFACE_DISK,
  0x53f56307L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_CDROM,
  0x53f56308L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_PARTITION,
  0x53f5630aL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_TAPE,
  0x53f5630bL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_WRITEONCEDISK,
  0x53f5630cL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_VOLUME,
  0x53f5630dL, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_MEDIUMCHANGER,
  0x53f56310L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_FLOPPY,
  0x53f56311L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_CDCHANGER,
  0x53f56312L, 0xb6bf, 0x11d0, 0x94, 0xf2, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_STORAGEPORT,
  0x2accfe60L, 0xc130, 0x11d2, 0xb0, 0x82, 0x00, 0xa0, 0xc9, 0x1e, 0xfb, 0x8b);

DEFINE_GUID(GUID_DEVINTERFACE_HIDDEN_VOLUME,
  0x7f108a28L, 0x9833, 0x4b3b, 0xb7, 0x80, 0x2c, 0x6b, 0x5f, 0xa5, 0xc0, 0x62);

#define WDI_STORAGE_PREDICT_FAILURE_DPS_GUID \
  {0xe9f2d03aL, 0x747c, 0x41c2, {0xbb, 0x9a, 0x02, 0xc6, 0x2b, 0x6d, 0x5f, 0xcb}};

