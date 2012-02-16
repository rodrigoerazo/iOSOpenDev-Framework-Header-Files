/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <IMFoundation/IMXMLParserContext.h>

@class NSArray, NSString, NSAttributedString, NSMutableDictionary, NSMutableArray, NSMutableAttributedString;

@interface IMToSuperParserContext : IMXMLParserContext {
	unsigned _underlineCount;	// 8 = 0x8
	unsigned _boldCount;	// 12 = 0xc
	unsigned _italicCount;	// 16 = 0x10
	unsigned _strikethroughCount;	// 20 = 0x14
	unsigned _messagePartNumber;	// 24 = 0x18
	NSMutableArray *_fontFamilyStack;	// 28 = 0x1c
	NSMutableArray *_fontSizeStack;	// 32 = 0x20
	NSMutableArray *_linkStack;	// 36 = 0x24
	NSMutableArray *_backgroundColorStack;	// 40 = 0x28
	NSMutableArray *_foregroundColorStack;	// 44 = 0x2c
	NSMutableDictionary *_currentAttributes;	// 48 = 0x30
	BOOL _didAddBodyAttributes;	// 52 = 0x34
	int _baseWritingDirection;	// 56 = 0x38
	NSString *_backgroundColor;	// 60 = 0x3c
	NSString *_foregroundColor;	// 64 = 0x40
	NSMutableAttributedString *_body;	// 68 = 0x44
	NSMutableArray *_fileTransferGUIDs;	// 72 = 0x48
}
@property(assign, setter=setRightToLeft:) BOOL isRightToLeft;	// G=0x12069; S=0x12049; 
@property(assign) int baseWritingDirection;	// G=0x120cd; S=0x120dd; @synthesize=_baseWritingDirection
@property(retain, nonatomic) NSArray *fileTransferGUIDs;	// G=0x6171; S=0x12089; @synthesize=_fileTransferGUIDs
@property(readonly, assign, nonatomic) NSAttributedString *body;	// G=0x5fb5; 
@property(retain, nonatomic) NSString *foregroundColor;	// G=0x120bd; S=0x5c0d; @synthesize=_foregroundColor
@property(retain, nonatomic) NSString *backgroundColor;	// G=0x120ad; S=0x5be9; @synthesize=_backgroundColor
// declared property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x120dd
// declared property getter: - (int)baseWritingDirection;	// 0x120cd
// declared property setter: - (void)setForegroundColor:(id)color;	// 0x5c0d
// declared property getter: - (id)foregroundColor;	// 0x120bd
// declared property setter: - (void)setBackgroundColor:(id)color;	// 0x5be9
// declared property getter: - (id)backgroundColor;	// 0x120ad
// declared property setter: - (void)setFileTransferGUIDs:(id)guids;	// 0x12089
// declared property getter: - (id)fileTransferGUIDs;	// 0x6171
// declared property getter: - (BOOL)isRightToLeft;	// 0x12069
// declared property setter: - (void)setRightToLeft:(BOOL)left;	// 0x12049
// declared property getter: - (id)body;	// 0x5fb5
- (void)appendInlineImageWithGUID:(id)guid filename:(id)filename width:(int)width height:(int)height;	// 0x11ded
- (void)appendFileTransferWithGUID:(id)guid;	// 0x11dc9
- (void)appendString:(id)string;	// 0x5df9
- (void)_incrementMessagePartNumber;	// 0x11d55
- (void)popForegroundColor;	// 0x11d25
- (void)pushForegroundColor:(id)color;	// 0x11ce9
- (void)popBackgroundColor;	// 0x11cb9
- (void)pushBackgroundColor:(id)color;	// 0x11c7d
- (void)popLink;	// 0x11c4d
- (void)pushLink:(id)link;	// 0x11c11
- (void)popFontSize;	// 0x5f75
- (void)pushFontSize:(id)size;	// 0x5c31
- (void)popFontFamily;	// 0x11bd5
- (void)pushFontFamily:(id)family;	// 0x11b95
- (void)_popValueFromStack:(id)stack attributeName:(id)name;	// 0x11b29
- (void)_pushValue:(id)value ontoStack:(id)stack attributeName:(id)name;	// 0x11ae1
- (void)decrementStrikethroughCount;	// 0x11a91
- (void)incrementStrikethroughCount;	// 0x11a1d
- (void)decrementUnderlineCount;	// 0x119cd
- (void)incrementUnderlineCount;	// 0x11959
- (void)decrementItalicCount;	// 0x11909
- (void)incrementItalicCount;	// 0x11895
- (void)decrementBoldCount;	// 0x11845
- (void)incrementBoldCount;	// 0x117d1
- (void)_updateFontSize;	// 0x1174d
- (void)_updateFontFamily;	// 0x116c9
- (void)_clearIvars;	// 0x57a9
- (void)_initIvars;	// 0x585d
- (id)resultsForLogging;	// 0x1166d
- (id)name;	// 0x11661
- (void)reset;	// 0x5755
- (void)dealloc;	// 0x61d9
@end