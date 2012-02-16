/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSCoding.h>
#import <StoreServices/XXUnknownSuperclass.h>

@class SSAccount, NSDictionary;

@interface SSAuthenticateResponse : XXUnknownSuperclass <SSCoding> {
@private
	SSAccount *_authenticatedAccount;	// 4 = 0x4
	NSDictionary *_responseDictionary;	// 8 = 0x8
	int _responseType;	// 12 = 0xc
}
@property(copy, nonatomic) NSDictionary *responseDictionary;	// G=0x1e9dd; S=0x1e9ed; @synthesize=_responseDictionary
@property(assign, nonatomic) int authenticateResponseType;	// G=0x1e9bd; S=0x1e9cd; @synthesize=_responseType
@property(retain, nonatomic) SSAccount *authenticatedAccount;	// G=0x1e989; S=0x1e999; @synthesize=_authenticatedAccount
// declared property setter: - (void)setResponseDictionary:(id)dictionary;	// 0x1e9ed
// declared property getter: - (id)responseDictionary;	// 0x1e9dd
// declared property setter: - (void)setAuthenticateResponseType:(int)type;	// 0x1e9cd
// declared property getter: - (int)authenticateResponseType;	// 0x1e9bd
// declared property setter: - (void)setAuthenticatedAccount:(id)account;	// 0x1e999
// declared property getter: - (id)authenticatedAccount;	// 0x1e989
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x1e94d
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x1e84d
- (void *)copyXPCEncoding;	// 0x1e819
- (id)copyPropertyListEncoding;	// 0x1e759
- (void)dealloc;	// 0x1e6f9
@end