//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface LMExcalibur : NSObject
{
    NSMapTable *_mapTable;
}

+ (id)sharedExcalibur;
+ (void)initialize;
+ (Class)instanceForClassScheme:(id)arg1;
+ (Class)classForScheme:(id)arg1;
+ (void)registerScheme:(id)arg1 forClass:(Class)arg2;
@property(retain, nonatomic) NSMapTable *mapTable; // @synthesize mapTable=_mapTable;
- (void).cxx_destruct;
- (void)addScheme:(id)arg1 forClass:(Class)arg2;
- (id)init;

@end

