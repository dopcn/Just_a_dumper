//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TDATDataBaseManager : NSObject
{
    struct _opaque_pthread_mutex_t mutex;
    NSMutableArray *_messageArr;
    NSArray *_sendMessages;
    NSString *_fileName;
    unsigned long long _bgTask;
}

+ (id)unArchiveDictionaryWithFileName:(id)arg1;
+ (void)archiveDictionary:(id)arg1 withFileName:(id)arg2;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSArray *sendMessages; // @synthesize sendMessages=_sendMessages;
@property(retain, nonatomic) NSMutableArray *messageArr; // @synthesize messageArr=_messageArr;
- (void).cxx_destruct;
- (id)pathFormFileName:(id)arg1;
- (void)openDBWithFileName:(id)arg1;
- (void)archiveToFile;
- (id)getSendMessages;
- (void)clearSendMessage;
- (void)deleteSendMessage;
- (void)replaceObjectInMessageArrAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)objectInMessageArrAtIndex:(unsigned long long)arg1;
- (void)storeMessageWithFile:(id)arg1;
- (void)storeMessageWithMemory:(id)arg1;
- (id)init;

@end

