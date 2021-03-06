//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface TVHRemoteConnectorHelper : NSObject
{
    NSString *_appVersionCode;
    NSString *_phoneName;
    NSString *_devVersion;
    NSData *_unknownConnectData;
    NSData *_normalConnectData;
    NSData *_detectConnectData;
    NSData *_qrcodeConnectData;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSData *qrcodeConnectData; // @synthesize qrcodeConnectData=_qrcodeConnectData;
@property(retain, nonatomic) NSData *detectConnectData; // @synthesize detectConnectData=_detectConnectData;
@property(retain, nonatomic) NSData *normalConnectData; // @synthesize normalConnectData=_normalConnectData;
@property(retain, nonatomic) NSData *unknownConnectData; // @synthesize unknownConnectData=_unknownConnectData;
@property(retain, nonatomic) NSString *devVersion; // @synthesize devVersion=_devVersion;
@property(retain, nonatomic) NSString *phoneName; // @synthesize phoneName=_phoneName;
@property(retain, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
- (void).cxx_destruct;
- (id)fetchConnectCategoryData:(long long)arg1 magicValue:(long long)arg2;

@end

