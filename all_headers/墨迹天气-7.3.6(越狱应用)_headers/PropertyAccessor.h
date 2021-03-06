//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CEDataManager, NSMutableDictionary;

@interface PropertyAccessor : NSObject
{
    CEDataManager *_dataMgr;
    NSMutableDictionary *_staticProperties;
}

@property(retain, nonatomic) NSMutableDictionary *staticProperties; // @synthesize staticProperties=_staticProperties;
@property(readonly, nonatomic) __weak CEDataManager *dataMgr; // @synthesize dataMgr=_dataMgr;
- (void).cxx_destruct;
- (void)setPropertyWithValue:(id)arg1 name:(id)arg2;
- (id)getByName:(id)arg1;
- (id)getDynamic:(id)arg1;
- (void)reloadStaticProperties;
- (id)initWithDataManager:(id)arg1;

@end

