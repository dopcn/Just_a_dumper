//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PUserInfo-Protocol.h"

@class NSString;

@interface PUserInfo : NSObject <PUserInfo>
{
    long long _userId;
    NSString *_logo;
    NSString *_nick;
    NSString *_desc;
    NSString *_status;
    NSString *_gender;
}

@property(copy, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

