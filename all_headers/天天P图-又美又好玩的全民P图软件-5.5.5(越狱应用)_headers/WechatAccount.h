//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WXApiDelegate-Protocol.h"

@class NSString;
@protocol WechatAccountDelegate;

@interface WechatAccount : NSObject <WXApiDelegate>
{
    id <WechatAccountDelegate> _delegate;
    NSString *_wx_request_state;
    NSString *_wx_code;
}

+ (id)sharedManager;
@property(copy, nonatomic) NSString *wx_code; // @synthesize wx_code=_wx_code;
@property(copy, nonatomic) NSString *wx_request_state; // @synthesize wx_request_state=_wx_request_state;
@property(nonatomic) __weak id <WechatAccountDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onResp:(id)arg1;
- (void)loginSuccess;
- (void)logoutAccount;
- (_Bool)loginAccount:(id)arg1;
- (_Bool)canLoginAccount;
- (id)clipWechatCode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

