//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SAKAppInfo : NSObject
{
    NSString *_version;
    NSString *_bundleVersion;
    NSString *_channel;
    NSString *_type;
    NSString *_platform;
    NSString *_os;
}

@property(retain, nonatomic) NSString *os; // @synthesize os=_os;
@property(retain, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;

@end

