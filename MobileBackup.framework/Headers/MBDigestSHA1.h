/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <MobileBackup/MBDigest.h>
#import <MobileBackup/MobileBackup-Structs.h>


@interface MBDigestSHA1 : MBDigest {
	CC_SHA1state_st _context;	// 4 = 0x4
}
- (id)init;	// 0xfa61
- (void)updateWithBytes:(const void *)bytes length:(unsigned)length;	// 0xfa15
- (void)finalWithBytes:(void *)bytes length:(unsigned)length;	// 0xf971
- (id)final;	// 0xf931
@end
