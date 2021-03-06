/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

#import <AppleAccount/AARequest.h>

@class AAAccount;

@interface AAEmailVettingRequest : AARequest {
	AAAccount *_account;	// 12 = 0xc
}
@property(retain, nonatomic) AAAccount *account;	// G=0x9909; S=0x9919; @synthesize=_account
// declared property setter: - (void)setAccount:(id)account;	// 0x9919
// declared property getter: - (id)account;	// 0x9909
- (void)dealloc;	// 0x98bd
- (id)urlRequest;	// 0x961d
- (id)initWithURLString:(id)urlstring account:(id)account;	// 0x9589
- (id)initWithAccount:(id)account;	// 0x9541
@end
