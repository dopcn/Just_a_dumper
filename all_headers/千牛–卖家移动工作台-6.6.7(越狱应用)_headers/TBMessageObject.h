//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWMessage-Protocol.h"

@class NSDate, NSDictionary, NSManagedObjectID, NSString, YWIMCore, YWMessageBody, YWPerson;

@interface TBMessageObject : NSObject <IYWMessage>
{
    _Bool _outgoing;
    _Bool _hasReaded;
    _Bool _receiverHasReaded;
    NSString *_code;
    NSString *_messageId;
    YWPerson *_messageFromPerson;
    YWPerson *_messageToPerson;
    unsigned long long _messageSendStatus;
    NSString *_conversationId;
    long long _conversationType;
    YWMessageBody *_messageBody;
    NSDate *_time;
    NSString *_ownerName;
    NSDate *_modifyDate;
    YWIMCore *_coreRef;
    NSManagedObjectID *_managedObjectID;
    NSDictionary *_extraInfo;
    NSDictionary *_controlParameters;
    NSString *_rootMsgId;
}

@property(copy, nonatomic) NSString *rootMsgId; // @synthesize rootMsgId=_rootMsgId;
@property(copy, nonatomic) NSDictionary *controlParameters; // @synthesize controlParameters=_controlParameters;
@property(retain, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(retain, nonatomic) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(nonatomic) __weak YWIMCore *coreRef; // @synthesize coreRef=_coreRef;
@property(copy, nonatomic) NSDate *modifyDate; // @synthesize modifyDate=_modifyDate;
@property(retain, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property(nonatomic) _Bool receiverHasReaded; // @synthesize receiverHasReaded=_receiverHasReaded;
@property(nonatomic) _Bool hasReaded; // @synthesize hasReaded=_hasReaded;
@property(nonatomic) _Bool outgoing; // @synthesize outgoing=_outgoing;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(retain, nonatomic) YWMessageBody *messageBody; // @synthesize messageBody=_messageBody;
@property(nonatomic) long long conversationType; // @synthesize conversationType=_conversationType;
@property(copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) unsigned long long messageSendStatus; // @synthesize messageSendStatus=_messageSendStatus;
@property(retain, nonatomic) YWPerson *messageToPerson; // @synthesize messageToPerson=_messageToPerson;
@property(retain, nonatomic) YWPerson *messageFromPerson; // @synthesize messageFromPerson=_messageFromPerson;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)configHasRead:(id)arg1;
- (unsigned long long)getYWStatusFromAMPMessage:(id)arg1;
- (id)initWithAMPMessage:(id)arg1 baseContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

