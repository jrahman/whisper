/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "Gossip_types.h"

#include <thrift/lib/cpp/TApplicationException.h>


namespace cpp2 {

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t GossipInterface::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "address") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "port") {
        fid = 2;
        ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->address);
          this->__isset.address = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->port);
          this->__isset.port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t GossipInterface::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipInterface");
  xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->address);
  xfer += prot_->serializedFieldSize("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->port);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipInterface::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipInterface");
  xfer += prot_->serializedFieldSize("address", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->address);
  xfer += prot_->serializedFieldSize("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->serializedSizeI32(this->port);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipInterface::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GossipInterface");
  xfer += prot_->writeFieldBegin("address", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->address);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("port", apache::thrift::protocol::T_I32, 2);
  xfer += prot_->writeI32(this->port);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t GossipNode::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "guid") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
      else if (fname == "interfaces") {
        fid = 2;
        ftype = apache::thrift::protocol::T_SET;
      }
      else if (fname == "currentStatus") {
        fid = 4;
        ftype = apache::thrift::protocol::T_I32;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->guid);
          this->__isset.guid = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->interfaces.clear();
          uint32_t _size0;
          apache::thrift::protocol::TType _etype3;
          xfer += iprot->readSetBegin(_etype3, _size0);
          uint32_t _i4;
          if (_size0 == std::numeric_limits<uint32_t>::max()) {
            for (_i4 = 0; iprot->peekSet(); _i4++) {
               ::cpp2::GossipInterface _elem5;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipInterface>::read(iprot, &_elem5);
              this->interfaces.insert(_elem5);
            }
          }
          else {
            for (_i4 = 0; _i4 < _size0; ++_i4) {
               ::cpp2::GossipInterface _elem6;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipInterface>::read(iprot, &_elem6);
              this->interfaces.insert(_elem6);
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.interfaces = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_I32) {
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->currentStatus = ( ::cpp2::GossipStatus)ecast7;
          this->__isset.currentStatus = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t GossipNode::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipNode");
  xfer += prot_->serializedFieldSize("guid", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->guid);
  xfer += prot_->serializedFieldSize("interfaces", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->interfaces.size());
  for (auto _iter8 = this->interfaces.begin(); _iter8 != this->interfaces.end(); ++_iter8) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipInterface>::serializedSize(prot_, &(*_iter8));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("currentStatus", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32((int32_t)this->currentStatus);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipNode::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipNode");
  xfer += prot_->serializedFieldSize("guid", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->guid);
  xfer += prot_->serializedFieldSize("interfaces", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->interfaces.size());
  for (auto _iter9 = this->interfaces.begin(); _iter9 != this->interfaces.end(); ++_iter9) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipInterface>::serializedSizeZC(prot_, &(*_iter9));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("currentStatus", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->serializedSizeI32((int32_t)this->currentStatus);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipNode::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GossipNode");
  xfer += prot_->writeFieldBegin("guid", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->guid);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("interfaces", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_STRUCT, this->interfaces.size());
  for (auto _iter10 = this->interfaces.begin(); _iter10 != this->interfaces.end(); ++_iter10) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipInterface>::write(prot_, &(*_iter10));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("currentStatus", apache::thrift::protocol::T_I32, 4);
  xfer += prot_->writeI32((int32_t)this->currentStatus);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t GossipNodeInstance::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "updateTimestamp") {
        fid = 1;
        ftype = apache::thrift::protocol::T_I64;
      }
      else if (fname == "node") {
        fid = 2;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->updateTimestamp);
          this->__isset.updateTimestamp = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNode>::read(iprot, &this->node);
          this->__isset.node = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t GossipNodeInstance::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipNodeInstance");
  xfer += prot_->serializedFieldSize("updateTimestamp", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->updateTimestamp);
  xfer += prot_->serializedFieldSize("node", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNode>::serializedSize(prot_, &this->node);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipNodeInstance::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipNodeInstance");
  xfer += prot_->serializedFieldSize("updateTimestamp", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->serializedSizeI64(this->updateTimestamp);
  xfer += prot_->serializedFieldSize("node", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNode>::serializedSizeZC(prot_, &this->node);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipNodeInstance::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GossipNodeInstance");
  xfer += prot_->writeFieldBegin("updateTimestamp", apache::thrift::protocol::T_I64, 1);
  xfer += prot_->writeI64(this->updateTimestamp);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("node", apache::thrift::protocol::T_STRUCT, 2);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNode>::write(prot_, &this->node);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

template <class Protocol_>
uint32_t GossipState::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "sender") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRUCT;
      }
      else if (fname == "liveNodes") {
        fid = 2;
        ftype = apache::thrift::protocol::T_SET;
      }
      else if (fname == "suspectNodes") {
        fid = 4;
        ftype = apache::thrift::protocol::T_SET;
      }
      else if (fname == "deadNodes") {
        fid = 8;
        ftype = apache::thrift::protocol::T_SET;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRUCT) {
          xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &this->sender);
          this->__isset.sender = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->liveNodes.clear();
          uint32_t _size11;
          apache::thrift::protocol::TType _etype14;
          xfer += iprot->readSetBegin(_etype14, _size11);
          uint32_t _i15;
          if (_size11 == std::numeric_limits<uint32_t>::max()) {
            for (_i15 = 0; iprot->peekSet(); _i15++) {
               ::cpp2::GossipNodeInstance _elem16;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem16);
              this->liveNodes.insert(_elem16);
            }
          }
          else {
            for (_i15 = 0; _i15 < _size11; ++_i15) {
               ::cpp2::GossipNodeInstance _elem17;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem17);
              this->liveNodes.insert(_elem17);
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.liveNodes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->suspectNodes.clear();
          uint32_t _size18;
          apache::thrift::protocol::TType _etype21;
          xfer += iprot->readSetBegin(_etype21, _size18);
          uint32_t _i22;
          if (_size18 == std::numeric_limits<uint32_t>::max()) {
            for (_i22 = 0; iprot->peekSet(); _i22++) {
               ::cpp2::GossipNodeInstance _elem23;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem23);
              this->suspectNodes.insert(_elem23);
            }
          }
          else {
            for (_i22 = 0; _i22 < _size18; ++_i22) {
               ::cpp2::GossipNodeInstance _elem24;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem24);
              this->suspectNodes.insert(_elem24);
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.suspectNodes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 8:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->deadNodes.clear();
          uint32_t _size25;
          apache::thrift::protocol::TType _etype28;
          xfer += iprot->readSetBegin(_etype28, _size25);
          uint32_t _i29;
          if (_size25 == std::numeric_limits<uint32_t>::max()) {
            for (_i29 = 0; iprot->peekSet(); _i29++) {
               ::cpp2::GossipNodeInstance _elem30;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem30);
              this->deadNodes.insert(_elem30);
            }
          }
          else {
            for (_i29 = 0; _i29 < _size25; ++_i29) {
               ::cpp2::GossipNodeInstance _elem31;
              xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::read(iprot, &_elem31);
              this->deadNodes.insert(_elem31);
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.deadNodes = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t GossipState::serializedSize(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipState");
  xfer += prot_->serializedFieldSize("sender", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSize(prot_, &this->sender);
  xfer += prot_->serializedFieldSize("liveNodes", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->liveNodes.size());
  for (auto _iter32 = this->liveNodes.begin(); _iter32 != this->liveNodes.end(); ++_iter32) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSize(prot_, &(*_iter32));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("suspectNodes", apache::thrift::protocol::T_SET, 4);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->suspectNodes.size());
  for (auto _iter33 = this->suspectNodes.begin(); _iter33 != this->suspectNodes.end(); ++_iter33) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSize(prot_, &(*_iter33));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("deadNodes", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->deadNodes.size());
  for (auto _iter34 = this->deadNodes.begin(); _iter34 != this->deadNodes.end(); ++_iter34) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSize(prot_, &(*_iter34));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipState::serializedSizeZC(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("GossipState");
  xfer += prot_->serializedFieldSize("sender", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSizeZC(prot_, &this->sender);
  xfer += prot_->serializedFieldSize("liveNodes", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->liveNodes.size());
  for (auto _iter35 = this->liveNodes.begin(); _iter35 != this->liveNodes.end(); ++_iter35) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSizeZC(prot_, &(*_iter35));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("suspectNodes", apache::thrift::protocol::T_SET, 4);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->suspectNodes.size());
  for (auto _iter36 = this->suspectNodes.begin(); _iter36 != this->suspectNodes.end(); ++_iter36) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSizeZC(prot_, &(*_iter36));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("deadNodes", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_STRUCT, this->deadNodes.size());
  for (auto _iter37 = this->deadNodes.begin(); _iter37 != this->deadNodes.end(); ++_iter37) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::serializedSizeZC(prot_, &(*_iter37));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t GossipState::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("GossipState");
  xfer += prot_->writeFieldBegin("sender", apache::thrift::protocol::T_STRUCT, 1);
  xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::write(prot_, &this->sender);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("liveNodes", apache::thrift::protocol::T_SET, 2);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_STRUCT, this->liveNodes.size());
  for (auto _iter38 = this->liveNodes.begin(); _iter38 != this->liveNodes.end(); ++_iter38) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::write(prot_, &(*_iter38));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("suspectNodes", apache::thrift::protocol::T_SET, 4);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_STRUCT, this->suspectNodes.size());
  for (auto _iter39 = this->suspectNodes.begin(); _iter39 != this->suspectNodes.end(); ++_iter39) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::write(prot_, &(*_iter39));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("deadNodes", apache::thrift::protocol::T_SET, 8);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_STRUCT, this->deadNodes.size());
  for (auto _iter40 = this->deadNodes.begin(); _iter40 != this->deadNodes.end(); ++_iter40) {
    xfer += ::apache::thrift::Cpp2Ops<  ::cpp2::GossipNodeInstance>::write(prot_, &(*_iter40));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2