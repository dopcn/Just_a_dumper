//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface FXDAOError : NSError
{
    long long _alertType;
    NSString *_optimizedErrorMsg;
}

+ (id)errorWithCode:(long long)arg1 Message:(id)arg2;
+ (id)errorWithMessage:(id)arg1;
@property(retain, nonatomic) NSString *optimizedErrorMsg; // @synthesize optimizedErrorMsg=_optimizedErrorMsg;
@property(nonatomic) long long alertType; // @synthesize alertType=_alertType;
- (void).cxx_destruct;
- (void)errorCodeMapToErrorMessage:(long long)arg1 errorMsg:(id)arg2;
- (id)errorMsg;

@end

