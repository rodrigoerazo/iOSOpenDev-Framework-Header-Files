/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <MIME/MessageHeaders.h>
#import <MIME/MIME-Structs.h>

@class NSMutableDictionary, NSMutableArray;

@interface MutableMessageHeaders : MessageHeaders {
	NSMutableDictionary *_headersAdded;	// 12 = 0xc
	NSMutableArray *_headersRemoved;	// 16 = 0x10
}
- (id)mutableCopy;	// 0xfa45
- (void)dealloc;	// 0x10fd5
- (id)allHeaderKeys;	// 0x10f1d
- (BOOL)hasHeaderForKey:(id)key;	// 0x10e71
- (id)_headerValueForKey:(id)key;	// 0x10d79
- (id)firstHeaderForKey:(id)key;	// 0x10c81
- (void)removeHeaderForKey:(id)key;	// 0x10bdd
- (void)setHeader:(id)header forKey:(id)key;	// 0x10a79
- (void)mergeHeaders:(id)headers;	// 0x1098d
- (void)_appendHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x1071d
- (void)_appendAddedHeaderKey:(id)key value:(id)value toData:(id)data;	// 0x10659
- (id)_copyHeaderValueForKey:(id)key;	// 0x10421
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x102e5
- (id)encodedHeaders;	// 0xff49
- (void)setAddressList:(id)list forKey:(id)key;	// 0xfead
- (void)setAddressListForSender:(id)sender;	// 0xfe89
- (void)setAddressListForTo:(id)to;	// 0xfe65
- (void)setAddressListForCc:(id)cc;	// 0xfe41
- (void)setAddressListForBcc:(id)bcc;	// 0xfe1d
- (void)setReferences:(id)references;	// 0xfdd1
- (void)stripInternalHeaders;	// 0xfcc5
- (id)description;	// 0xfab9
@end
