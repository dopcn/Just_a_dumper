//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TBMKTOrangeConfig : NSObject
{
    NSDictionary *_config;
}

+ (id)getValueByGroup:(id)arg1 key:(id)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)notifyOrangeEvent:(id)arg1;

@end

