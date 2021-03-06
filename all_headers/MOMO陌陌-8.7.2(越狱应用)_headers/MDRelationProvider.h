//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDDBRelationProvider, MDSortedArray;

@interface MDRelationProvider : NSObject
{
    MDSortedArray *_relationModels;
    MDDBRelationProvider *_dbProvider;
}

@property(retain, nonatomic) MDDBRelationProvider *dbProvider; // @synthesize dbProvider=_dbProvider;
@property(retain, nonatomic) MDSortedArray *relationModels; // @synthesize relationModels=_relationModels;
- (void).cxx_destruct;
- (long long)totalNumber;
- (void)removeAll;
- (void)removeItemWithMomoId:(id)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)loadNewItems;
- (id)init;

@end

