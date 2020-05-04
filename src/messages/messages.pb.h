// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages.proto

#ifndef PROTOBUF_INCLUDED_messages_2eproto
#define PROTOBUF_INCLUDED_messages_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/descriptor.pb.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_messages_2eproto();
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
namespace hw {
namespace trezor {
namespace messages {

enum MessageType {
  MessageType_Initialize = 0,
  MessageType_Ping = 1,
  MessageType_Success = 2,
  MessageType_Failure = 3,
  MessageType_ChangePin = 4,
  MessageType_WipeDevice = 5,
  MessageType_GetEntropy = 9,
  MessageType_Entropy = 10,
  MessageType_LoadDevice = 13,
  MessageType_ResetDevice = 14,
  MessageType_Features = 17,
  MessageType_PinMatrixRequest = 18,
  MessageType_PinMatrixAck = 19,
  MessageType_Cancel = 20,
  MessageType_ClearSession = 24,
  MessageType_ApplySettings = 25,
  MessageType_ButtonRequest = 26,
  MessageType_ButtonAck = 27,
  MessageType_ApplyFlags = 28,
  MessageType_BackupDevice = 34,
  MessageType_EntropyRequest = 35,
  MessageType_EntropyAck = 36,
  MessageType_PassphraseRequest = 41,
  MessageType_PassphraseAck = 42,
  MessageType_PassphraseStateRequest = 77,
  MessageType_PassphraseStateAck = 78,
  MessageType_RecoveryDevice = 45,
  MessageType_WordRequest = 46,
  MessageType_WordAck = 47,
  MessageType_GetFeatures = 55,
  MessageType_SetU2FCounter = 63,
  MessageType_SdProtect = 79,
  MessageType_GetNextU2FCounter = 80,
  MessageType_NextU2FCounter = 81,
  MessageType_ChangeWipeCode = 82,
  MessageType_FirmwareErase = 6,
  MessageType_FirmwareUpload = 7,
  MessageType_FirmwareRequest = 8,
  MessageType_SelfTest = 32,
  MessageType_GetPublicKey = 11,
  MessageType_PublicKey = 12,
  MessageType_SignTx = 15,
  MessageType_TxRequest = 21,
  MessageType_TxAck = 22,
  MessageType_GetAddress = 29,
  MessageType_Address = 30,
  MessageType_SignMessage = 38,
  MessageType_VerifyMessage = 39,
  MessageType_MessageSignature = 40,
  MessageType_CipherKeyValue = 23,
  MessageType_CipheredKeyValue = 48,
  MessageType_SignIdentity = 53,
  MessageType_SignedIdentity = 54,
  MessageType_GetECDHSessionKey = 61,
  MessageType_ECDHSessionKey = 62,
  MessageType_CosiCommit = 71,
  MessageType_CosiCommitment = 72,
  MessageType_CosiSign = 73,
  MessageType_CosiSignature = 74,
  MessageType_DebugLinkDecision = 100,
  MessageType_DebugLinkGetState = 101,
  MessageType_DebugLinkState = 102,
  MessageType_DebugLinkStop = 103,
  MessageType_DebugLinkLog = 104,
  MessageType_DebugLinkMemoryRead = 110,
  MessageType_DebugLinkMemory = 111,
  MessageType_DebugLinkMemoryWrite = 112,
  MessageType_DebugLinkFlashErase = 113,
  MessageType_DebugLinkLayout = 9001,
  MessageType_EthereumGetPublicKey = 450,
  MessageType_EthereumPublicKey = 451,
  MessageType_EthereumGetAddress = 56,
  MessageType_EthereumAddress = 57,
  MessageType_EthereumSignTx = 58,
  MessageType_EthereumTxRequest = 59,
  MessageType_EthereumTxAck = 60,
  MessageType_EthereumSignMessage = 64,
  MessageType_EthereumVerifyMessage = 65,
  MessageType_EthereumMessageSignature = 66,
  MessageType_NEMGetAddress = 67,
  MessageType_NEMAddress = 68,
  MessageType_NEMSignTx = 69,
  MessageType_NEMSignedTx = 70,
  MessageType_NEMDecryptMessage = 75,
  MessageType_NEMDecryptedMessage = 76,
  MessageType_LiskGetAddress = 114,
  MessageType_LiskAddress = 115,
  MessageType_LiskSignTx = 116,
  MessageType_LiskSignedTx = 117,
  MessageType_LiskSignMessage = 118,
  MessageType_LiskMessageSignature = 119,
  MessageType_LiskVerifyMessage = 120,
  MessageType_LiskGetPublicKey = 121,
  MessageType_LiskPublicKey = 122,
  MessageType_TezosGetAddress = 150,
  MessageType_TezosAddress = 151,
  MessageType_TezosSignTx = 152,
  MessageType_TezosSignedTx = 153,
  MessageType_TezosGetPublicKey = 154,
  MessageType_TezosPublicKey = 155,
  MessageType_StellarSignTx = 202,
  MessageType_StellarTxOpRequest = 203,
  MessageType_StellarGetAddress = 207,
  MessageType_StellarAddress = 208,
  MessageType_StellarCreateAccountOp = 210,
  MessageType_StellarPaymentOp = 211,
  MessageType_StellarPathPaymentOp = 212,
  MessageType_StellarManageOfferOp = 213,
  MessageType_StellarCreatePassiveOfferOp = 214,
  MessageType_StellarSetOptionsOp = 215,
  MessageType_StellarChangeTrustOp = 216,
  MessageType_StellarAllowTrustOp = 217,
  MessageType_StellarAccountMergeOp = 218,
  MessageType_StellarManageDataOp = 220,
  MessageType_StellarBumpSequenceOp = 221,
  MessageType_StellarSignedTx = 230,
  MessageType_CardanoSignTx = 303,
  MessageType_CardanoTxRequest = 304,
  MessageType_CardanoGetPublicKey = 305,
  MessageType_CardanoPublicKey = 306,
  MessageType_CardanoGetAddress = 307,
  MessageType_CardanoAddress = 308,
  MessageType_CardanoTxAck = 309,
  MessageType_CardanoSignedTx = 310,
  MessageType_RippleGetAddress = 400,
  MessageType_RippleAddress = 401,
  MessageType_RippleSignTx = 402,
  MessageType_RippleSignedTx = 403,
  MessageType_MoneroTransactionInitRequest = 501,
  MessageType_MoneroTransactionInitAck = 502,
  MessageType_MoneroTransactionSetInputRequest = 503,
  MessageType_MoneroTransactionSetInputAck = 504,
  MessageType_MoneroTransactionInputsPermutationRequest = 505,
  MessageType_MoneroTransactionInputsPermutationAck = 506,
  MessageType_MoneroTransactionInputViniRequest = 507,
  MessageType_MoneroTransactionInputViniAck = 508,
  MessageType_MoneroTransactionAllInputsSetRequest = 509,
  MessageType_MoneroTransactionAllInputsSetAck = 510,
  MessageType_MoneroTransactionSetOutputRequest = 511,
  MessageType_MoneroTransactionSetOutputAck = 512,
  MessageType_MoneroTransactionAllOutSetRequest = 513,
  MessageType_MoneroTransactionAllOutSetAck = 514,
  MessageType_MoneroTransactionSignInputRequest = 515,
  MessageType_MoneroTransactionSignInputAck = 516,
  MessageType_MoneroTransactionFinalRequest = 517,
  MessageType_MoneroTransactionFinalAck = 518,
  MessageType_MoneroKeyImageExportInitRequest = 530,
  MessageType_MoneroKeyImageExportInitAck = 531,
  MessageType_MoneroKeyImageSyncStepRequest = 532,
  MessageType_MoneroKeyImageSyncStepAck = 533,
  MessageType_MoneroKeyImageSyncFinalRequest = 534,
  MessageType_MoneroKeyImageSyncFinalAck = 535,
  MessageType_MoneroGetAddress = 540,
  MessageType_MoneroAddress = 541,
  MessageType_MoneroGetWatchKey = 542,
  MessageType_MoneroWatchKey = 543,
  MessageType_DebugMoneroDiagRequest = 546,
  MessageType_DebugMoneroDiagAck = 547,
  MessageType_MoneroGetTxKeyRequest = 550,
  MessageType_MoneroGetTxKeyAck = 551,
  MessageType_MoneroLiveRefreshStartRequest = 552,
  MessageType_MoneroLiveRefreshStartAck = 553,
  MessageType_MoneroLiveRefreshStepRequest = 554,
  MessageType_MoneroLiveRefreshStepAck = 555,
  MessageType_MoneroLiveRefreshFinalRequest = 556,
  MessageType_MoneroLiveRefreshFinalAck = 557,
  MessageType_EosGetPublicKey = 600,
  MessageType_EosPublicKey = 601,
  MessageType_EosSignTx = 602,
  MessageType_EosTxActionRequest = 603,
  MessageType_EosTxActionAck = 604,
  MessageType_EosSignedTx = 605,
  MessageType_BinanceGetAddress = 700,
  MessageType_BinanceAddress = 701,
  MessageType_BinanceGetPublicKey = 702,
  MessageType_BinancePublicKey = 703,
  MessageType_BinanceSignTx = 704,
  MessageType_BinanceTxRequest = 705,
  MessageType_BinanceTransferMsg = 706,
  MessageType_BinanceOrderMsg = 707,
  MessageType_BinanceCancelMsg = 708,
  MessageType_BinanceSignedTx = 709,
  MessageType_WebAuthnListResidentCredentials = 800,
  MessageType_WebAuthnCredentials = 801,
  MessageType_WebAuthnAddResidentCredential = 802,
  MessageType_WebAuthnRemoveResidentCredential = 803,
  MessageType_BeamSignMessage = 902,
  MessageType_BeamSignature = 903,
  MessageType_BeamVerifyMessage = 904,
  MessageType_BeamGetPublicKey = 905,
  MessageType_BeamGetOwnerKey = 907,
  MessageType_BeamOwnerKey = 908,
  MessageType_BeamGenerateKey = 909,
  MessageType_BeamGenerateNonce = 910,
  MessageType_BeamECCPoint = 911,
  MessageType_BeamGenerateRangeproof = 912,
  MessageType_BeamRangeproofData = 913,
  MessageType_BeamSignTransaction = 914,
  MessageType_BeamSignedTransaction = 915,
  MessageType_BeamGetNoncePublic = 916,
  MessageType_BeamSignTransactionSend = 917,
  MessageType_BeamSignTransactionSendResult = 918,
  MessageType_BeamSignTransactionReceive = 919,
  MessageType_BeamSignTransactionReceiveResult = 920,
  MessageType_BeamSignTransactionSplit = 921,
  MessageType_BeamSignTransactionSplitResult = 922
};
bool MessageType_IsValid(int value);
const MessageType MessageType_MIN = MessageType_Initialize;
const MessageType MessageType_MAX = MessageType_DebugLinkLayout;
const int MessageType_ARRAYSIZE = MessageType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageType_descriptor();
inline const ::std::string& MessageType_Name(MessageType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageType_descriptor(), value);
}
inline bool MessageType_Parse(
    const ::std::string& name, MessageType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageType>(
    MessageType_descriptor(), name, value);
}
// ===================================================================


// ===================================================================

static const int kWireInFieldNumber = 50002;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_in;
static const int kWireOutFieldNumber = 50003;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_out;
static const int kWireDebugInFieldNumber = 50004;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_debug_in;
static const int kWireDebugOutFieldNumber = 50005;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_debug_out;
static const int kWireTinyFieldNumber = 50006;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_tiny;
static const int kWireBootloaderFieldNumber = 50007;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_bootloader;
static const int kWireNoFsmFieldNumber = 50008;
extern ::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::EnumValueOptions,
    ::google::protobuf::internal::PrimitiveTypeTraits< bool >, 8, false >
  wire_no_fsm;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace messages
}  // namespace trezor
}  // namespace hw

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::hw::trezor::messages::MessageType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::hw::trezor::messages::MessageType>() {
  return ::hw::trezor::messages::MessageType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_messages_2eproto
