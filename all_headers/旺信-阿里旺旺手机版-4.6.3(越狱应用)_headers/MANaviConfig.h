//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MANaviConfig : NSObject
{
    NSString *_appScheme;
    NSString *_appName;
    long long _strategy;
    CDStruct_2c43369c _destination;
}

@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) CDStruct_c3b9c2ee destination; // @synthesize destination=_destination;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
- (void).cxx_destruct;
- (id)description;

@end

