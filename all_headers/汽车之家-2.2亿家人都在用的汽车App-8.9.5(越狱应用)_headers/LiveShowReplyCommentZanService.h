//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHNetworkingFramework/AHBaseService.h>

@class AHServerTimeStampManager;

@interface LiveShowReplyCommentZanService : AHBaseService
{
    AHServerTimeStampManager *_serverTimestampManager;
}

@property(retain, nonatomic) AHServerTimeStampManager *serverTimestampManager; // @synthesize serverTimestampManager=_serverTimestampManager;
- (void).cxx_destruct;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3;
- (_Bool)parseJSON:(id)arg1;
- (void)zanReplayComment:(long long)arg1;
- (id)init;

@end

