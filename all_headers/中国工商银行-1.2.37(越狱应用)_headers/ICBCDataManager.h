//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ICBCDataManager : NSObject
{
}

+ (void)clearDataWithKey:(id)arg1 andFrom:(unsigned long long)arg2;
+ (id)readDataWithKey:(id)arg1 andFrom:(unsigned long long)arg2 andUseRandom:(_Bool)arg3;
+ (void)saveDataWithKey:(id)arg1 andValue:(id)arg2 andSaveTo:(unsigned long long)arg3 andUseRandom:(_Bool)arg4;
+ (id)sharedManager;
- (id)init;

@end

