//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SAPIDIDeviceInfo : NSObject
{
    NSString *_jailbreak;
    NSString *_brand;
    NSString *_model;
    NSArray *_osVersions;
}

+ (id)infoWithDictionary:(id)arg1;
@property(copy, nonatomic) NSArray *osVersions; // @synthesize osVersions=_osVersions;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *brand; // @synthesize brand=_brand;
@property(copy, nonatomic) NSString *jailbreak; // @synthesize jailbreak=_jailbreak;
- (void).cxx_destruct;

@end

