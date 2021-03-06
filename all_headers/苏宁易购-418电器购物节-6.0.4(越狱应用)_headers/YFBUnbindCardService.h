//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol UnbindCardServiceDelegate;

@interface YFBUnbindCardService : NSObject
{
    id <UnbindCardServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <UnbindCardServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)verifyPasswordServiceBackResult:(_Bool)arg1 errorCode:(id)arg2;
- (void)unbindServiceBackResult:(_Bool)arg1 errorCode:(id)arg2;
- (void)beginUnbindCardWithCardID:(id)arg1 quickPayCardID:(id)arg2 bankNameAbbr:(id)arg3 isQuikOpen:(id)arg4 isWithdrawOpen:(id)arg5;
- (id)URLEncoding:(id)arg1;
- (void)beginCheckUserPaymentPasswordWithAccountNO:(id)arg1 password:(id)arg2;

@end

