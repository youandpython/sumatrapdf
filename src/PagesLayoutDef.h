// DON'T EDIT MANUALLY !!!!
// auto-generated by gen_txt.py !!!!

using namespace sertxt;

struct PagesLayoutDef {
    const char* name;
    const char* page1;
    const char* page2;
    i32 spaceDx;
};

extern const StructMetadata gPagesLayoutDefMetadata;

inline PagesLayoutDef* DeserializePagesLayoutDef(char* data, size_t dataLen) {
    auto s = std::string_view(data, dataLen);
    return (PagesLayoutDef*)Deserialize(s, &gPagesLayoutDefMetadata);
}

inline PagesLayoutDef* DeserializePagesLayoutDef(TxtNode* root) {
    return (PagesLayoutDef*)Deserialize(root, &gPagesLayoutDefMetadata);
}

inline std::string_view SerializePagesLayoutDef(PagesLayoutDef* val) {
    return Serialize((const u8*)val, &gPagesLayoutDefMetadata);
}

inline void FreePagesLayoutDef(PagesLayoutDef* val) {
    FreeStruct((u8*)val, &gPagesLayoutDefMetadata);
}
