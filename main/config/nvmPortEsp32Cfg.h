// Hardware configuration of the ESP32 NVM port. The storage is kept in NVS as fixed size chunks.

#ifndef BPB_NVMPORTESP32CFG_H
#define BPB_NVMPORTESP32CFG_H

// NVS namespace, at most 15 characters.
#ifndef BPB_NVM_NAMESPACE
#define BPB_NVM_NAMESPACE      "bico_pb_nvm"
#endif

// Size of one NVS blob that holds a part of the storage.
#ifndef BPB_NVM_CHUNK_SIZE
#define BPB_NVM_CHUNK_SIZE     256U
#endif

#endif /* BPB_NVMPORTESP32CFG_H */
