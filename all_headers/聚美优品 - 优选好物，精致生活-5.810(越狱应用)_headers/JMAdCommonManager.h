//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface JMAdCommonManager : NSObject
{
    NSDictionary *_adCommonDict;
    NSString *_baseUrl;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(retain, nonatomic) NSDictionary *adCommonDict; // @synthesize adCommonDict=_adCommonDict;
- (void).cxx_destruct;
- (void)openLog;
- (void)getAdCommonWithPosition:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

