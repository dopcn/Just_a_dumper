//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray;

@interface TIMGroupSetting : NSObject
{
    unsigned long long groupFlags;
    NSArray *groupCustom;
    unsigned long long memberFlags;
    NSArray *memberCustom;
}

@property(retain, nonatomic) NSArray *memberCustom; // @synthesize memberCustom;
@property(nonatomic) unsigned long long memberFlags; // @synthesize memberFlags;
@property(retain, nonatomic) NSArray *groupCustom; // @synthesize groupCustom;
@property(nonatomic) unsigned long long groupFlags; // @synthesize groupFlags;
- (void).cxx_destruct;

@end

