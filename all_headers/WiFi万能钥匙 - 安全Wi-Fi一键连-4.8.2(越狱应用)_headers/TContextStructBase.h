//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TContextStructBase : NSObject
{
    NSString *_mAppId;
    NSString *_mChannelID;
    NSString *_mIDFA;
    NSString *_mMac;
    NSString *_mIMEI;
}

@property(retain, nonatomic) NSString *mIMEI; // @synthesize mIMEI=_mIMEI;
@property(retain, nonatomic) NSString *mMac; // @synthesize mMac=_mMac;
@property(retain, nonatomic) NSString *mIDFA; // @synthesize mIDFA=_mIDFA;
@property(retain, nonatomic) NSString *mChannelID; // @synthesize mChannelID=_mChannelID;
@property(retain, nonatomic) NSString *mAppId; // @synthesize mAppId=_mAppId;
- (void).cxx_destruct;

@end

