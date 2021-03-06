/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptObject.h>

@class NSString, NSDateFormatter;

@interface SUScriptDateFormatter : SUScriptObject {
	NSDateFormatter *_dateFormatter;	// 36 = 0x24
}
@property(readonly, assign) unsigned dateFormatterShortStyle;	// G=0xd4051; 
@property(readonly, assign) unsigned dateFormatterNoStyle;	// G=0xd404d; 
@property(readonly, assign) unsigned dateFormatterMediumStyle;	// G=0xd4049; 
@property(readonly, assign) unsigned dateFormatterLongStyle;	// G=0xd4045; 
@property(readonly, assign) unsigned dateFormatterFullStyle;	// G=0xd4041; 
@property(assign) unsigned timeStyle;	// G=0xd3ff1; S=0xd3fa1; 
@property(copy) NSString *localeIdentifier;	// G=0xd3cf9; S=0xd3e89; 
@property(assign) unsigned dateStyle;	// G=0xd3ca9; S=0xd3e39; 
@property(copy) NSString *dateFormat;	// G=0xd3c39; S=0xd3d59; 
+ (void)initialize;	// 0xd41b1
+ (id)webScriptNameForSelector:(SEL)selector;	// 0xd40f9
+ (id)webScriptNameForKey:(const char *)key;	// 0xd4055
- (id)scriptAttributeKeys;	// 0xd4151
- (id)attributeKeys;	// 0xd4141
// declared property getter: - (unsigned)dateFormatterShortStyle;	// 0xd4051
// declared property getter: - (unsigned)dateFormatterNoStyle;	// 0xd404d
// declared property getter: - (unsigned)dateFormatterMediumStyle;	// 0xd4049
// declared property getter: - (unsigned)dateFormatterLongStyle;	// 0xd4045
// declared property getter: - (unsigned)dateFormatterFullStyle;	// 0xd4041
// declared property getter: - (unsigned)timeStyle;	// 0xd3ff1
// declared property setter: - (void)setTimeStyle:(unsigned)style;	// 0xd3fa1
// declared property setter: - (void)setLocaleIdentifier:(id)identifier;	// 0xd3e89
// declared property setter: - (void)setDateStyle:(unsigned)style;	// 0xd3e39
// declared property setter: - (void)setDateFormat:(id)format;	// 0xd3d59
// declared property getter: - (id)localeIdentifier;	// 0xd3cf9
// declared property getter: - (unsigned)dateStyle;	// 0xd3ca9
// declared property getter: - (id)dateFormat;	// 0xd3c39
- (id)_className;	// 0xd3c2d
- (id)stringFromDate:(id)date;	// 0xd3b51
- (double)dateFromString:(id)string;	// 0xd3ae9
- (void)dealloc;	// 0xd3a9d
- (id)init;	// 0xd3a39
@end
