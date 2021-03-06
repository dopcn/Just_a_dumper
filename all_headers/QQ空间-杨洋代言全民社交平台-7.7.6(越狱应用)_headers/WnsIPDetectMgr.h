//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSThread, NSTimer, SKPSMTPMessage;

@interface WnsIPDetectMgr : NSObject
{
    _Bool __isDetectFinish;
    _Bool __emailSendFinish;
    _Bool __autoSendEmail;
    NSString *_uid;
    NSString *_qua;
    id __delegate;
    NSThread *__fromThread;
    NSThread *__detectThread;
    NSThread *__emailThread;
    struct __CFRunLoop *_currentEmailRunLoopRef;
    struct __CFRunLoop *_currentRunLoopRef;
    SKPSMTPMessage *_testMsg;
    NSString *__mailboxSender;
    NSString *__mailboxPwd;
    NSString *__mailboxHost;
    NSString *__mailboxRecverFeedback;
    NSString *__mailboxRecverOther;
    NSTimer *__emailThreadTimer;
}

+ (id)sharedMgr;
@property(retain, nonatomic) NSTimer *_emailThreadTimer; // @synthesize _emailThreadTimer=__emailThreadTimer;
@property(copy) NSString *_mailboxRecverOther; // @synthesize _mailboxRecverOther=__mailboxRecverOther;
@property(copy) NSString *_mailboxRecverFeedback; // @synthesize _mailboxRecverFeedback=__mailboxRecverFeedback;
@property(copy) NSString *_mailboxHost; // @synthesize _mailboxHost=__mailboxHost;
@property(copy) NSString *_mailboxPwd; // @synthesize _mailboxPwd=__mailboxPwd;
@property(copy) NSString *_mailboxSender; // @synthesize _mailboxSender=__mailboxSender;
@property(retain) SKPSMTPMessage *testMsg; // @synthesize testMsg=_testMsg;
@property struct __CFRunLoop *currentRunLoopRef; // @synthesize currentRunLoopRef=_currentRunLoopRef;
@property struct __CFRunLoop *currentEmailRunLoopRef; // @synthesize currentEmailRunLoopRef=_currentEmailRunLoopRef;
@property(nonatomic) _Bool _autoSendEmail; // @synthesize _autoSendEmail=__autoSendEmail;
@property(nonatomic) _Bool _emailSendFinish; // @synthesize _emailSendFinish=__emailSendFinish;
@property(retain, nonatomic) NSThread *_emailThread; // @synthesize _emailThread=__emailThread;
@property(nonatomic) _Bool _isDetectFinish; // @synthesize _isDetectFinish=__isDetectFinish;
@property(retain, nonatomic) NSThread *_detectThread; // @synthesize _detectThread=__detectThread;
@property(retain, nonatomic) NSThread *_fromThread; // @synthesize _fromThread=__fromThread;
@property(nonatomic) id _delegate; // @synthesize _delegate=__delegate;
@property(copy, nonatomic) NSString *qua; // @synthesize qua=_qua;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void)sendSKPSMTPMessage:(id)arg1 Body:(id)arg2 attachFilePath:(id)arg3 attachName:(id)arg4 Type:(int)arg5 delegate:(id)arg6;
- (void)messageReset:(id)arg1;
- (void)messageFailed:(id)arg1 error:(id)arg2;
- (void)messageSent:(id)arg1;
- (void)exitEmailThread;
- (void)runEmailRequests;
- (void)emailThreadTimeout:(id)arg1;
- (void)beginSendEmail:(id)arg1;
- (void)sendEmail:(id)arg1 Body:(id)arg2 attachFilePath:(id)arg3 attachName:(id)arg4 ReceiverType:(int)arg5;
- (_Bool)isValidEmail:(id)arg1;
- (void)setRecvMailbox:(id)arg1;
- (void)setSendMailbox:(id)arg1 Password:(id)arg2 RelayHost:(id)arg3;
- (void)setSendMailbox:(id)arg1 RelayHost:(id)arg2;
- (void)dealloc;
- (id)init;

@end

