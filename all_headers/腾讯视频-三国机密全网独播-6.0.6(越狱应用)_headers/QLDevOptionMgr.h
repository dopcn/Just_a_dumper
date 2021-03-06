//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface QLDevOptionMgr : NSObject
{
    NSArray *_aryOptions;
    NSArray *_aryOptionTitles;
    NSMutableDictionary *_dicDevOptions;
}

+ (_Bool)userHasSyncDevOption;
+ (void)storeUserHasSyncDevOption;
+ (void)tryToSyncAllOptionItems;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *dicDevOptions; // @synthesize dicDevOptions=_dicDevOptions;
@property(retain, nonatomic) NSArray *aryOptionTitles; // @synthesize aryOptionTitles=_aryOptionTitles;
@property(retain, nonatomic) NSArray *aryOptions; // @synthesize aryOptions=_aryOptions;
- (void).cxx_destruct;
- (void)syncAllOptionItems;
- (id)optionValueForKey:(id)arg1;
- (void)syncOptionItem:(id)arg1;
- (_Bool)isOptionSelected:(id)arg1;
- (id)init;

@end

