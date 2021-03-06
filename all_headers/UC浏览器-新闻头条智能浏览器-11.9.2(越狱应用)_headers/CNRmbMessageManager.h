//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLock, NSMutableArray, NSString;

@interface CNRmbMessageManager : NSObject
{
    NSString *_upaasAppKey;
    long long _rmbMessagePushIdCacheLimited;
    NSLock *_lockRmbCache;
    NSMutableArray *_rmbMessagePushIds;
}

@property(retain, nonatomic) NSMutableArray *rmbMessagePushIds; // @synthesize rmbMessagePushIds=_rmbMessagePushIds;
@property(retain, nonatomic) NSLock *lockRmbCache; // @synthesize lockRmbCache=_lockRmbCache;
@property(nonatomic) long long rmbMessagePushIdCacheLimited; // @synthesize rmbMessagePushIdCacheLimited=_rmbMessagePushIdCacheLimited;
@property(copy, nonatomic) NSString *upaasAppKey; // @synthesize upaasAppKey=_upaasAppKey;
- (void)sendRmbReceiptPushId:(id)arg1 statusCode:(int)arg2;
- (_Bool)checkPushIdExistInCache:(id)arg1;
- (id)getMessageValueForKey:(id)arg1 onMessageDict:(id)arg2;
- (void)onReceivedRmbMessageData:(id)arg1;
- (void)dealloc;
- (id)init;

@end

