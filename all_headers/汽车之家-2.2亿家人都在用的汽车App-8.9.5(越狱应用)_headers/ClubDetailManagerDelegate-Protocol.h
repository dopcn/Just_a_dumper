//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CBDetailService, NSString;

@protocol ClubDetailManagerDelegate <NSObject>
- (void)clubDetailManagerFailed:(CBDetailService *)arg1 errorCode:(long long)arg2;
- (void)clubDetailManagerFinished:(CBDetailService *)arg1 responseString:(NSString *)arg2;
- (void)clubDetailManagerStarted:(CBDetailService *)arg1;
@end

