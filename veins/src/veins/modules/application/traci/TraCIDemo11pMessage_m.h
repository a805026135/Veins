//
// Generated file, do not edit! Created by nedtool 5.4 from veins/modules/application/traci/TraCIDemo11pMessage.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __VEINS_TRACIDEMO11PMESSAGE_M_H
#define __VEINS_TRACIDEMO11PMESSAGE_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0504
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif

// dll export symbol
#ifndef VEINS_API
#  if defined(VEINS_EXPORT)
#    define VEINS_API  OPP_DLLEXPORT
#  elif defined(VEINS_IMPORT)
#    define VEINS_API  OPP_DLLIMPORT
#  else
#    define VEINS_API
#  endif
#endif


namespace veins {

class TraCIDemo11pMessage;
} // namespace veins

#include "veins/base/utils/Coord_m.h" // import veins.base.utils.Coord

#include "veins/modules/messages/BaseFrame1609_4_m.h" // import veins.modules.messages.BaseFrame1609_4

#include "veins/base/utils/SimpleAddress_m.h" // import veins.base.utils.SimpleAddress


namespace veins {

/**
 * Class generated from <tt>veins/modules/application/traci/TraCIDemo11pMessage.msg:30</tt> by nedtool.
 * <pre>
 * packet TraCIDemo11pMessage extends BaseFrame1609_4
 * {
 *     string demoData;
 *     LAddress::L2Type senderAddress = -1;
 *     int serial = 0;
 *     string multicastAddr;
 *     int src = -1; //source address
 *     int dst = -1; //final destination address
 * }
 * </pre>
 */
class VEINS_API TraCIDemo11pMessage : public ::veins::BaseFrame1609_4
{
  protected:
    omnetpp::opp_string demoData;
    LAddress::L2Type senderAddress = -1;
    int serial = 0;
    omnetpp::opp_string multicastAddr;
    int src = -1;
    int dst = -1;

  private:
    void copy(const TraCIDemo11pMessage& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const TraCIDemo11pMessage&);

  public:
    TraCIDemo11pMessage(const char *name=nullptr, short kind=0);
    TraCIDemo11pMessage(const TraCIDemo11pMessage& other);
    virtual ~TraCIDemo11pMessage();
    TraCIDemo11pMessage& operator=(const TraCIDemo11pMessage& other);
    virtual TraCIDemo11pMessage *dup() const override {return new TraCIDemo11pMessage(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual const char * getDemoData() const;
    virtual void setDemoData(const char * demoData);
    virtual const LAddress::L2Type& getSenderAddress() const;
    virtual LAddress::L2Type& getSenderAddressForUpdate() { return const_cast<LAddress::L2Type&>(const_cast<TraCIDemo11pMessage*>(this)->getSenderAddress());}
    virtual void setSenderAddress(const LAddress::L2Type& senderAddress);
    virtual int getSerial() const;
    virtual void setSerial(int serial);
    virtual const char * getMulticastAddr() const;
    virtual void setMulticastAddr(const char * multicastAddr);
    virtual int getSrc() const;
    virtual void setSrc(int src);
    virtual int getDst() const;
    virtual void setDst(int dst);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const TraCIDemo11pMessage& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, TraCIDemo11pMessage& obj) {obj.parsimUnpack(b);}

} // namespace veins

#endif // ifndef __VEINS_TRACIDEMO11PMESSAGE_M_H

