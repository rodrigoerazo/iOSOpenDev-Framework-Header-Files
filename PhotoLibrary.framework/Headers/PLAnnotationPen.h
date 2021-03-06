/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <PhotoLibrary/XXUnknownSuperclass.h>

@class NSMutableSet, NSSet;

@interface PLAnnotationPen : XXUnknownSuperclass {
	NSMutableSet *_set;	// 4 = 0x4
	id _target;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _context;	// 16 = 0x10
}
@property(assign, nonatomic) id context;	// G=0xa63f5; S=0x5761; @synthesize=_context
@property(assign, nonatomic) SEL selector;	// G=0xa63e5; S=0x4111; @synthesize=_selector
@property(assign, nonatomic) id target;	// G=0xa63d5; S=0x4101; @synthesize=_target
@property(readonly, assign, nonatomic) NSSet *set;	// G=0xa63c5; @synthesize=_set
// declared property setter: - (void)setContext:(id)context;	// 0x5761
// declared property getter: - (id)context;	// 0xa63f5
// declared property setter: - (void)setSelector:(SEL)selector;	// 0x4111
// declared property getter: - (SEL)selector;	// 0xa63e5
// declared property setter: - (void)setTarget:(id)target;	// 0x4101
// declared property getter: - (id)target;	// 0xa63d5
// declared property getter: - (id)set;	// 0xa63c5
- (BOOL)empty;	// 0x6e85
- (void)removeAnnotation:(id)annotation;	// 0x69a9
- (void)removeAnnotations:(id)annotations;	// 0x9249
- (void)removeAllAnnotations;	// 0x452d
- (void)addAnnotations:(id)annotations;	// 0x5771
- (id)description;	// 0xa6381
- (void)dealloc;	// 0xa6335
- (id)init;	// 0x409d
@end
