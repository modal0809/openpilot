// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: dp.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 8000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(84e5d575c3177d12);

}  // namespace schemas
}  // namespace capnp

namespace cereal {

struct DragonConf {
  DragonConf() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(84e5d575c3177d12, 2, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class DragonConf::Reader {
public:
  typedef DragonConf Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint8_t getDpAtl() const;

  inline bool hasDpLocale() const;
  inline  ::capnp::Text::Reader getDpLocale() const;

  inline  ::uint8_t getDpLateralMode() const;

  inline  ::uint8_t getDpLcMinMph() const;

  inline  ::uint8_t getDpLcAutoMinMph() const;

  inline float getDpLcAutoDelay() const;

  inline bool hasDpIpAddr() const;
  inline  ::capnp::Text::Reader getDpIpAddr() const;

  inline bool getDpUiTop() const;

  inline bool getDpUiSide() const;

  inline  ::int8_t getDpUiVolume() const;

  inline  ::uint8_t getDpUiBrightness() const;

  inline  ::uint8_t getDpUiDisplayMode() const;

  inline bool getDpUiSpeed() const;

  inline bool getDpUiEvent() const;

  inline bool getDpUiFace() const;

  inline bool getDpToyotaSng() const;

  inline bool getDpAccelProfileCtrl() const;

  inline  ::uint8_t getDpAccelProfile() const;

  inline bool getDpToyotaCruiseOverride() const;

  inline  ::uint8_t getDpToyotaCruiseOverrideSpeed() const;

  inline bool getDpToyotaAutoLock() const;

  inline bool getDpToyotaAutoUnlock() const;

  inline bool getDpUseLanelines() const;

  inline bool getDpMapd() const;

  inline bool getDpDashcamd() const;

  inline bool getDpMazdaSteerAlert() const;

  inline  ::int8_t getDpCameraOffset() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class DragonConf::Builder {
public:
  typedef DragonConf Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint8_t getDpAtl();
  inline void setDpAtl( ::uint8_t value);

  inline bool hasDpLocale();
  inline  ::capnp::Text::Builder getDpLocale();
  inline void setDpLocale( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDpLocale(unsigned int size);
  inline void adoptDpLocale(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDpLocale();

  inline  ::uint8_t getDpLateralMode();
  inline void setDpLateralMode( ::uint8_t value);

  inline  ::uint8_t getDpLcMinMph();
  inline void setDpLcMinMph( ::uint8_t value);

  inline  ::uint8_t getDpLcAutoMinMph();
  inline void setDpLcAutoMinMph( ::uint8_t value);

  inline float getDpLcAutoDelay();
  inline void setDpLcAutoDelay(float value);

  inline bool hasDpIpAddr();
  inline  ::capnp::Text::Builder getDpIpAddr();
  inline void setDpIpAddr( ::capnp::Text::Reader value);
  inline  ::capnp::Text::Builder initDpIpAddr(unsigned int size);
  inline void adoptDpIpAddr(::capnp::Orphan< ::capnp::Text>&& value);
  inline ::capnp::Orphan< ::capnp::Text> disownDpIpAddr();

  inline bool getDpUiTop();
  inline void setDpUiTop(bool value);

  inline bool getDpUiSide();
  inline void setDpUiSide(bool value);

  inline  ::int8_t getDpUiVolume();
  inline void setDpUiVolume( ::int8_t value);

  inline  ::uint8_t getDpUiBrightness();
  inline void setDpUiBrightness( ::uint8_t value);

  inline  ::uint8_t getDpUiDisplayMode();
  inline void setDpUiDisplayMode( ::uint8_t value);

  inline bool getDpUiSpeed();
  inline void setDpUiSpeed(bool value);

  inline bool getDpUiEvent();
  inline void setDpUiEvent(bool value);

  inline bool getDpUiFace();
  inline void setDpUiFace(bool value);

  inline bool getDpToyotaSng();
  inline void setDpToyotaSng(bool value);

  inline bool getDpAccelProfileCtrl();
  inline void setDpAccelProfileCtrl(bool value);

  inline  ::uint8_t getDpAccelProfile();
  inline void setDpAccelProfile( ::uint8_t value);

  inline bool getDpToyotaCruiseOverride();
  inline void setDpToyotaCruiseOverride(bool value);

  inline  ::uint8_t getDpToyotaCruiseOverrideSpeed();
  inline void setDpToyotaCruiseOverrideSpeed( ::uint8_t value);

  inline bool getDpToyotaAutoLock();
  inline void setDpToyotaAutoLock(bool value);

  inline bool getDpToyotaAutoUnlock();
  inline void setDpToyotaAutoUnlock(bool value);

  inline bool getDpUseLanelines();
  inline void setDpUseLanelines(bool value);

  inline bool getDpMapd();
  inline void setDpMapd(bool value);

  inline bool getDpDashcamd();
  inline void setDpDashcamd(bool value);

  inline bool getDpMazdaSteerAlert();
  inline void setDpMazdaSteerAlert(bool value);

  inline  ::int8_t getDpCameraOffset();
  inline void setDpCameraOffset( ::int8_t value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class DragonConf::Pipeline {
public:
  typedef DragonConf Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint8_t DragonConf::Reader::getDpAtl() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpAtl() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpAtl( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::hasDpLocale() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool DragonConf::Builder::hasDpLocale() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader DragonConf::Reader::getDpLocale() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder DragonConf::Builder::getDpLocale() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void DragonConf::Builder::setDpLocale( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder DragonConf::Builder::initDpLocale(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void DragonConf::Builder::adoptDpLocale(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> DragonConf::Builder::disownDpLocale() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint8_t DragonConf::Reader::getDpLateralMode() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpLateralMode() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpLateralMode( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpLcMinMph() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpLcMinMph() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpLcMinMph( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpLcAutoMinMph() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpLcAutoMinMph() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpLcAutoMinMph( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline float DragonConf::Reader::getDpLcAutoDelay() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float DragonConf::Builder::getDpLcAutoDelay() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpLcAutoDelay(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::hasDpIpAddr() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool DragonConf::Builder::hasDpIpAddr() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Text::Reader DragonConf::Reader::getDpIpAddr() const {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::Text::Builder DragonConf::Builder::getDpIpAddr() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void DragonConf::Builder::setDpIpAddr( ::capnp::Text::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Text::Builder DragonConf::Builder::initDpIpAddr(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void DragonConf::Builder::adoptDpIpAddr(
    ::capnp::Orphan< ::capnp::Text>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Text>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Text> DragonConf::Builder::disownDpIpAddr() {
  return ::capnp::_::PointerHelpers< ::capnp::Text>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

inline bool DragonConf::Reader::getDpUiTop() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUiTop() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiTop(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<64>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpUiSide() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUiSide() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiSide(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<65>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t DragonConf::Reader::getDpUiVolume() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}

inline  ::int8_t DragonConf::Builder::getDpUiVolume() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiVolume( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<9>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpUiBrightness() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpUiBrightness() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiBrightness( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<10>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpUiDisplayMode() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpUiDisplayMode() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiDisplayMode( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<11>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpUiSpeed() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUiSpeed() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiSpeed(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<66>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpUiEvent() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUiEvent() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiEvent(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<67>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpUiFace() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<68>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUiFace() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<68>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUiFace(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<68>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpToyotaSng() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<69>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpToyotaSng() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<69>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpToyotaSng(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<69>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpAccelProfileCtrl() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<70>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpAccelProfileCtrl() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<70>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpAccelProfileCtrl(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<70>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpAccelProfile() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpAccelProfile() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpAccelProfile( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<12>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpToyotaCruiseOverride() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<71>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpToyotaCruiseOverride() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<71>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpToyotaCruiseOverride(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<71>() * ::capnp::ELEMENTS, value);
}

inline  ::uint8_t DragonConf::Reader::getDpToyotaCruiseOverrideSpeed() const {
  return _reader.getDataField< ::uint8_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}

inline  ::uint8_t DragonConf::Builder::getDpToyotaCruiseOverrideSpeed() {
  return _builder.getDataField< ::uint8_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpToyotaCruiseOverrideSpeed( ::uint8_t value) {
  _builder.setDataField< ::uint8_t>(
      ::capnp::bounded<13>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpToyotaAutoLock() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<112>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpToyotaAutoLock() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<112>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpToyotaAutoLock(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<112>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpToyotaAutoUnlock() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<113>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpToyotaAutoUnlock() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<113>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpToyotaAutoUnlock(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<113>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpUseLanelines() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<114>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpUseLanelines() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<114>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpUseLanelines(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<114>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpMapd() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<115>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpMapd() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<115>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpMapd(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<115>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpDashcamd() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<116>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpDashcamd() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<116>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpDashcamd(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<116>() * ::capnp::ELEMENTS, value);
}

inline bool DragonConf::Reader::getDpMazdaSteerAlert() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<117>() * ::capnp::ELEMENTS);
}

inline bool DragonConf::Builder::getDpMazdaSteerAlert() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<117>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpMazdaSteerAlert(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<117>() * ::capnp::ELEMENTS, value);
}

inline  ::int8_t DragonConf::Reader::getDpCameraOffset() const {
  return _reader.getDataField< ::int8_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS);
}

inline  ::int8_t DragonConf::Builder::getDpCameraOffset() {
  return _builder.getDataField< ::int8_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS);
}
inline void DragonConf::Builder::setDpCameraOffset( ::int8_t value) {
  _builder.setDataField< ::int8_t>(
      ::capnp::bounded<15>() * ::capnp::ELEMENTS, value);
}

}  // namespace

