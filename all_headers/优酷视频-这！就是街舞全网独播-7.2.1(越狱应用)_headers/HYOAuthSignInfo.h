//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface HYOAuthSignInfo : NSObject
{
    NSString *_sdkVersion;
    NSString *_clientId;
    NSString *_source;
}

@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
- (void).cxx_destruct;
- (id)toJsonDict;

@end

