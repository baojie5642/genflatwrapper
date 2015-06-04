// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_GAME_GEN_H_
#define FLATBUFFERS_GENERATED_GAME_GEN_H_

#include "flatbuffers/flatbuffers.h"


namespace gen {

struct LoginRequest;
struct LoginResponse;
struct LoginTestResponse;

struct LoginRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static int32_t msgID(){return 1;}
  const flatbuffers::String *username() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* msgID */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* username */) &&
           verifier.Verify(username()) &&
           verifier.EndTable();
  }
};

struct LoginRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_msgID(int32_t msgID) { fbb_.AddElement<int32_t>(4, msgID, 1); }
  void add_username(flatbuffers::Offset<flatbuffers::String> username) { fbb_.AddOffset(6, username); }
  LoginRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  LoginRequestBuilder &operator=(const LoginRequestBuilder &);
  flatbuffers::Offset<LoginRequest> Finish() {
    auto o = flatbuffers::Offset<LoginRequest>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<LoginRequest> CreateLoginRequest(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t msgID = 1,
   flatbuffers::Offset<flatbuffers::String> username = 0) {
  LoginRequestBuilder builder_(_fbb);
  builder_.add_username(username);
  builder_.add_msgID(msgID);
  return builder_.Finish();
}

struct LoginResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static int32_t msgID(){return 1;}
  const flatbuffers::String *username() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* msgID */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* username */) &&
           verifier.Verify(username()) &&
           verifier.EndTable();
  }
};

struct LoginResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_msgID(int32_t msgID) { fbb_.AddElement<int32_t>(4, msgID, 1); }
  void add_username(flatbuffers::Offset<flatbuffers::String> username) { fbb_.AddOffset(6, username); }
  LoginResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  LoginResponseBuilder &operator=(const LoginResponseBuilder &);
  flatbuffers::Offset<LoginResponse> Finish() {
    auto o = flatbuffers::Offset<LoginResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<LoginResponse> CreateLoginResponse(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t msgID = 1,
   flatbuffers::Offset<flatbuffers::String> username = 0) {
  LoginResponseBuilder builder_(_fbb);
  builder_.add_username(username);
  builder_.add_msgID(msgID);
  return builder_.Finish();
}

struct LoginTestResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  static int32_t msgID(){return 3;}
  const flatbuffers::String *username() const { return GetPointer<const flatbuffers::String *>(6); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, 4 /* msgID */) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, 6 /* username */) &&
           verifier.Verify(username()) &&
           verifier.EndTable();
  }
};

struct LoginTestResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_msgID(int32_t msgID) { fbb_.AddElement<int32_t>(4, msgID, 3); }
  void add_username(flatbuffers::Offset<flatbuffers::String> username) { fbb_.AddOffset(6, username); }
  LoginTestResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  LoginTestResponseBuilder &operator=(const LoginTestResponseBuilder &);
  flatbuffers::Offset<LoginTestResponse> Finish() {
    auto o = flatbuffers::Offset<LoginTestResponse>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<LoginTestResponse> CreateLoginTestResponse(flatbuffers::FlatBufferBuilder &_fbb,
   int32_t msgID = 3,
   flatbuffers::Offset<flatbuffers::String> username = 0) {
  LoginTestResponseBuilder builder_(_fbb);
  builder_.add_username(username);
  builder_.add_msgID(msgID);
  return builder_.Finish();
}

}  // namespace gen

#endif  // FLATBUFFERS_GENERATED_GAME_GEN_H_