//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface MCRCActivityModel : NSObject
{
    NSArray *_activityModels;
    NSDictionary *_activityIcons;
}

@property(retain, nonatomic) NSDictionary *activityIcons; // @synthesize activityIcons=_activityIcons;
@property(retain, nonatomic) NSArray *activityModels; // @synthesize activityModels=_activityModels;
- (void).cxx_destruct;
- (_Bool)hasActivityWithType:(long long)arg1;

@end

