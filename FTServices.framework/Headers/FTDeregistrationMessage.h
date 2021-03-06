/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <FTServices/FTIDSMessage.h>
#import <FTServices/NSCopying.h>
#import <FTServices/FTServices-Structs.h>

@class NSData, NSString;

@interface FTDeregistrationMessage : FTIDSMessage <NSCopying> {
	NSData *_validationData;	// 4 = 0x4
	NSString *_protocolVersion;	// 8 = 0x8
}
@property(copy) NSString *protocolVersion;	// G=0x69dd; S=0x69f1; @synthesize=_protocolVersion
@property(copy) NSData *validationData;	// G=0x69a5; S=0x69b9; @synthesize=_validationData
// declared property setter: - (void)setProtocolVersion:(id)version;	// 0x69f1
// declared property getter: - (id)protocolVersion;	// 0x69dd
// declared property setter: - (void)setValidationData:(id)data;	// 0x69b9
// declared property getter: - (id)validationData;	// 0x69a5
- (id)additionalMessageHeaders;	// 0x68a5
- (id)messageBody;	// 0x67a5
- (id)requiredKeys;	// 0x671d
- (id)bagKey;	// 0x6711
- (BOOL)hasRequiredKeys:(id *)keys;	// 0x65f9
- (id)copyWithZone:(NSZone *)zone;	// 0x6579
- (void)dealloc;	// 0x6519
@end
