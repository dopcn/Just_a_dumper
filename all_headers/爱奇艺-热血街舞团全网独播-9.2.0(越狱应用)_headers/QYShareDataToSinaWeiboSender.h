//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYShareDataBaseSender.h"

#import "WBMediaTransferProtocol-Protocol.h"

@class NSString;

@interface QYShareDataToSinaWeiboSender : QYShareDataBaseSender <WBMediaTransferProtocol>
{
}

- (void)sendDataToWeiboSDKWithText:(id)arg1 andImage:(id)arg2;
- (void)staticPicShare;
- (void)ordinaryShare;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

