//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface YYAdReportConfig : NSObject
{
    NSNumber *_result;
    NSMutableDictionary *_configDictionary;
}

@property(retain, nonatomic) NSMutableDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(retain, nonatomic) NSNumber *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (id)findAdvertiseInfoWithAdId:(id)arg1;
- (id)initWithDict:(id)arg1;

@end

