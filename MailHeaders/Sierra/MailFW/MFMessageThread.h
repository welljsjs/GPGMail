//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCMessage.h"

@class MFMailbox, NSArray, NSIndexSet, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface MFMessageThread : MCMessage
{
    NSMutableArray *_orderedMessages;	// 88 = 0x58
    NSString *_formattedUnreadMessageCount;	// 96 = 0x60
    NSMutableDictionary *_pendingChanges;	// 104 = 0x68
    MCMessage *_newestMessage;	// 112 = 0x70
    MCMessage *_oldestMessage;	// 120 = 0x78
    MCMessage *_newestReceivedMessage;	// 128 = 0x80
    MCMessage *_newestSentMessage;	// 136 = 0x88
    MCMessage *_newestReadMessage;	// 144 = 0x90
    MCMessage *_snippetMessage;	// 152 = 0x98
    MCMessage *_messageWithHighestLibraryID;	// 160 = 0xa0
    NSIndexSet *_primaryMessageIndexes;	// 168 = 0xa8
    unsigned int _unreadMessageCount;	// 176 = 0xb0
    unsigned int _flaggedMessageCount;	// 180 = 0xb4
    unsigned int _junkMessageCount;	// 184 = 0xb8
    unsigned int _deletedMessageCount;	// 188 = 0xbc
    unsigned int _attachmentCount;	// 192 = 0xc0
    BOOL _isThreadOpen;	// 196 = 0xc4
    BOOL _showDateInSubject;	// 197 = 0xc5
}

+ (id)sendersStringForMessages:(id)arg1 primaryIndexes:(id)arg2;	// IMP=0x00000000001f95fd
+ (id)findMessageWithHighestLibraryIDInMessages:(id)arg1;	// IMP=0x00000000001f9450
+ (id)findSnippetMessageInMessages:(id)arg1;	// IMP=0x00000000001f9211
+ (id)findOldestMessageInMessages:(id)arg1;	// IMP=0x00000000001f9145
+ (id)findNewestReadMessageInMessages:(id)arg1;	// IMP=0x00000000001f8f17
+ (id)findNewestSentMessageInMessages:(id)arg1;	// IMP=0x00000000001f8b63
+ (id)findNewestReceivedMessageInMessages:(id)arg1;	// IMP=0x00000000001f87af
+ (id)findNewestMessageInMessages:(id)arg1;	// IMP=0x00000000001f85bb
+ (id)messagesByExpandingThreads:(id)arg1;	// IMP=0x00000000001ef7fa
@property BOOL showDateInSubject; // @synthesize showDateInSubject=_showDateInSubject;
@property BOOL isThreadOpen; // @synthesize isThreadOpen=_isThreadOpen;
- (void).cxx_destruct;	// IMP=0x00000000001f99d7
- (CDUnknownBlockType)_threadComparator;	// IMP=0x00000000001f98a7
@property(readonly, copy, nonatomic) NSSet *allContainingLabelsAndMailboxes;
- (id)gmailLabels;	// IMP=0x00000000001f8142
@property(readonly, nonatomic) MFMailbox *mailbox;
@property(readonly) MCMessage *messageWithHighestLibraryID;
@property(readonly) MCMessage *snippetMessage;
@property(readonly) MCMessage *newestReadMessage;
@property(readonly) MCMessage *newestSentMessage;
@property(readonly) MCMessage *newestMessage;
@property(readonly) MCMessage *oldestMessage;
- (BOOL)willBeDeletedIfMessagesAreDeleted:(id)arg1;	// IMP=0x00000000001f77b6
@property BOOL isOpen;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f7564
- (long long)messageFlags;	// IMP=0x00000000001f742c
- (unsigned long long)numberOfAttachments;	// IMP=0x00000000001f7402
- (unsigned long long)messageSize;	// IMP=0x00000000001f7268
- (id)dataSource;	// IMP=0x00000000001f7260
- (id)messageID;	// IMP=0x00000000001f7165
- (id)senderDisplayNameInfo;	// IMP=0x00000000001f715d
- (id)senderDisplayName;	// IMP=0x00000000001f6f90
@property(readonly, copy) NSString *sendersString;
- (id)sender;	// IMP=0x00000000001f6b89
- (double)dateLastViewedAsTimeIntervalSince1970;	// IMP=0x00000000001f6a31
- (double)dateSentAsTimeIntervalSince1970;	// IMP=0x00000000001f68a6
- (double)dateReceivedAsTimeIntervalSince1970;	// IMP=0x00000000001f671b
- (id)subject;	// IMP=0x00000000001f6678
- (id)to;	// IMP=0x00000000001f6450
- (void)setOldestMessage:(id)arg1;	// IMP=0x00000000001f6355
- (void)setNewestSentMessage:(id)arg1;	// IMP=0x00000000001f62db
- (void)setNewestReceivedMessage:(id)arg1;	// IMP=0x00000000001f6261
- (void)setNewestMessage:(id)arg1;	// IMP=0x00000000001f6179
@property(readonly) unsigned long long numberOfUnreadMessages;
- (id)objectInOrderedMessagesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001f5fca
@property(readonly, copy) NSArray *reverseOrderedMessages;
@property(readonly, copy) NSArray *orderedMessages;
@property(readonly) unsigned long long countOfOrderedMessages;
@property(readonly, copy) NSString *formattedUnreadMessageCount;
- (id)_numberFormatter;	// IMP=0x00000000001f5990
- (void)updateSubjectEtc;	// IMP=0x00000000001f55fd
- (BOOL)flagsHaveChanged;	// IMP=0x00000000001f47d2
- (BOOL)commitPendingChangesForTaskID:(id)arg1;	// IMP=0x00000000001f3f5c
- (void)messageBecamePrimary:(id)arg1;	// IMP=0x00000000001f3c3d
- (void)replaceMessage:(id)arg1 withMessage:(id)arg2;	// IMP=0x00000000001f3906
- (id)_invertedIndexes:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000001f3803
- (id)deleteMessages:(id)arg1;	// IMP=0x00000000001f1ce3
- (id)addMessages:(id)arg1 secondaryMessages:(id)arg2;	// IMP=0x00000000001f00a4
@property(readonly) long long conversationID;
- (id)_changeDictionaryForTaskID:(id)arg1 toModify:(BOOL)arg2;	// IMP=0x00000000001efdd0
- (id)appliedFlagColors;	// IMP=0x00000000001efbc8
- (id)init;	// IMP=0x00000000001efb10

@end
