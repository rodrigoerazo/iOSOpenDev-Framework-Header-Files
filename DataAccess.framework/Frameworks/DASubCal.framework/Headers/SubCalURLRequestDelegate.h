/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
 */




@protocol SubCalURLRequestDelegate <NSObject>
- (void)subCalURLRequest:(id)request finishedWithData:(id)data error:(id)error;
- (void)handleTrustChallenge:(id)challenge forSubCalURLRequest:(id)subCalURLRequest;
@optional
- (void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)host continuation:(id)continuation;
- (void)subCalURLRequest:(id)request updatedData:(id)data;
@end

