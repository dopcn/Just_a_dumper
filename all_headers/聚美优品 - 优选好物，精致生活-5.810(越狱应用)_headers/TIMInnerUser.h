//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface TIMInnerUser : NSObject
{
    _Bool userSigExpired;
    int sdkAppId;
    NSString *identifier;
    NSString *accoutType;
    NSString *appidAt3rd;
    unsigned long long tinyId;
    NSData *a2;
}

@property(nonatomic) _Bool userSigExpired; // @synthesize userSigExpired;
@property(copy, nonatomic) NSData *a2; // @synthesize a2;
@property(nonatomic) unsigned long long tinyId; // @synthesize tinyId;
@property(nonatomic) int sdkAppId; // @synthesize sdkAppId;
@property(copy, nonatomic) NSString *appidAt3rd; // @synthesize appidAt3rd;
@property(copy, nonatomic) NSString *accoutType; // @synthesize accoutType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;

@end

