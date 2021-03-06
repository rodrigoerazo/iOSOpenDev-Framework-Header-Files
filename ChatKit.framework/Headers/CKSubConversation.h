/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKConversationProtocol.h>
#import <ChatKit/_CKConversation.h>

@class IMChat, CKMessage;

@interface CKSubConversation : _CKConversation <CKConversationProtocol> {
@private
	CKMessage *_placeholderMessage;	// 76 = 0x4c
	CKMessage *_latestIncomingMessage;	// 80 = 0x50
	IMChat *_imChat;	// 84 = 0x54
	BOOL _isStale;	// 88 = 0x58
	BOOL _hasPlaceholder;	// 89 = 0x59
	int _groupAddStack;	// 92 = 0x5c
}
@property(readonly, assign, nonatomic) BOOL isStale;	// G=0x83735; @synthesize=_isStale
@property(readonly, retain, nonatomic) IMChat *imChat;	// G=0x84019; @synthesize=_imChat
@property(assign) int unreadCount;	// G=0x84a95; S=0x836fd; converted property
@property(readonly, retain) CKMessage *placeholderMessage;	// G=0x83725; converted property
@property(readonly, retain) CKMessage *latestIncomingMessage;	// G=0x83e59; converted property
- (void)dealloc;	// 0x840d1
- (void)_cleanupMessages;	// 0x84b5d
- (void)updateRecipients:(id)recipients;	// 0x83745
- (void)_recalculateUnreadCounts;	// 0x83775
- (void)resetUnreadCount;	// 0x836e5
// converted property setter: - (void)setUnreadCount:(int)count;	// 0x836fd
// converted property getter: - (int)unreadCount;	// 0x84a95
- (BOOL)hasUnreadMessages;	// 0x83895
- (void)setLoadedMessages:(id)messages;	// 0x84899
- (int)addMessage:(id)message incrementUnreadCount:(BOOL)count;	// 0x844e9
- (BOOL)containsMessage:(id)message;	// 0x838b5
- (void)removeMessage:(id)message postUpdate:(BOOL)update;	// 0x838e1
- (void)removeMessage:(id)message;	// 0x83a0d
- (void)removeAllMessages;	// 0x83a21
- (void)updateMessage:(id)message;	// 0x83ad5
- (void)_deleteAllMessagesAndRemoveGroup:(BOOL)group;	// 0x8441d
- (void)deleteAllMessages;	// 0x83cb5
- (void)deleteAllMessagesAndRemoveGroup;	// 0x83cc9
- (void)beginGroupAdd;	// 0x83711
- (int)endGroupAddIncrementingUnreadCount:(BOOL)count;	// 0x842fd
- (BOOL)isPlaceholder;	// 0x83cdd
- (void)addPlaceholderMessageIfNeededWithDate:(id)date;	// 0x83d15
- (void)_setPlaceholderMessage:(id)message;	// 0x83d81
// converted property getter: - (id)placeholderMessage;	// 0x83725
- (id)latestMessage;	// 0x83dc9
// converted property getter: - (id)latestIncomingMessage;	// 0x83e59
- (id)date;	// 0x83e95
- (void)markAllMessagesAsRead;	// 0x84275
- (void)_reloadMessagesToLimit;	// 0x83ec5
- (void)loadAllMessages;	// 0x83ee9
- (void)loadMoreMessages;	// 0x83ef9
- (void)loadLastMessage;	// 0x83f49
- (void)setLimitToLoad:(int)load;	// 0x84231
- (void)markAsStale;	// 0x841c5
- (BOOL)canBeDowngraded;	// 0x83f8d
- (void)postDowngradeStateChanged;	// 0x84185
// declared property getter: - (id)imChat;	// 0x84019
- (BOOL)isiMessageConversation;	// 0x8408d
// declared property getter: - (BOOL)isStale;	// 0x83735
@end
