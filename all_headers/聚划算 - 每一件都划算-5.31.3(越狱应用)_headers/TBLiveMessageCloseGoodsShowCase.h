//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBLiveMessageProtocol-Protocol.h"

@class NSString, TBLivePMAdapter;

@interface TBLiveMessageCloseGoodsShowCase : NSObject <TBLiveMessageProtocol>
{
    TBLivePMAdapter *messageInstance;
}

+ (void)send:(id)arg1;
+ (void)registerMessage;
@property(nonatomic) __weak TBLivePMAdapter *messageInstance; // @synthesize messageInstance;
- (void).cxx_destruct;
- (void)recevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

