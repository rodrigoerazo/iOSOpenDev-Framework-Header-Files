/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

#import <iCalendar/ICSPredefinedValue.h>
#import <iCalendar/ICSParticipationStatusParameter.h>


@interface ICSParticipationStatusParameter : ICSPredefinedValue {
}
+ (id)participationStatusParameterFromCode:(int)code;	// 0xa0dd
@end

@interface ICSParticipationStatusParameter (ICSWriter)
- (void)_ICSStringWithOptions:(unsigned)options appendingToString:(id)string;	// 0xd0e9
@end

@interface ICSParticipationStatusParameter (iCalendarImport)
+ (id)participationStatusParameterFromICSString:(id)icsstring;	// 0x1df49
@end
