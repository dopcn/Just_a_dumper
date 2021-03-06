//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

@class NSNumber, NSString;

@interface SSUpdateModel : MTLModel
{
    NSNumber *_orderedIndex;
    NSString *_updateID;
    NSNumber *_createTime;
}

+ (id)fetchOrderedModelsByKey:(id)arg1;
+ (void)removeOrderedModelsByKey:(id)arg1;
+ (void)saveOrderedModelsByKey:(id)arg1 orderedModels:(id)arg2;
+ (id)removeOrderedRepeatModels:(id)arg1 byModels:(id)arg2;
+ (id)removeRepeatModels:(id)arg1 fromModels:(id)arg2;
+ (id)fillUpdateModel:(id)arg1 ByDictionary:(id)arg2;
+ (id)allocModelByDictionary:(id)arg1;
@property(retain, nonatomic) NSNumber *createTime; // @synthesize createTime=_createTime;
@property(copy, nonatomic) NSString *updateID; // @synthesize updateID=_updateID;
@property(retain, nonatomic) NSNumber *orderedIndex; // @synthesize orderedIndex=_orderedIndex;
- (void).cxx_destruct;
- (void)dealloc;

@end

