//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface BBATrafficFreeAuthTraceLog : NSObject
{
    NSString *_authSource;
    NSString *_authType;
    NSString *_authValue;
    NSMutableDictionary *_extInfoDict;
}

@property(retain, nonatomic) NSMutableDictionary *extInfoDict; // @synthesize extInfoDict=_extInfoDict;
@property(copy, nonatomic) NSString *authValue; // @synthesize authValue=_authValue;
@property(copy, nonatomic) NSString *authType; // @synthesize authType=_authType;
@property(copy, nonatomic) NSString *authSource; // @synthesize authSource=_authSource;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *extInfo;
- (void)appendExtInfoAsKey:(id)arg1 value:(id)arg2;
- (id)init;

@end

