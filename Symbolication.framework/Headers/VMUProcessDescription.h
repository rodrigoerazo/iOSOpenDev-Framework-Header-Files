/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */


#import <Symbolication/Symbolication-Structs.h>

@class NSCalendarDate, NSMutableArray, NSString, NSArray, NSDictionary;

@interface VMUProcessDescription : NSObject {
	unsigned _task;	// 4 = 0x4
	int _pid;	// 8 = 0x8
	CSTypeRef _symbolicator;	// 12 = 0xc
	NSString *_processName;	// 20 = 0x14
	BOOL _processNameNeedsCorrection;	// 24 = 0x18
	NSString *_executablePath;	// 28 = 0x1c
	BOOL _executablePathNeedsCorrection;	// 32 = 0x20
	unsigned long long _executableLoadAddress;	// 36 = 0x24
	int _cpuType;	// 44 = 0x2c
	BOOL _isNative;	// 48 = 0x30
	BOOL _is64Bit;	// 49 = 0x31
	NSDictionary *_lsApplicationInformation;	// 52 = 0x34
	NSMutableArray *_binaryImages;	// 56 = 0x38
	NSArray *_sortedBinaryImages;	// 60 = 0x3c
	NSDictionary *_binaryImageHints;	// 64 = 0x40
	NSArray *_unreadableBinaryImagePaths;	// 68 = 0x44
	BOOL _binaryImagePostProcessingComplete;	// 72 = 0x48
	NSDictionary *_buildVersionDictionary;	// 76 = 0x4c
	NSDictionary *_osVersionDictionary;	// 80 = 0x50
	NSString *_parentProcessName;	// 84 = 0x54
	NSString *_parentExecutablePath;	// 88 = 0x58
	int _ppid;	// 92 = 0x5c
	NSCalendarDate *_date;	// 96 = 0x60
	NSString *_internalError;	// 100 = 0x64
}
@property(readonly, assign) unsigned task;	// G=0x3de78; converted property
@property(readonly, assign) int pid;	// G=0x3de8c; converted property
@property(readonly, retain) NSString *processName;	// G=0x3deb4; converted property
@property(readonly, retain) NSString *executablePath;	// G=0x3dedc; converted property
@property(readonly, assign) int cpuType;	// G=0x3dea0; converted property
@property(readonly, retain) NSMutableArray *binaryImages;	// G=0x40618; converted property
@property(readonly, retain) NSString *parentProcessName;	// G=0x3dec8; converted property
@property(readonly, retain) NSCalendarDate *date;	// G=0x3de64; converted property
- (id)initWithPid:(int)pid orTask:(unsigned)task;	// 0x3eea8
- (double)_extractDyldInfoFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x41b60
- (id)_readDataFromMemory:(id)memory atAddress:(unsigned long long)address size:(unsigned long)size;	// 0x3df40
- (id)_extractInfoPlistFromSymbolOwner:(CSTypeRef)symbolOwner withNonContiguousMemory:(id)nonContiguousMemory;	// 0x419bc
- (void)_extractBinaryImageInfoFromSymbolOwner:(CSTypeRef)symbolOwner;	// 0x40e8c
// converted property getter: - (id)date;	// 0x3de64
// converted property getter: - (unsigned)task;	// 0x3de78
// converted property getter: - (int)pid;	// 0x3de8c
// converted property getter: - (int)cpuType;	// 0x3dea0
// converted property getter: - (id)processName;	// 0x3deb4
- (id)processIdentifier;	// 0x3dfd4
- (id)displayName;	// 0x3e010
// converted property getter: - (id)parentProcessName;	// 0x3dec8
- (id)processVersionDictionary;	// 0x3ebd8
- (id)_sanitizeVersion:(id)version;	// 0x3e020
- (id)processVersion;	// 0x3e0ac
// converted property getter: - (id)executablePath;	// 0x3dedc
- (id)bundleIdentifier;	// 0x3e168
- (BOOL)isTranslated;	// 0x3def0
- (BOOL)isAppleApplication;	// 0x3e198
- (id)_bundleLock;	// 0x40e58
// converted property getter: - (id)binaryImages;	// 0x40618
- (id)binaryImageDictionaryForAddress:(unsigned long long)address;	// 0x3e21c
- (id)_cpuTypeDescription;	// 0x3e344
- (id)_binaryImagesDescriptionForRanges:(id)ranges;	// 0x3ff58
- (id)_rangesOfBinaryImages:(id)binaryImages forBacktraces:(id)backtraces;	// 0x3fae8
- (id)binaryImagesDescriptionForBacktraces:(id)backtraces;	// 0x3e420
- (id)binaryImagesDescription;	// 0x3e47c
- (id)_buildVersionDictionary;	// 0x3df10
- (id)_buildInfoDescription;	// 0x3e490
- (id)_osVersionDictionary;	// 0x3fa44
- (id)_systemVersionDescription;	// 0x3e5b8
- (id)processDescriptionHeader;	// 0x3e6b0
- (id)dateAndVersionDescription;	// 0x3ea44
- (id)description;	// 0x3eae4
- (void)dealloc;	// 0x3f890
@end
