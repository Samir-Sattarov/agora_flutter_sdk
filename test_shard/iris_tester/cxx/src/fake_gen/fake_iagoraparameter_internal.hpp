/// Generated by terra, DO NOT MODIFY BY HAND.

#ifndef FAKE_IAGORAPARAMETER_INTERNAL_H_
#define FAKE_IAGORAPARAMETER_INTERNAL_H_

#include "IAgoraParameter.h"

namespace agora {
namespace base {
class FakeIAgoraParameterInternal : public agora::base::IAgoraParameter {
  virtual void release() override {}

  virtual int setBool(char const *key, bool value) override { return 0; }

  virtual int setInt(char const *key, int value) override { return 0; }

  virtual int setUInt(char const *key, unsigned int value) override {
    return 0;
  }

  virtual int setNumber(char const *key, double value) override { return 0; }

  virtual int setString(char const *key, char const *value) override {
    return 0;
  }

  virtual int setObject(char const *key, char const *value) override {
    return 0;
  }

  virtual int setArray(char const *key, char const *value) override {
    return 0;
  }

  virtual int getBool(char const *key, bool &value) override { return 0; }

  virtual int getInt(char const *key, int &value) override { return 0; }

  virtual int getUInt(char const *key, unsigned int &value) override {
    return 0;
  }

  virtual int getNumber(char const *key, double &value) override { return 0; }

  virtual int getString(char const *key, agora::util::AString &value) override {
    return 0;
  }

  virtual int getObject(char const *key, agora::util::AString &value) override {
    return 0;
  }

  virtual int getArray(char const *key, char const *args,
                       agora::util::AString &value) override {
    return 0;
  }

  virtual int setParameters(char const *parameters) override { return 0; }

  virtual int convertPath(char const *filePath,
                          agora::util::AString &value) override {
    return 0;
  }
};

} // namespace base
} // namespace agora

#endif // FAKE_IAGORAPARAMETER_INTERNAL_H_
