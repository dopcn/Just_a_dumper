//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface QUEUEVerifyPhoneViewModel : NSObject
{
    NSString *_mobilePhone;
    NSString *_verifyCode;
    NSDate *_lastRequestVerificationCodeDate;
}

@property(retain, nonatomic) NSDate *lastRequestVerificationCodeDate; // @synthesize lastRequestVerificationCodeDate=_lastRequestVerificationCodeDate;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
- (void).cxx_destruct;
- (id)getVerifyCodeRequest;
- (id)verifyPhoneRequest;

@end

